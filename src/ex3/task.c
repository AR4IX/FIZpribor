#include <stdio.h>

int main() {
    char char_array[8] = {65, 0101, 0x42, 'D', 123, 077, 0x7F, -128};
    unsigned char uchar_array[8] = {255, 0377, 0xFF, 150, 042, 0xAB, 123, 10};
    short short_array[8] = {32767, 077777, 0x7FFF, -100, 01000, 0xABCD, 1500, -230};
    unsigned short ushort_array[8] = {65535, 0177777, 0xFFFF, 1234, 0777, 0xDEAD, 314, 1000};
    int int_array[8] = {2147483647, 017777777777, 0x7FFFFFFF, -1000000, 0100000, 0xCAFEBABE, 1500000, -23000};
    unsigned int uint_array[8] = {4294967295, 037777777777, 0xFFFFFFFF, 123456, 0777777, 0xDEADBEEF, 314000, 1000000};
    long long_array[8] = {2147483647L, 017777777777L, 0x7FFFFFFFL, -1000000L, 0100000L, 0xCAFEBABEL, 1500000, -23000};
    unsigned long ulong_array[8] = {4294967295UL, 037777777777UL, 0xFFFFFFFFUL, 123456UL, 0777777UL, 0xDEADBEEFUL, 314000, 1000000};
    float float_array[8] = {3.14159f, 123.45f, 8.5f, 3.0f, -123.456f, 0.25f, 63.875f, 42.75f};
    double double_array[8] = {3.141592653589793, 1.2345e200, 8.5, 3.0, -123.456789, 2.5e-10, 511.875, 2748.8125};

    printf("char:\n");
    for (int i = 0; i < 8; i++) {
        printf("dec(%d), oct(%o), hex(%X)\n", char_array[i], char_array[i], char_array[i]);
    }

    printf("\nunsigned char:\n");
    for (int i = 0; i < 8; i++) {
        printf("dec(%u), oct(%o), hex(%X)\n", uchar_array[i], uchar_array[i], uchar_array[i]);
    }

    printf("\nshort:\n");
    for (int i = 0; i < 8; i++) {
        printf("dec(%hd), oct(%ho), hex(%hX)\n", short_array[i], short_array[i], short_array[i]);
    }

    printf("\nunsigned short:\n");
    for (int i = 0; i < 8; i++) {
        printf("dec(%hu), oct(%ho), hex(%hX)\n", ushort_array[i], ushort_array[i], ushort_array[i]);
    }

    printf("\nint:\n");
    for (int i = 0; i < 8; i++) {
        printf("dec(%d), oct(%o), hex(%X)\n", int_array[i], int_array[i], int_array[i]);
    }

    printf("\nunsigned int:\n");
    for (int i = 0; i < 8; i++) {
        printf("dec(%u), oct(%o), hex(%X)\n", uint_array[i], uint_array[i], uint_array[i]);
    }

    printf("\nlong:\n");
    for (int i = 0; i < 8; i++) {
        printf("dec(%ld), oct(%lo), hex(%lX)\n", long_array[i], long_array[i], long_array[i]);
    }

    printf("\nunsigned long:\n");
    for (int i = 0; i < 8; i++) {
        printf("dec(%lu), oct(%lo), hex(%lX)\n", ulong_array[i], ulong_array[i], ulong_array[i]);
    }

    printf("\nfloat:\n");
    for (int i = 0; i < 8; i++) {
        printf("dec(%f), hex(%a)\n", float_array[i], float_array[i]);
    }

    printf("\ndouble:\n");
    for (int i = 0; i < 8; i++) {
        printf("dec(%lf), hex(%la)\n", double_array[i], double_array[i]);
    }

    return 0;
}