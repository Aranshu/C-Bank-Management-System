/**
 * @file Account_Create.c
 * @author your name (you@domain.com)
 * @brief c file for Account.h
 * @version 0.1
 * @date 2021-04-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Account.h"

/**
 * @brief function for creating account
 * 
 * @return error 
 */
error account_create()
{
    FILE* file_pointer = fopen("../7_Other/data-set/Account_Datail.csv", "a+");
  
    char holder_name[50];
    int holder_account_number=0, holder_amount=0;

    printf("\n\tCreate new account\n\n");
    printf("Enter Account Holder Name:\t");
    scanf("%50s", &holder_name);
    printf("Enter Account Number:\t\t");
    scanf("%d", &holder_account_number);
    printf("Enter Available Amount:\t\t");
    scanf("%d", &holder_amount);

    fprintf(file_pointer, "%50s, %d, %d\n",holder_name,holder_account_number,holder_amount);
  
    printf("\nNew Account added to record\t");
    fclose(file_pointer);
    return  SUCCESS;
}