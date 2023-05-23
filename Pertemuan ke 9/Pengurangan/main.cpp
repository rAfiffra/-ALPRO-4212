#include <iostream>

int penguranganRekursif(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return penguranganRekursif(a - 1, b - 1);
    }
}

int main() {
    int bil1, bil2;

    std::cout << "Masukkan dua bilangan \n";
    std::cout << "Masukkan bilangan ke-1 : ";
    std::cin >> bil1;
    std::cout << "Masukkan bilangan ke-2: ";
    std::cin >> bil2;

    int hasil = penguranganRekursif(bil1, bil2);
    std::cout << "Hasil penjumlahan: " << hasil << std::endl;
    return 0;
}
