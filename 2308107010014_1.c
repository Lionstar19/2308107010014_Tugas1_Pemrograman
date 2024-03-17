#include <stdio.h>
int main() {
    int pilihan;
    int bilangan;

    printf("Pilih jenis konversi bilangan:\n");
    printf("1. Bilangan Desimal ke Biner\n");
    printf("2. Bilangan Biner ke Desimal\n");
    printf("3. Bilangan Desimal ke Octal\n");
    printf("4. Bilangan Octal ke Desimal\n");
    printf("Masukkan pilihan(hanya bisa satu opsi): ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &bilangan);
            printf("Hasil konversi ke biner: ");
            while (bilangan > 0) {
                printf("%d", bilangan % 2);
                bilangan /= 2;
            }
            break;
        case 2:
            printf("Masukkan bilangan biner: ");
            scanf("%d", &bilangan);
            int desimal = 0, pangkat = 0;
            while (bilangan > 0) {
                desimal += (bilangan % 10) * (1 << pangkat);
                bilangan /= 10;
                pangkat++;
            }
            printf("Hasil konversi ke desimal: %d", desimal);
            break;
        case 3:
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &bilangan);
            printf("Hasil konversi ke octal: ");
            while (bilangan > 0) {
                printf("%d", bilangan % 8);
                bilangan /= 8;
            }
            break;
        case 4:
            printf("Masukkan bilangan octal: ");
            scanf("%d", &bilangan);
            int decimal = 0, power = 0;
            while (bilangan > 0) {
                decimal += (bilangan % 10) * (1 << (3 * power));
                bilangan /= 10;
                power++;
            }
            printf("Hasil konversi ke desimal: %d", decimal);
            break;
        default:
            printf("Pilihan Anda tidak tepat.");
    }

    return 0;
}