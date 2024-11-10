#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int Toplama();
int Cikarma();
int Bolme();
int Carpma();

int main()
{

    int result = 0;  // Declare the result variable before the loop
    while (1){
            char option[100];
            printf("---Hesap Makinesi C Edition---\n");
            printf("1-Toplama     2-Cikarma\n3-Carpma      4-Bolme\nOnceki islemin sonucu : %d\n>>", result);
            scanf("%99s", option);

            if (strcmp(option, "1") == 0){
                result = Toplama();
            }
            else if (strcmp(option, "2") == 0){
                result = Cikarma();
            }
            else if (strcmp(option, "3") == 0){
                result = Carpma();
            }
            else if (strcmp(option, "4") == 0){
                result = Bolme();
            }
            else {
                printf("Gecersiz secim. Tekrar deneyin.\n");
            }
    }
}

int Toplama(){
    int num1, num2, sum;

    printf("Birinci sayiyi giriniz\n>>");
    scanf("%d", &num1);

    printf("Ikinci sayiyi giriniz\n>>");
    scanf("%d", &num2);

    sum = num1 + num2;
    system("cls");
    return sum;
}

int Cikarma(){
    int num1, num2, sum;

    printf("Birinci sayiyi giriniz\n>>");
    scanf("%d", &num1);

    printf("Ikinci sayiyi giriniz\n>>");
    scanf("%d", &num2);

    sum = num1 - num2;
    system("cls");
    return sum;
}

int Bolme(){
    int num1, num2, sum;

    printf("Birinci sayiyi giriniz\n>>");
    scanf("%d", &num1);

    printf("Ikinci sayiyi giriniz\n>>");
    scanf("%d", &num2);

    if (num2 == 0) {
        printf("Hata: Sifira bolme hatasi!\n");
        return 0;  // Return 0 in case of error
    }

    sum = num1 / num2;
    system("cls");
    return sum;
}

int Carpma(){
    int num1, num2, sum;

    printf("Birinci sayiyi giriniz\n>>");
    scanf("%d", &num1);

    printf("Ikinci sayiyi giriniz\n>>");
    scanf("%d", &num2);

    sum = num1 * num2;
    system("cls");
    return sum;
}
