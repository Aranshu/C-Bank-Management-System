/**
 * @file Calculator_Modulus.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Calculator.h"

/**
 * @brief 
 * 
 * @param calculator_number1 
 * @param calculator_number2 
 * @return int 
 */
int modulus(calculator* calculator_number1,calculator* calculator_number2)
{
    if(calculator_number2->number==0)
        return -1;
    return calculator_number1->number%calculator_number2->number;
}