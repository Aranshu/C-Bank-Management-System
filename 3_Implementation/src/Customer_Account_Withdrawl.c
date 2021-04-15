/**
 * @file Account_Update.c
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
 * @brief function to make withdrawl
 * 
 * @param account_number_temp account number of customer
 */
void customer_account_withdrawl(int account_number_temp)
{  
    account_t user_data;

    FILE* file_pointer= fopen("../7_Other/data-set/Account_Datail.dat", "r");
    FILE* file_pointer_temp= fopen("../7_Other/data-set/Account_Datail_temp.dat", "w");
    printf("\n     Money Withdrawl\n\n");
    while (fscanf(file_pointer,"%50s %d %d",user_data.holder_name,&user_data.holder_account_number,&user_data.holder_amount)!=EOF)
    {
            fprintf(file_pointer_temp, "%50s %d %d\n",user_data.holder_name,user_data.holder_account_number,user_data.holder_amount);
    }
    fclose(file_pointer);
    fclose(file_pointer_temp);

    FILE* file_pointer_updated= fopen("../7_Other/data-set/Account_Datail.dat", "w");
    FILE* file_pointer_temp_updated= fopen("../7_Other/data-set/Account_Datail_temp.dat", "r");
    int holder_amount_temp=0,flag=0;
    while (fscanf(file_pointer_temp_updated,"%50s %d %d",user_data.holder_name,&user_data.holder_account_number,&user_data.holder_amount)!=EOF)
    {
        if(account_number_temp == user_data.holder_account_number)
        {
            printf("\nEnter withdrawl amount\t\t");  
            scanf("%d",&holder_amount_temp);
            if(0<=(user_data.holder_amount-holder_amount_temp))
            {
                user_data.holder_amount=(user_data.holder_amount-holder_amount_temp); 
                flag=1;
            }           
            fprintf(file_pointer_updated, "%50s %d %d\n",user_data.holder_name,user_data.holder_account_number,user_data.holder_amount);
        }
        else
        {
            fprintf(file_pointer_updated, "%50s %d %d\n",user_data.holder_name,user_data.holder_account_number,user_data.holder_amount);
        }

    }
    if(flag==1)
        printf("\n\nWithdrawl successfull");
    else
        printf("\n\nInsufficient balance");
    fclose(file_pointer_updated);
    fclose(file_pointer_temp_updated);
    fclose(fopen("../7_Other/data-set/Account_Datail_temp.dat", "w"));

}