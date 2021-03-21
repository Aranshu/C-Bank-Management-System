/**
 * @file HelloWorld.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-03-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include "./HeaderFile/Calculator.h"
int main()
{
    printf("Hello World\n"); //printing the output
    int a[5]={1,2,3,4,5};
   printf("%d\n",addition(a,5));
   printf("%d\n",subtraction(a,5));
   printf("%d\n",multiply(a,5));
   printf("%d\n",divide(a,5));

}