#include <iostream>
#include <string>

using namespace std;

struct Sepeda {
    string  Merk = "Polygon",
            Type = "Sepeda Gunung",
            Harga = "2.000.000";
    int Tahun = 2013;
};

int main() {
    Sepeda sepedaku;

    Sepeda* spd = &sepedaku;


    cout << "Merk: " << spd->Merk << endl;
    cout << "Type: " << spd->Type << endl;
    cout << "Tahun: " << spd->Tahun << endl;
    cout << "Harga: " << spd->Harga << endl;

    return 0;
}
