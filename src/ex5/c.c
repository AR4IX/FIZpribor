/******************************//*!
 * \file
 * \brief	Описание
 * \author
 * \date	Создан:
 * \date	Изменён:
 */

#include "c.h"

/*
 *	Data definition:
 */


/*
 *	Function(s) definition:
 */
 
void uni_func(unsigned int mass[], size_t size) {
    printf("Адрес поля uni = %p\n", &mass);
    for (int i = 0; i < (size); i++) printf("Значение %d-го элемента массива uni = %u\n", i, mass[i]);
}

void shi_func(short int mass[], size_t size) {
    printf("Адрес поля shi = %p\n", &mass);
    for (int i = 0; i < (size); i++) printf("Значение %d-го элемента массива uni = %hd\n", i, mass[i]);
}

void integer_func(int mass[], size_t size) {
    printf("Адрес поля integer = %p\n", &mass);
    for (int i = 0; i < (size); i++) printf("Значение %d-го элемента массива uni = %d\n", i, mass[i]);
}

void lint_func(long int mass[], size_t size) {
    printf("Адрес поля lint = %p\n", &mass);
    for (int i = 0; i < (size); i++) printf("Значение %d-го элемента массива uni = %ld\n", i, mass[i]);
}

void llint_func(long long int mass[], size_t size) {
    printf("Адрес поля llint = %p\n", &mass);
    for (int i = 0; i < (size); i++) printf("Значение %d-го элемента массива uni = %lld\n", i, mass[i]);
}

void ch_func(char mass[], size_t size) {
    printf("Адрес поля ch = %p\n", &mass);
    for (int i = 0; i < (size); i++) printf("Значение %d-го элемента массива uni = %c\n", i, mass[i]);
}

void fl_func(float mass[], size_t size) {
    printf("Адрес поля fl = %p\n", &mass);
    for (int i = 0; i < (size); i++) printf("Значение %d-го элемента массива uni = %f\n", i, mass[i]);
}

void dd_func(double mass[], size_t size) {
    printf("Адрес поля dd = %p\n", &mass);
    for (int i = 0; i < (size); i++) printf("Значение %d-го элемента массива uni = %f\n", i, mass[i]);
}

/******************************//*!
	Описание
	\param[out]	a	...
	\param[in]	b	...
	\return			...
*/

