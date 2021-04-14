/**
 * @file Test_Calculator.c
 * @author your name (you@domain.com)
 * @brief c file to perform unit testing
 * @version 0.1
 * @date 2021-04-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
//#include "Account.h"
#include "Calculator.h"
#include "unity.h"

/**
 * @brief static Object of Structure calculator
 * 
 */
calculator calculator_number1;
calculator calculator_number2;


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
 * @brief Used to test addition function
 * 
 */
void test_addition(void)
{ 
    /**
     * @brief Zero test Case
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

/**
 * @brief Used to test subtraction fuction
 * 
 */
void test_subtraction(void)
{ 
    /**
     * @brief Zero test Case
     * 
     */
    calculator_number1.number=0;
    calculator_number2.number=0;
    TEST_ASSERT_EQUAL(0, subtraction(&calculator_number1,&calculator_number2));

    /**
     * @brief Postive test case
     * 
     */
    calculator_number1.number=-1;
    calculator_number2.number=2;
    TEST_ASSERT_EQUAL(-3, subtraction(&calculator_number1,&calculator_number2));

    /**
     * @brief Postive test case
     * 
     */
    calculator_number1.number=-1;
    calculator_number2.number=-2;
    TEST_ASSERT_EQUAL(1, subtraction(&calculator_number1,&calculator_number2));

    /**
     * @brief Postive test case
     * 
     */
    calculator_number1.number=1;
    calculator_number2.number=-2;
    TEST_ASSERT_EQUAL(3, subtraction(&calculator_number1,&calculator_number2));
}

/**
 * @brief Used to test multiplication fuction
 * 
 */
void test_multiplication(void)
{ 
    /**
     * @brief Zero test Case
     * 
     */
    calculator_number1.number=0;
    calculator_number2.number=0;
    TEST_ASSERT_EQUAL(0, multiplication(&calculator_number1,&calculator_number2));

    /**
     * @brief Positive test Case
     * 
     */
    calculator_number1.number=7;
    calculator_number2.number=5;
    TEST_ASSERT_EQUAL(35, multiplication(&calculator_number1,&calculator_number2));

    /**
     * @brief Positive test Case
     * 
     */
    calculator_number1.number=-7;
    calculator_number2.number=-5;
    TEST_ASSERT_EQUAL(35, multiplication(&calculator_number1,&calculator_number2));

    /**
     * @brief Positive test Case
     * 
     */
    calculator_number1.number=-7;
    calculator_number2.number=5;
    TEST_ASSERT_EQUAL(-35, multiplication(&calculator_number1,&calculator_number2));

    /**
     * @brief Positive test Case
     * 
     */
    calculator_number1.number=7;
    calculator_number2.number=-5;
    TEST_ASSERT_EQUAL(-35, multiplication(&calculator_number1,&calculator_number2));
}

/**
 * @brief Used to test division fuction
 * 
 */
void test_division(void)
{ 
    /**
     * @brief Zero test Case
     * 
     */
    calculator_number1.number=0;
    calculator_number2.number=0;
    TEST_ASSERT_EQUAL(-1, division(&calculator_number1,&calculator_number2));

    /**
     * @brief positive test case
     * 
     */
    calculator_number1.number=125;
    calculator_number2.number=5;
    TEST_ASSERT_EQUAL(25, division(&calculator_number1,&calculator_number2));

    /**
     * @brief Negative test case
     * 
     */
    calculator_number1.number=125;
    calculator_number2.number=0;
    TEST_ASSERT_EQUAL(-1, division(&calculator_number1,&calculator_number2));
}

/**
 * @brief Used to test power fuction
 * 
 */
void test_power(void)
{ 
    /**
     * @brief Zero test Case
     * 
     */
    calculator_number1.number=0;
    calculator_number2.number=0;
    TEST_ASSERT_EQUAL(-1, power(&calculator_number1,&calculator_number2));

    /**
     * @brief Positive test case
     * 
     */
    calculator_number1.number=5;
    calculator_number2.number=2;
    TEST_ASSERT_EQUAL(25, power(&calculator_number1,&calculator_number2));

    /**
     * @brief Positive test case
     * 
     */
    calculator_number1.number=5;
    calculator_number2.number=0;
    TEST_ASSERT_EQUAL(1, power(&calculator_number1,&calculator_number2));

    /**
     * @brief Negative test case
     * 
     */
    calculator_number1.number=0;
    calculator_number2.number=2;
    TEST_ASSERT_EQUAL(-1, power(&calculator_number1,&calculator_number2));
}

/**
 * @brief Used to test factorial fuction
 * 
 */
void test_factorial(void)
{ 
    /**
     * @brief Zero test Case
     * 
     */
    calculator_number1.number=0;
    TEST_ASSERT_EQUAL(1, factorial(&calculator_number1));
    
    /**
     * @brief Positive test Case
     * 
     */
    calculator_number1.number=5;
    TEST_ASSERT_EQUAL(120, factorial(&calculator_number1));

    /**
     * @brief Negative test Case
     * 
     */
    calculator_number1.number=-5;
    TEST_ASSERT_EQUAL(-1, factorial(&calculator_number1));
}

/**
 * @brief Used to test modulus fuction
 * 
 */
void test_modulus(void)
{ 
    /**
     * @brief Zero test Case
     * 
     */
    calculator_number1.number=0;
    calculator_number2.number=0;
    TEST_ASSERT_EQUAL(-1, modulus(&calculator_number1,&calculator_number2));
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
    RUN_TEST(test_subtraction);
    RUN_TEST(test_multiplication);
    RUN_TEST(test_division);
    RUN_TEST(test_power);
    RUN_TEST(test_factorial);
    RUN_TEST(test_modulus);

    /**
     * @brief Close the Unity Test Framework
     * 
     * @return return 
     */
    return UNITY_END();
}