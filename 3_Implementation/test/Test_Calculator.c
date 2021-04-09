/**
 * @file Test_Calculator.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Calculator.h"
#include "unity.h"

/**
 * @brief static Object of Structure calculator
 * 
 */
static calculator calculator_number1;
static calculator calculator_number2;


/**
 * @brief Required by the unity test framework
 * 
 */
void setUp()
{
}

/**
 * @brief Required by the unity test framework
 * 
 */
void tearDown()
{
}

/**
 * @brief Used to test Calculator_Addition function
 * 
 */
void test_addition(void)
{ 
    /**
     * @brief Test Zero Case
     * 
     */
    calculator_number1.number=0;
    calculator_number2.number=0;
    TEST_ASSERT_EQUAL(0, addition(&calculator_number1,&calculator_number2));

    /**
     * @brief Postive test case
     * 
     */
    calculator_number1.number=1000;
    calculator_number2.number=928;
    TEST_ASSERT_EQUAL(1928, addition(&calculator_number1,&calculator_number2));
}



int main(void)
{
    /**
     * @brief Construct a new unity begin object
     * 
     */
    UNITY_BEGIN();

    /**
     * @brief Run Test functions
     * 
     */
    RUN_TEST(test_addition);

    /**
     * @brief Close the Unity Test Framework
     * 
     * @return return 
     */
    return UNITY_END();
}