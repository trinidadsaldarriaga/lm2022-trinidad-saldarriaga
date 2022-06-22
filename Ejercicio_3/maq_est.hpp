 #include <iostream>
#include <stdint.h>

typedef enum {ACUMULAR, PROMEDIAR} estado;

uint16_t signal[] = {
#include "sgn.h"
}; //cargo los datos de la señal

class ClaseMaq {        //desarrollo la clase
    private:
    estado E;
    uint32_t acum;
    uint32_t contador; 
    uint32_t N;
    uint32_t size;

    public:
    ClaseMaq(uint32_t _N): N(_N){}
    ~ClaseMaq(){}

    void inicializar(){
        contador = 0;
        acum = 0;
        E = ACUMULAR;                   //inicio en ACUMULAR
    }

    void FSM(){
        switch (E)
        {
        case ACUMULAR:
            acum = acum + signal[contador];
            if(contador == N)       //se cumplen N llamados
                {
                    contador = 0;
                    E = PROMEDIAR;
                }
            else
                contador++;
            break;

        case PROMEDIAR:
            int prom = acum/N;
            printf ("Promedio de N = %d muestras acumuladas: %d", N,prom);
            acum = 0;
            E = ACUMULAR;
            break;

        default:
            inicializar();
            break;

        }
        return;
    }
};
