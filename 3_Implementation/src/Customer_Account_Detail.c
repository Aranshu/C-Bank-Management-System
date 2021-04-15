/**
 * @file Customer_Account_Detail.c
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
 * @brief function for checking detail
 * 
 * @param account_number_temp account number of customer
 */
void customer_account_detail(int account_number_temp)
{
    account_t user_data;
    FILE* file_pointer= fopen("../7_Other/data-set/Account_Datail.dat", "r");
    while (fscanf(file_pointer,"%50s %d %d",user_data.holder_name,&user_data.holder_account_number,&user_data.holder_amount)!=EOF)
        if(account_number_temp == user_data.holder_account_number)
        {
            printf("\nAccount Holder Name:\t%s",user_data.holder_name); 
            printf("\nAccount Number:\t\t%d",user_data.holder_account_number);
            printf("\nAvailable Amount:\t%d",user_data.holder_amount);
        }
    printf("\n\nRecord printed");
    fclose(file_pointer);
}