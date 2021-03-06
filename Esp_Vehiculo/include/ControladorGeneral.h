#include <Arduino.h>
class ControladorGeneral
{
    public:
    ControladorGeneral();
    void controlar_entrada(String* topico, String* mensaje);
    void controlar_salida(char* topico, String mensaje);
    int getBaliza();
    void encenderBaliza();
    int getGiroDerecho();
    int getGiroIzquierdo();
    int getBocina();
    int getEstadoVehiculo();
    int getEstadoAlarma();

    private:
    int giro_derecho;
    int giro_izquierdo;
    char giro_der_encendido;
    char giro_izq_encendido;
    char baliza_encendida;
    char bocina_encendida;
    int estado_vehiculo;
    int estado_alarma;
    int baja;
    int alta;
    //int interior;
    int reflector;
    int contacto;
    void controlar_luces(String topico, String mensaje);
    void encender_apagar(String mensaje, int pin);
    void encender_apagar_rele(String mensaje, int pin);
    void encender_giro_der(String* topico, String* mensaje);
    void apagar_giro_der(String* topico, String* mensaje);
    void encender_giro_izq(String* topico, String* mensaje);
    void apagar_giro_izq(String* topico, String* mensaje);
    void encender_apagar_baliza(String mensaje);
    void apagar_baliza(String* topico, String* mensaje);
    void encenderBocina(String mensaje);
    void encenderVehiculo(String mensaje);
    void abrir_puertas(String mensaje);


};

