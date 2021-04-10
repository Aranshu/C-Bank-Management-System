/**
 * @file Subtraction.c
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
 * @brief funtion for subtaction of number 
 * 
 * @param calculator_number1 calculator_number1 Pointer to calculator
 * @param calculator_number2 calculator_number2 Pointer to calculator
 * @return int 
 */
 int subtraction (calculator* calculator_number1,calculator* calculator_number2)
{
    if((calculator_number2->number)<0)
    {
        calculator_number2->number*= (-1);
        return calculator_number1->number+ calculator_number2->number;
    }
    else
    {
        return calculator_number1->number-calculator_number2->number; 
    }
}