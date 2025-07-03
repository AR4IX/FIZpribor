#include <stdio.h>
#include <limits.h>
#include <float.h>

void compareIntegers(int num1, int num2, int num3) {
    if (num1 > num2 && num1 > num3) {
        printf("%d - наибольшее число\n", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("%d - наибольшее число\n", num2);
    } else if (num3 > num1 && num3 > num2) {
        printf("%d - наибольшее число\n", num3);
    } else {
        printf("Есть одинаковые наибольшие числа.\n");
    }

    if (num1 < num2 && num1 < num3) {
        printf("%d - наименьшее число\n", num1);
    } else if (num2 < num1 && num2 < num3) {
        printf("%d - наименьшее число\n", num2);
    } else if (num3 < num1 && num3 < num2) {
        printf("%d - наименьшее число\n", num3);
    } else {
        printf("Есть одинаковые наименьшие числа.\n");
    }
}


void main (void) {

    char ch;
    unsigned char unch;
    printf("Размер ch: %zu байт\n", sizeof(ch));
    printf("Размер unch: %zu байт\n", sizeof(unch));

    int integer;
    unsigned int uni;
    const int cnsti;
    printf("Размер integer: %zu байт\n", sizeof(integer));
    printf("Размер uni: %zu байт\n", sizeof(uni));
    printf("Размер cnsti: %zu байт\n", sizeof(cnsti));

    short shorty;
    printf("Размер shorty: %zu байт\n", sizeof(shorty));
    
    long l;
    unsigned long unl;
    const long cnstl;
    printf("Размер l: %zu байт\n", sizeof(l));
    printf("Размер unl: %zu байт\n", sizeof(unl));
    printf("Размер cnstl: %zu байт\n", sizeof(cnstl));

    float fl;
    printf("Размер fl: %zu байт\n", sizeof(fl));

    double dd;
    printf("Размер dd: %zu байт\n", sizeof(dd));

    long double ld;
    printf("Размер ld: %zu байт\n", sizeof(ld));

    compareIntegers(sizeof(integer), sizeof(uni), sizeof(cnsti));
    compareIntegers(sizeof(l), sizeof(unl), sizeof(cnstl));    

    
    int minINT = INT_MIN, maxINT = INT_MAX;
    unsigned int minUNI = 0, maxUNI = UINT_MAX;
    char minCH = CHAR_MIN, maxCH = CHAR_MAX;
    unsigned char minUNCH = 0, maxUNCH = UCHAR_MAX;


    printf("Минимальное значение char: dec(%d), hex(%X)\n", minCH, minCH);
    printf("Максимальное значение char: dec(%d), hex(%X)\n\n", maxCH, maxCH);

    printf("Минимальное значение uchar: dec(%u), hex(%X)\n", minUNCH, minUNCH);
    printf("Максимальное значение uchar: dec(%u), hex(%X)\n\n", maxUNCH, maxUNCH);

    printf("Минимальное значение int: dec(%d), hex(%X)\n", minINT, minINT);
    printf("Максимальное значение int: dec(%d), hex(%X)\n\n", maxINT, maxINT);

    printf("Минимальное значение uni: dec(%u), hex(%X)\n", minUNI, minUNI);
    printf("Максимальное значение uni: dec(%u), hex(%X)\n\n", maxUNI, maxUNI);
}