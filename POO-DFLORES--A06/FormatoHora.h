//
// Created by balta on 26/02/2018.
//

#ifndef POO_DFLORES_A06_FORMATOHORA_H
#define POO_DFLORES_A06_FORMATOHORA_H
#include <iostream>

#include <iostream>
class FormatoHora {

    friend FormatoHora operator+ (const FormatoHora &hi, const FormatoHora &hf);
    friend FormatoHora operator- (const FormatoHora &hi, const FormatoHora &hf);

public:
    FormatoHora(int h, int m , int s);
    int horas;
    static int minutos;
    static int segundos;

    int gethora();
    int getminutos();
    int getsegundos();

    void sethora(int h);
    void setminutos(int m);
    void setsegundso(int s);
    std::string to_String();
    bool validar();

};

#endif //POO_DFLORES_A06_FORMATOHORA_H
