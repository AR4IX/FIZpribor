#include <stdio.h>

void compareIntegers(int num1, int num2) {
  if (num1 > num2) {
    printf("%d больше %d\n", num1, num2);
  } else if (num1 < num2) {
    printf("%d меньше %d\n", num1, num2);
  } else {
    printf("%d равно %d\n", num1, num2);
  }
}

void main (void) {

    char ch;
    printf("Размер ch: %zu байт\n", sizeof(ch));

    int integer;
    printf("Размер integer: %zu байт\n", sizeof(integer));

    short shorty;
    printf("Размер shorty: %zu байт\n", sizeof(shorty));
    
    long l;
    printf("Размер l: %zu байт\n", sizeof(l));

    unsigned int uni;
    printf("Размер uni: %zu байт\n", sizeof(uni));

    unsigned long unl;
    printf("Размер unl: %zu байт\n", sizeof(unl));

    float fl;
    printf("Размер fl: %zu байт\n", sizeof(fl));

    double dd;
    printf("Размер dd: %zu байт\n", sizeof(dd));

    long double ld;
    printf("Размер ld: %zu байт\n", sizeof(ld));

    compareIntegers(sizeof(integer), sizeof(uni));
    compareIntegers(sizeof(l), sizeof(unl));    
}