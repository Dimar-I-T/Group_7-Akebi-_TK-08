#include <stdio.h>

float Penjumlahan(float a, float b){
    return b + a;
}

float Kurang(float a, float b){
    return a - b;
}

float Kali(float a, float b){
}

float Bagi(float a, float b){ // fungsi pembagian
    return a / b;
}

int main(){
    float a, b;
    char operator = '+';
    while (operator == '+' || operator == '-' || operator == '*' || operator == '/'){
        float hasil = 0;
        printf("Masukkan angka pertama: ");
        scanf("%f", &a);
        printf("Masukkan angka kedua: ");
        scanf("%f", &b);
        getchar();
        printf("Masukkan operator (+ untuk penjumlahan, - untuk pengurangan, * untuk perkalian, / untuk pembagian): ");
        scanf("%c", &operator);
        getchar();
        switch (operator){
            case '+':
                hasil = Penjumlahan(a, b);
                break;
            case '-':
                hasil = Kurang(a, b);
                break;
            case '*':
                hasil = Kali(a, b);
                break;
            case '/':
                hasil = Bagi(a, b);
                break;
            default:
                printf("Input tidak valid!\n");
        }

        printf("Hasil operasi: %.2f\n\n", hasil);
    }
}