/**
 * @file Admin_Account_Record.c
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
 * @brief function for printing a particular record
 * 
 * @return void
 */
void admin_account_Record()
{
    account_t user_data;
    int value_temp=-1,flag=0;
    FILE* file_pointer= fopen("../7_Other/data-set/Account_Datail.dat", "r");
    printf("\n Check the detail of existing account\n\n");
    printf("Enter account number:\t");
    scanf("%d",&value_temp);
    while (fscanf(file_pointer,"%50s %d %d",user_data.holder_name,&user_data.holder_account_number,&user_data.holder_amount)!=EOF)
    { 
        if(value_temp == user_data.holder_account_number)
        {
            printf("\nAccount Holder Name:\t%s",user_data.holder_name); 
            printf("\nAccount Number:\t\t%d",user_data.holder_account_number);
            printf("\nAvailable Amount:\t%d",user_data.holder_amount);
            flag=1;
        }
    }
    if(flag==1)
        printf("\n\nRecord printed");
    else
        printf("\n\nNO Record Founded");
    fclose(file_pointer);
}

  