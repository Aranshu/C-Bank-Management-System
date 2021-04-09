/**
 * @file Power.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-08
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
int power (calculator* calculator_number1,calculator* calculator_number2)
{
    int calculator_result=1;
    while(calculator_number2->number!=0)
    {
        calculator_result *= calculator_number1->number;
        calculator_number2->number--;
    }
    return calculator_result;
}