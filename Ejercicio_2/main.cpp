#include <iostream>
#include <stdio.h>
#include <stdint.h>
using namespace std;

uint16_t signal[] = {
#include "sgn.h"
}; //cargo los datos de la señal

int main(){

    for(int i = 0; i < 63; i++)
        cout << signal[i] << endl ; //los imprimo en pantalla
    return 0;
}

