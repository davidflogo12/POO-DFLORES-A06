#include <iostream>
#include "FormatoHora.h"

int main() {

    FormatoHora tiempo1 (12,24,10);
    FormatoHora tiempo2 (9,56,56);

    FormatoHora tiempofinal = tiempo1 + tiempo2;
    FormatoHora tiempofinal2 = tiempo2 - tiempo1;

    std::cout<< tiempofinal.horas<< ":"<< tiempofinal.minutos<<":"tiempofinal.segundos;
    std::cout<< tiempofinal2.horas<<":"<< tiempofinal2.minutos<<":"tiempofinal2.segundos;





    }