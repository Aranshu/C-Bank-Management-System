/**
 * @file Admin_Account_Create.c
 * @author your name (you@domain.com)
 * @brief c file for Account.h
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Account.h"

/**
 * @brief function for creating account
 * 
 * @return void
 */
void admin_account_create(void)
{
    FILE* file_pointer = fopen("../7_Other/data-set/Account_Datail.dat", "a+");
  
    account_t user_data;

    printf("\n\tCreate new account\n\n");
    printf("Enter Account Holder Name:\t");
    scanf("%50s",&user_data.holder_name);
    printf("Enter Account Number:\t\t");
    scanf("%d", &user_data.holder_account_number);
    printf("Enter Available Amount:\t\t");
    scanf("%d", &user_data.holder_amount);

    fprintf(file_pointer, "%50s %d %d\n",user_data.holder_name,user_data.holder_account_number,user_data.holder_amount);
  
    printf("\nNew Account added to record\t");
    fclose(file_pointer);
}