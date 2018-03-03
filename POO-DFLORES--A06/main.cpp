#include <iostream>
#include "FormatoHora.h"

int main() {

    FormatoHora Hora1 ( 4,23,25);
    FormatoHora Hora2 (2,5,57);

    FormatoHora Hora3 = Hora1 + Hora2;
    FormatoHora Hora4 = Hora2-Hora1;

    std::string Hresult;
    Hora3.to_String();
    Hora4.to_string();
    std::cout<< Hora3.horas<<","<<Hora3.minutos<<":"<<Hora3.segundos<<"\n";
    std::cout<< Hora4.horas<<":"<<Hora4.minutos<<":"<<Hora4.segundos;



}
