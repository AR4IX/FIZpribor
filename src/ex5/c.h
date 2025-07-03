/******************************//*!
 * \file
 * \brief	Описание
 * \author
 * \date	Создан:
 * \date	Изменён:
 */

#ifndef _C_H
#define _C_H


/*
 *	Macros definition
 */


/*
 *	Type declaration
 */


/*
 *	Data declaration
 */


/*
 *	Function declaration
 */
#include <stdio.h> 
void uni_func(unsigned int mass[], size_t size);
void shi_func(short int mass[], size_t size);
void integer_func(int mass[], size_t size);
void lint_func(long int mass[], size_t size);
void llint_func(long long int mass[], size_t size);
void ch_func(char mass[], size_t size);
void fl_func(float mass[], size_t size);
void dd_func(double mass[], size_t size);

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif

#endif /* _NAME_H */
