/**
 * @file Calculator.h
 * @author your name (you@domain.com)
 * @brief Header file of calculator
 * @version 0.1
 * @date 2021-04-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * @brief Structure for Calculator
 * 
 */
typedef struct calculator
{
    int number;
}calculator;

/**
 * @brief funtion for addition of number
 * 
 * @param calculator_number1  calculator_number1 Pointer to calculator
 * @param calculator_number2  calculator_number2 Pointer to calculator
 * @return int                
 */
int addition(calculator* calculator_number1,calculator* calculator_number2);

/**
 * @brief funtion for subtaction of number
 * 
 * @param calculator_number1 calculator_number1 Pointer to calculator
 * @param calculator_number2 calculator_number2 Pointer to calculator
 * @return int 
 */
int subtraction(calculator* calculator_number1,calculator* calculator_number2);

/**
 * @brief funtion for multiplication of number
 * 
 * @param calculator_number1 calculator_number1 Pointer to calculator
 * @param calculator_number2 calculator_number1 Pointer to calculator
 * @return int 
 */
int multiplication (calculator* calculator_number1,calculator* calculator_number2);

/**
 * @brief funtion for division of number
 * 
 * @param calculator_number1 calculator_number1 Pointer to calculator
 * @param calculator_number2 calculator_number2 Pointer to calculator
 * @return int 
 */
int division (calculator* calculator_number1,calculator* calculator_number2);

/**
 * @brief funtion for power of number
 * 
 * @param calculator_number1 calculator_number1 Pointer to calculator
 * @param calculator_number2 calculator_number2 Pointer to calculator
 * @return int 
 */
int power (calculator* calculator_number1,calculator* calculator_number2);

/**
 * @brief funtion for factorial of number
 * 
 * @param calculator_number1 calculator_number1 Pointer to calculator
 * @return int 
 */
int factorial (calculator* calculator_number1);

/**
 * @brief function for modulus
 * 
 * @param calculator_number1 
 * @param calculator_number2 
 * @return int 
 */
int modulus(calculator* calculator_number1,calculator* calculator_number2);
