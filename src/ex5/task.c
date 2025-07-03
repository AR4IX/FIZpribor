#include <stdio.h>
#include "c.h"

struct myStruct {
    unsigned int uni;
    short int shi;
    int integer;
    long int lint;
    long long llint;
    char ch;
    float fl;
    double dd;
    long double ld;
};

union myUnion {
    unsigned int uni;
    short int shi;
    int integer;
    long int lint;
    long long llint;
    char ch;
    float fl;
    double dd;
    long double ld;
};

union newUnion {
    unsigned int uni[sizeof(long double)/sizeof(unsigned int)];
    short int shi[sizeof(long double)/sizeof(short int)];
    int integer[sizeof(long double)/sizeof(int)];
    long int lint[sizeof(long double)/sizeof(long int)];
    long long llint[sizeof(long double)/sizeof(long long)];
    char ch[sizeof(long double)/sizeof(char)];
    float fl[sizeof(long double)/sizeof(float)];
    double dd[sizeof(long double)/sizeof(double)];
    long double ld;
};

void main (void) {

    struct myStruct S = {10215, -11, 4, -500305, 12344030403, 'A', 3.14f, 3.2132, 124.140000045};
    printf("Размер структуры: %zu\nРазмер переменной: %zu\nАдрес переменной: %p\n", sizeof(struct myStruct), sizeof(S), &S);
    printf("Адрес поля uni = %p, значение = %u\n", &S.uni, S.uni);
    printf("Адрес поля shi = %p,  начение = %hd\n", &S.shi, S.shi);
    printf("Адрес поля integer = %p, значение = %d\n", &S.integer, S.integer);
    printf("Адрес поля lint = %p, значение = %ld\n", &S.lint, S.lint);
    printf("Адрес поля llint = %p, начение = %lld\n", &S.llint, S.llint);
    printf("Адрес поля ch = %p, значение = %c\n", &S.ch, S.ch);
    printf("Адрес поля fl = %p, значение = %f\n", &S.fl, S.fl);
    printf("Адрес поля dd = %p, значение = %lf\n", &S.dd, S.dd);
    printf("Адрес поля ld = %p, значение = %Lf\n\n", &S.ld, S.ld);

    union myUnion U = {14};
    printf("Размер объединения: %zu\nРазмер переменной: %zu\nАдрес переменной: %p\n", sizeof(union myUnion), sizeof(U), &U);
    printf("Адрес поля uni = %p, значение = %u, размер = %zu\n", &U.uni, U.uni, sizeof(U.uni));
    printf("Адрес поля shi = %p, значение = %hd, размер = %zu\n", &U.shi, U.shi, sizeof(U.shi));
    printf("Адрес поля integer = %p, значение = %d, размер = %zu\n", &U.integer, U.integer, sizeof(U.integer));
    printf("Адрес поля lint = %p, значение = %ld, размер = %zu\n", &U.lint, U.lint, sizeof(U.lint));
    printf("Адрес поля llint = %p, значение = %lld, размер = %zu\n", &U.llint, U.llint, sizeof(U.llint));
    printf("Адрес поля ch = %p, значение = %c, размер = %zu\n", &U.ch, U.ch, sizeof(U.ch));
    printf("Адрес поля fl = %p, значение = %f, размер = %zu\n", &U.fl, U.fl, sizeof(U.fl));
    printf("Адрес поля dd = %p, значение = %lf, размер = %zu\n", &U.dd, U.dd, sizeof(U.dd));
    printf("Адрес поля ld = %p, значение = %Lf, размер = %zu\n\n", &U.ld, U.ld, sizeof(U.ld));

    union newUnion U2 = {14};
    printf("Размер 2-го объединения: %zu\nРазмер переменной: %zu\nАдрес переменной: %p\n", sizeof(union newUnion), sizeof(U2), &U2);

    uni_func(U2.uni, sizeof(U2.uni)/sizeof(unsigned int));
    shi_func(U2.shi, sizeof(U2.shi)/sizeof(short int));
    integer_func(U2.integer, sizeof(U2.integer)/sizeof(int));
    lint_func(U2.lint, sizeof(U2.lint)/sizeof(long int));
    llint_func(U2.llint, sizeof(U2.llint)/sizeof(long long int));
    ch_func(U2.ch, sizeof(U2.ch)/sizeof(char));
    fl_func(U2.fl, sizeof(U2.fl)/sizeof(float));
    dd_func(U2.dd, sizeof(U2.dd)/sizeof(double));
    printf("Адрес поля ld = %p, значение = %Lf, размер = %zu\n\n", &U.ld, U.ld, sizeof(U.ld));
}