#include <iostream>

int perPangkatRekursif(int bill, int pangkat) {
  if (pangkat == 0) {
    return 1;
  }
  return bill * perPangkatRekursif(bill, pangkat - 1);
}

int main() {
  int bill, pangkat;
  std::cout << "Masukkan Bilangan yang akan diPangkatkan : ";
  std::cin >> bill;
  std::cout << "Masukkan pangkatnya : ";
  std::cin >> pangkat;
  std::cout << std::endl;

  int hasil = perPangkatRekursif(bill, pangkat);
  std::cout << "Hasil "<< bill << "^" << pangkat << " adalah " << hasil << std::endl;

  return 0;
}
