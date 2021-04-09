/**
 * @file Addition.c
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
 * @param number1 
 * @param number2 
 * @return int 
 */
int addition (calculator* calculator_number1,calculator* calculator_number2)
{
    return calculator_number1->number+calculator_number2->number;
}