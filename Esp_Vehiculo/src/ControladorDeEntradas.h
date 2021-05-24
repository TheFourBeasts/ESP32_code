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
};

