#include <stdio.h>

// deret Fibonacci dengan menggunakan fungsi
int fibonacci(int n);

int main() {
    printf("Deret Fibonacci dari 1 sampai 10:\n");

    // Menampilkan deret Fibonacci dari 1 sampai 10
    for (int i = 1; i <= 10; ++i) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");

    return 0;
}

// fungsi untuk menampilkan deret Fibonacci
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

