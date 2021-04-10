/**
 * @file Factorial.c
 * @author your name (you@domain.com)
 * @brief c file for Calculator.h
 * @version 0.1
 * @date 2021-04-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Calculator.h"

/**
 * @brief funtion for factorial of number
 * 
 * @param calculator_number1 calculator_number1 Pointer to calculator
 * @return int 
 */
int factorial (calculator* calculator_number1)
{
   int calculator_result=1;
    if (calculator_number1->number<0)
        return -1;
    else if(calculator_number1->number==0)      
        return 1;
    else
    {
        while(calculator_number1->number!=1)
        {
            calculator_result *= calculator_number1->number;
            calculator_number1->number--;
        }
        return calculator_result;
    }
}