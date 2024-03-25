#include <iostream>

int main() {
    // menghitung panjang array
    int arr[] = {2, 5, 3, 2, 4};
    int length = sizeof(arr) / sizeof(arr[0]);

    // loop untuk menghasilkan isi array
    for (int i = 0; i < length; i++) {
        std::cout << arr[i] << " ";
    }
    // menampilkan isi array
    std::cout << std::endl;

    return 0;
}