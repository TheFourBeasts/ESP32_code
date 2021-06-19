#include <Arduino.h>
class ControladorDeEntradas
{
    public:
    ControladorDeEntradas();
    void controlar(String* topico, String* mensaje);

    private:
    int giro_derecho;
    int giro_izquierdo;
    int baliza;
    char giro_der_encendido;
    char giro_izq_encendido;
    char baliza_encendida;
    void encender_giro_der(String* topico, String* mensaje);
    void apagar_giro_der(String* topico, String* mensaje);
    void encender_giro_izq(String* topico, String* mensaje);
    void apagar_giro_izq(String* topico, String* mensaje);
    void encender_baliza(String* topico, String* mensaje);
    void apagar_baliza(String* topico, String* mensaje);

};

