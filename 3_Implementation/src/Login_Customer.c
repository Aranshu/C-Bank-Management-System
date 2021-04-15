/**
 * @file Login_Customer.c
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
 * @brief Function used Login customer
 * 
 * @param account_number_temp account number of customer
 * @return true 
 * @return false 
 */
bool login_customer(int account_number_temp)
{
    account_t user_data;
    FILE* file_pointer= fopen("../7_Other/data-set/Account_Datail.dat", "r");
    while (fscanf(file_pointer,"%50s %d %d",user_data.holder_name,&user_data.holder_account_number,&user_data.holder_amount)!=EOF)
    {
        if(account_number_temp == user_data.holder_account_number)
         {
             fclose(file_pointer);   
            return true;
         }
    }
    fclose(file_pointer);
    return false;  
}