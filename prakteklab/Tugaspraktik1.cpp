#include <iostream>

// Deklarasi fungsi
double hitungLuasPersegiPanjang(double panjang, double lebar);
double HKPP(double panjang, double lebar);

int main () {
    // Meminta pengguna memasukan panjang dan lebar
    double panjang;
    std::cout << "masukan panjangpersegi panjang: ";
    std::cin >> panjang;

    double lebar;
    std::cout << "masukan lebar persegi panjang: ";
    std::cin >> lebar;

    // Memanggil fungsi untuk menghitung luas dan keliling persegi panjang
    double luas = hitungLuasPersegiPanjang(panjang,lebar);
    double keliling = HKPP(panjang,lebar);

    // Menampilkan hasil 
    std::cout << "Luas persegi panjang: " << luas << std::endl;
    std::cout << "Keliling persegi panjang: " << keliling << std::endl;

    return 0;
}

// Implementasi fungsi menghitung luas persegio panjang 
double hitungLuasPersegiPanjang(double panjang, double lebar) {
    return panjang * lebar;
}

// Implementasi fungsi mengjitung keliling persegi panjang
double HKPP(double panjang, double lebar) {
    return 2 * (panjang + lebar);
}