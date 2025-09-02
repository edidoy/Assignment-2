#include<stdio.h>
int main(){
    int a, b;

    printf("SELAMAT DATANG DI KALKULATOR LUAS PERSEGI PANJANG.\n");
    printf("SILAHAKAN MASUKKAN PANJANG DAN LEBAR DARI PERSEGI PANJANG YANG INGIN ANDA HITUNG.\n");

    printf("PANJANG : ");
    scanf("%d", &a);getchar();

    printf("LEBAR : ");
    scanf("%d", &b);getchar();

    long long luas = (long long)a * b;

    printf("LUAS PERSEGI PANJANG : %lld\n", luas);
    return 0;
}