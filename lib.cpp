#include "lib.h"
 void punct::SetPunct(int xi,int yi){
    x=xi;
    y=yi;
 }

void dreapta::SetDreapta(int xi,int yi,float p){
    SetPunct(xi,yi);
    panta = p;
}

void cerc::SetCerc(int xi, int yi,int r){
     SetPunct(xi, yi);
     raza = r;
}

void dreptunghi::SetDreptunghi(int xssi, int yssi, int xdji, int ydji, float L, float l){
    SetPunct(xssi, yssi);
    SetPunct(xdji, ydji);
    lat = l;
    lung = L;
};

void patrat::SetPatrat(int xssi, int yssi, int xdji, int ydji, float l){
    SetPunct(xssi, yssi);
    SetPunct(xdji, ydji);
    latura = l;
}

float cerc::ariec() {
    return 4*pi*raza*raza;
}

float dreptunghi::aried(){
    return lat*lung;
}

float patrat::ariep(){
    return latura*latura;
}

float cerc::perimetruc() {
    return 2*pi*raza;
}

float dreptunghi::perimetrud(){
    return 2*(lat+lung);
}
float patrat::perimetrup(){
    return 4*latura;
}
