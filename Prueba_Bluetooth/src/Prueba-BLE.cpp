#include "Arduino.h"
// Alta modificación del ejemplo bt_discovery de espressif
#include "esp_bt.h"
#include "esp_bt_main.h"
#include "esp_bt_device.h"
#include "esp_gap_bt_api.h"

typedef enum {
    APP_GAP_STATE_IDLE = 0,
    APP_GAP_STATE_DEVICE_DISCOVERING,
    APP_GAP_STATE_DEVICE_DISCOVER_COMPLETE,
    APP_GAP_STATE_SERVICE_DISCOVERING,
    APP_GAP_STATE_SERVICE_DISCOVER_COMPLETE,
} app_gap_state_t;

typedef struct {
    bool dev_found;
    uint8_t bdname_len;
    uint8_t eir_len;
    uint8_t rssi;
    uint32_t cod;
    uint8_t eir[ESP_BT_GAP_EIR_DATA_LEN];
    uint8_t bdname[ESP_BT_GAP_MAX_BDNAME_LEN + 1];
    esp_bd_addr_t bda;
    app_gap_state_t state;
} app_gap_cb_t;

static app_gap_cb_t m_dev_info;

static EventGroupHandle_t evento_envio_bt;
const int ESCANEO_BT_ACABADO = BIT0;

void bt_app_gap_cb(esp_bt_gap_cb_event_t event, esp_bt_gap_cb_param_t *param){
    app_gap_cb_t *p_dev = &m_dev_info;
    int32_t rssi = 0;
    esp_bt_gap_dev_prop_t *p;

    switch (event) {
      case ESP_BT_GAP_DISC_RES_EVT: {
        for (int i = 0; i < param->disc_res.num_prop; i++) {
          p = param->disc_res.prop + i;
          rssi = *(int8_t *)(p->val);
        }
			break;
		}
		case ESP_BT_GAP_DISC_STATE_CHANGED_EVT: {
			if (param->disc_st_chg.state == ESP_BT_GAP_DISCOVERY_STOPPED) {
				printf( "Device discovery stopped.\n");

				xEventGroupSetBits(evento_envio_bt, ESCANEO_BT_ACABADO);
				p_dev->state = APP_GAP_STATE_DEVICE_DISCOVERING;
				esp_bt_gap_start_discovery(ESP_BT_INQ_MODE_GENERAL_INQUIRY, 10, 0);
			} else if (param->disc_st_chg.state == ESP_BT_GAP_DISCOVERY_STARTED) {
				printf( "Discovery started.\n");
			}
			break;
		}
		default: {
			printf("Event: %d\n", event);
			break;
		}
    }
    return;
}

void bt_inicializar(void){
	evento_envio_bt = xEventGroupCreate();
    esp_bt_controller_mem_release(ESP_BT_MODE_BLE);
    esp_bt_controller_config_t bt_cfg = BT_CONTROLLER_INIT_CONFIG_DEFAULT();
	esp_bt_controller_init(&bt_cfg);
	esp_bt_controller_enable(ESP_BT_MODE_CLASSIC_BT);
	esp_bluedroid_init();
}	

void bt_escaneo(void){
	esp_bluedroid_enable();
    esp_bt_gap_set_scan_mode(ESP_BT_SCAN_MODE_CONNECTABLE_DISCOVERABLE);
    esp_bt_gap_register_callback(bt_app_gap_cb);
    app_gap_cb_t *p_dev = &m_dev_info;
    memset(p_dev, 0, sizeof(app_gap_cb_t));
    p_dev->state = APP_GAP_STATE_DEVICE_DISCOVERING;
    esp_bt_gap_start_discovery(ESP_BT_INQ_MODE_GENERAL_INQUIRY, 10, 0);
}

bool initBluetooth()
{
  if (!btStart()) {
    Serial.println("Failed to initialize controller");
    return false;
  }
 
  if (esp_bluedroid_init() != ESP_OK) {
    Serial.println("Failed to initialize bluedroid");
    return false;
  }
 
  if (esp_bluedroid_enable() != ESP_OK) {
    Serial.println("Failed to enable bluedroid");
    return false;
  }
 
}
 
void printDeviceAddress() {
 
  const uint8_t* point = esp_bt_dev_get_address();
 
  for (int i = 0; i < 6; i++) {
 
    char str[3];
 
    sprintf(str, "%02X", (int)point[i]);
    Serial.print(str);
 
    if (i < 5){
      Serial.print(":");
    }
 
  }
}

void setup() {
  Serial.begin(115200);
  bt_inicializar();
  bt_escaneo();
  printDeviceAddress();
}
 
void loop() {}
