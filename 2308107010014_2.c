#include <stdio.h>
int main() {
    int tahun;
    printf("Masukkan tahun (hanya bisa 4 digit angka): ");
    scanf("%d", &tahun);

    if (tahun < 1000 || tahun > 9999) {
        printf("Inputan salah, hanya bisa masukkan tahun yang terdiri dari 4 digit angka.\n");
        return 1; 
    }
    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
        printf("%d adalah tahun kabisat.\n", tahun);
    } else {
        printf("%d bukan termasuk tahun kabisat.\n", tahun);
    }
    return 0;
}