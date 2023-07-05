#include <iostream>

using namespase std;

int pembagianRekursif(int bill, int pembagi) {
    if (pembagi == 0) {
        cout << "Error: Pembagian dengan nol tidak diperbolehkan." <<endl;
        return 0;
    }

    if (bill < pembagi) {
        return 0;
    } else {
        return 1 + pembagianRekursif(bill - pembagi, pembagi);
    }
}

int main() {
    int bill, pembagi;
    cout << "Masukkan Bilangan yang mau dibagi: ";
    cin >> bill;
    cout << "Masukkan Pembagi bilangan: ";
    cin >> pembagi;
    cout <<endl;

    int hasil = pembagianRekursif(bill, pembagi);
    cout << "Hasil pembagian dari " << bill << "/" << pembagi << " adalah  " << hasil <<endl;

    return 0;
}
