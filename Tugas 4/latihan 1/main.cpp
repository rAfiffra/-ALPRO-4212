#include <iostream>

using namespace std;

struct luasPersegiPanjang{
    int panjang, lebar, hsl;
};luasPersegiPanjang persegiPanjang;

struct luasLingkaran{
    float jari2, hsl;
};luasLingkaran lingkaran;

struct volKerucut{
    double r, t, hsl;
};volKerucut kerucut;

struct volBola{
    double r, hsl;
};volBola bola;




int main(){
    cout << "Luas Presegi panjang = ";
        persegiPanjang.panjang = 10;
        persegiPanjang.lebar = 6;
        persegiPanjang.hsl = persegiPanjang.panjang * persegiPanjang.lebar;
    cout << persegiPanjang.hsl <<endl<<endl;

    cout << "Luas Lingkaran = ";
        lingkaran.jari2 = 21;
        lingkaran.hsl = 22/7 * lingkaran.jari2 * lingkaran.jari2;
    cout << lingkaran.hsl <<endl<<endl;

    cout << "Volume kerucut = ";
        kerucut.r = 7;
        kerucut.t = 15;
        kerucut.hsl = 0.3 * 3.14 * (kerucut.r * kerucut.r) * kerucut.t;
    cout << kerucut.hsl <<endl<<endl;

    cout << "Volume Bola = ";
        bola.r = 28;
        bola.hsl = 4/3 * 3.14 * (bola.r * bola.r);
    cout << bola.hsl <<endl<<endl;

    return 0;
}
