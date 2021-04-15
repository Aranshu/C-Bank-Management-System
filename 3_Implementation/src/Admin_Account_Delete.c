/**
 * @file Admin_Account_Delete.c
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
 * @brief function for deleting single account
 * 
 */
void admin_account_delete(void)
{  
    account_t user_data;

    FILE* file_pointer= fopen("../7_Other/data-set/Account_Datail.dat", "r");
    FILE* file_pointer_temp= fopen("../7_Other/data-set/Account_Datail_temp.dat", "w");
    printf("\n     List of all account\n\n");
    while (fscanf(file_pointer,"%50s %d %d",user_data.holder_name,&user_data.holder_account_number,&user_data.holder_amount)!=EOF)
    {
            fprintf(file_pointer_temp, "%50s %d %d\n",user_data.holder_name,user_data.holder_account_number,user_data.holder_amount);
    }
    fclose(file_pointer);
    fclose(file_pointer_temp);

    FILE* file_pointer_updated= fopen("../7_Other/data-set/Account_Datail.dat", "w");
    FILE* file_pointer_temp_updated= fopen("../7_Other/data-set/Account_Datail_temp.dat", "r");
    int value_temp=-1,flag=0;
    printf("Enter account number:\t");
    scanf("%d",&value_temp);
    while (fscanf(file_pointer_temp_updated,"%50s %d %d",user_data.holder_name,&user_data.holder_account_number,&user_data.holder_amount)!=EOF)
    {
        if(value_temp == user_data.holder_account_number)
        {
            flag=1;
            break;
        }
        else
        {
            fprintf(file_pointer_updated, "%50s %d %d\n",user_data.holder_name,user_data.holder_account_number,user_data.holder_amount);
        }

    }
    if(flag==1)
        printf("\n\nRecord Deleted");
    else
        printf("\n\nNO Record Founded");
    fclose(file_pointer_updated);
    fclose(file_pointer_temp_updated);
    fclose(fopen("../7_Other/data-set/Account_Datail_temp.dat", "w"));
}