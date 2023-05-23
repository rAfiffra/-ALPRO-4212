#include <iostream>

int pembagianRekursif(int bill, int pembagi) {
    if (pembagi == 0) {
        std::cout << "Error: Pembagian dengan nol tidak diperbolehkan." << std::endl;
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
    std::cout << "Masukkan Bilangan yang mau dibagi: ";
    std::cin >> bill;
    std::cout << "Masukkan Pembagi bilangan: ";
    std::cin >> pembagi;
    std::cout <<"\n";

    int hasil = pembagianRekursif(bill, pembagi);
    std::cout << "Hasil pembagian dari "<< bill << "/" << pembagi <<" adalah  " << hasil << std::endl;

    return 0;
}
