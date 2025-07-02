#include <stdio.h>

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
}