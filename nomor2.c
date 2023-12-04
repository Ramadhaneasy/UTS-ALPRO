#include <stdio.h>
#include <stdbool.h>

// Check bilangan prima atau bukan dengan fungsi
int isPrime(int num);

int main() {
    int angka;

    for (int i = 0; i < 3; ++i) {
        // Input bilangan bulat
        printf("Masukkan sebuah bilangan bulat positif: ");
        scanf("%d", &angka);

        // Fungsi untuk mengecek apakah bilangan tersebut prima atau tidak
        if (isPrime(angka)) {
            printf("%d adalah bilangan prima.\n", angka);
        } else {
            printf("%d bukan bilangan prima.\n", angka);
        }
    }

    return 0;
}

// Menggunakan Fungsi
int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    if (num <= 3) {
        return 1;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return 0;
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}
