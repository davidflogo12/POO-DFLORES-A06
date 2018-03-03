//
// Created by balta on 26/02/2018.
//

#include "FormatoHora.h"
#include <iostream>

FormatoHora::FormatoHora( int h, int m, int s){
    this -> horas=h;
    this -> minutos=m;
    this ->segundos=s;

}

FormatoHora operator+ (const FormatoHora &hi, const FormatoHora &hf ){
    int hr, mr, sr;

    hr = hi.horas + hf.horas;
    mr = hi.minutos + hf.minutos;
    sr = hi.segundos + hf.segundos;


    FormatoHora Hresult = *new FormatoHora(hr, mr, sr);
    Hresult.validar();
    return Hresult;
}
std::string FormatoHora::to_String() {
    std::string Thoras, Tsegundos, Tminutos;

    Thoras = std::to_string(gethora());
    Tsegundos = std::to_string(getsegundos());
    Tminutos = std::to_string(getminutos());

    if (getminutos() < 10 && getsegundos() <10) {
        return Thoras+ ":0"+Tminutos+":0"+Tsegundos;

    }
    else if (getminutos()< 10) {
        return Thoras+ ":0"+Tminutos+":"+Tsegundos;
    }
    else if (getsegundos() < 10) {
        return Thoras+ ":"+Tminutos+":0"+Tsegundos;
    }
    else {
        return Thoras+ ":"+Tminutos+":"+Tsegundos;
    }



}





FormatoHora operator- (const FormatoHora &hi, const FormatoHora &hf ) {
    int hr, mr, sr;

    hr = hi.horas - hf.horas;
    mr = hi.minutos - hf.minutos;
    sr = hi.segundos - hf.segundos;

    FormatoHora Hresult = *new FormatoHora(hr, mr, sr);
    Hresult.validar();
    return Hresult;

}


bool FormatoHora::validar()  {
    int hr,mr,sr;

    hr= gethora();
    mr= getminutos();
    sr= getsegundos();

    if (sr > 60){
        sr = sr -60;
        mr++;
    }
    if (mr > 60){
        mr = mr - 60;
        hr++;
    }
    if (hr > 24){
        hr = hr - 24;
    }


}


int FormatoHora::gethora(){
    return horas;
}
int FormatoHora::getminutos(){
    return minutos;
}
int FormatoHora::getsegundos(){
    return this->segundos;}

void FormatoHora::sethora(const int h){
    FormatoHora::horas=h; }

void FormatoHora::setmintuos(const int m){
    FormatoHora::minutos = m ;
}
void FormatoHora::setsegundos(const int s){
    FormatoHora::segundos = s;
}



