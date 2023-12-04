#include <stdio.h>

int main() {
    printf("Menampilkan bilangan ganjil dari 1 sampai 100:\n");

    // menggunakan sistem loop for
    for (int i = 1; i <= 100; i += 2) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
