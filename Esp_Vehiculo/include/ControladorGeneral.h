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

    private:
    int giro_derecho;
    int giro_izquierdo;
    //int baliza;
    char giro_der_encendido;
    char giro_izq_encendido;
    char baliza_encendida;
    int posicion;
    int baja;
    int alta;
    int interior;
    int reflector;
    int contacto;
    int puertas;
    void controlar_luces(String topico, String mensaje);
    void encender_apagar(String mensaje, int pin);
    void encender_apagar_rele(String mensaje, int pin);
    void encender_giro_der(String* topico, String* mensaje);
    void apagar_giro_der(String* topico, String* mensaje);
    void encender_giro_izq(String* topico, String* mensaje);
    void apagar_giro_izq(String* topico, String* mensaje);
    void encender_apagar_baliza(String mensaje);
    void apagar_baliza(String* topico, String* mensaje);


};

