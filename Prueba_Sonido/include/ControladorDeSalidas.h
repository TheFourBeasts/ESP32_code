#include <Arduino.h>
class ControladorDeSalidas
{
    public:
    ControladorDeSalidas();
    void controlar(char* topico, String mensaje);

    private:
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
};

