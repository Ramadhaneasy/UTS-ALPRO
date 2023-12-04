#include <stdio.h>

// menghitung faktorial
unsigned long long faktorial(int n);

int main() {
    int bilangan;

    // Input bilangan
    printf("Masukkan bilangan untuk menghitung faktorial: ");
    scanf("%d", &bilangan);

    // Memanggil fungsi faktorial dan menampilkan hasil
    if (bilangan < 0) {
        printf("Faktorial tidak terdefinisi untuk bilangan negatif.\n");
    } else {
        printf("Faktorial dari %d adalah %llu\n", bilangan, faktorial(bilangan));
    }

    return 0;
}

// Definisi fungsi faktorial
unsigned long long faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        unsigned long long result = 1;
        for (int i = 2; i <= n; ++i) {
            result *= i;
        }
        return result;
    }
}
