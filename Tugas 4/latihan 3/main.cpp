#include <iostream>

using namespace std;

typedef struct {
    float panjang;
    float lebar;
    float hsl;
} PersegiPanjang;

typedef struct{
    float phi = 3.14;
    float r;
    float hsl;
}luasLingkaran;

typedef struct{
    float phi = 3.14;
    float r;
    float t;
    float hsl;
}volKerucut;

typedef struct{
    float phi = 3.14;
    float r;
    float hsl;
}volBola;

int main(){
    //===================================
    PersegiPanjang pp;
    cout << "Luas Persegi panjang : ";
    pp.panjang = 25;
    pp.lebar = 15;
    pp.hsl = pp.lebar * pp.panjang;
    cout << pp.hsl <<endl<<endl;
    //===================================
    luasLingkaran lL;
    cout << "Luas Lingkaran : ";
    lL.r = 14;
    lL.hsl = lL.phi * (lL.r * lL.r);
    cout << lL.hsl<<endl<<endl;
    //===================================
    volKerucut vK;
    cout << "Volume Kerucut : ";
    vK.r = 14;
    vK.t = 20;
    vK.hsl = (1.0 / 3.0) * vK.phi * (vK.r * vK.r) * vK.t;
    cout << vK.hsl<<endl<<endl;
    //===================================
    volBola vb;
    cout << "Volume Bola : ";
    vb.r = 14;
    vb.hsl = vb.phi * (vb.r * vb.r * vb.r);
    cout << vb.hsl<<endl<<endl;
    //===================================


    return 0;
}
