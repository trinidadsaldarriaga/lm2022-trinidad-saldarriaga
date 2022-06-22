#include <iostream>
#include "maq_est.hpp"

using namespace std;

int main(){
    ClaseMaq Maq_estados(15);
    Maq_estados.inicializar();  //primero inicializo
   
    while(1){
        Maq_estados.FSM();
    }
    return 0;
}