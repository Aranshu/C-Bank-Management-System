/**
 * @file Factorial.c
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
 * @return int 
 */
int factorial (calculator* calculator_number1)
{
   int calculator_result=1;
    if (calculator_number1->number<0)
    {
        return -1;
    }               
    while(calculator_number1->number!=1)
    {
        calculator_result *= calculator_number1->number;
        calculator_number1->number--;
    }
    return calculator_result;
}