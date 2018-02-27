//
// Created by balta on 26/02/2018.
//

#include "FormatoHora.h"
#include <cmath>
FormatoHora::FormatoHora(int h, int m, int s) {
    this->horas=h;
    this->minutos=m;
    this->segundos=s;
    std::cout<<this->to_String()<<"\n";
}

FormatoHora operator+ (const FormatoHora &hi, const FormatoHora &hf){
    int resA = (hf.horas + hi.segundos);
    int resB = (hf.minutos+ hi.minutos );
    int resC = (hf.segundos+ hi.segundos);

    if(resC >= 60){
        resB= resB++;
    }
    else if(resB >= 60){resA =
        resA++;

    }
    FormatoHora resultado = *new FormatoHora(resC, resB, resA);
    return resultado;
}
FormatoHora operator- (const FormatoHora &hi, const FormatoHora &hf){
    int resA = (hf.horas + hi.segundos);
    int resB = (hf.minutos+ hi.minutos );
    int resC = (hf.segundos+ hi.segundos);

    if(resC >= 60){
        resB= resB++;
    }
    else if(resB >= 60){resA =
                                resA++;

    }
    FormatoHora resultado = *new FormatoHora(resC, resB, resA);
    return resultado;
}







