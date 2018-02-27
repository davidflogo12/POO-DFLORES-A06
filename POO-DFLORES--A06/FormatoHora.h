//
// Created by balta on 26/02/2018.
//

#ifndef POO_DFLORES_A06_FORMATOHORA_H
#define POO_DFLORES_A06_FORMATOHORA_H
#include <iostream>

class FormatoHora {

friend FormatoHora operator+ (const FormatoHora &hi, const FormatoHora &hf);
    friend FormatoHora operator- (const FormatoHora &hi, const FormatoHora &hf);






//Metodos de la clase FormatoHora.
public:
    FormatoHora(int h, int m, int s);
    int getHoras();
    int getMinutos();
    int getSegundos();
    std::string to_String();
    bool validaHrs(int);
    bool validaMS(int);

    int horas;
    int minutos;
    int segundos;
};


#endif //POO_DFLORES_A06_FORMATOHORA_H
