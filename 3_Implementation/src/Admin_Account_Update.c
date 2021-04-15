/**
 * @file Admin_Account_Update.c
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
 * @brief function for updating account datail
 * 
 */
void admin_account_update(void)
{  
    account_t user_data;

    FILE* file_pointer= fopen("../7_Other/data-set/Account_Datail.dat", "r");
    FILE* file_pointer_temp= fopen("../7_Other/data-set/Account_Datail_temp.dat", "w");
    printf("\n    Update account Information\n\n");
    while (fscanf(file_pointer,"%50s %d %d",user_data.holder_name,&user_data.holder_account_number,&user_data.holder_amount)!=EOF)
    {
            fprintf(file_pointer_temp, "%50s %d %d\n",user_data.holder_name,user_data.holder_account_number,user_data.holder_amount);
    }
    fclose(file_pointer);
    fclose(file_pointer_temp);

    FILE* file_pointer_updated= fopen("../7_Other/data-set/Account_Datail.dat", "w");
    FILE* file_pointer_temp_updated= fopen("../7_Other/data-set/Account_Datail_temp.dat", "r");
    int value_temp=-1,option=-1,flag=0;
    printf("Enter account number:\t");
    scanf("%d",&value_temp);
    while (fscanf(file_pointer_temp_updated,"%50s %d %d",user_data.holder_name,&user_data.holder_account_number,&user_data.holder_amount)!=EOF)
    {
        if(value_temp == user_data.holder_account_number)
        {
 try:       printf("\nChoose any option\t"); 
            printf("\nPress 1 to update name\t"); 
            printf("\nPress 2 to account number\t"); 
            printf("\nPress 3 to update amount\t"); 
            printf("\nPlease enter your choice\t"); 
            scanf("%d",&option);
            if(option==1)
            {
                printf("\nEnter Account Holder Name:\t");
                scanf("%50s",&user_data.holder_name);
            }
            else if(option==2)
            {
                printf("\nEnter Account Number:\t\t");
                scanf("%d", &user_data.holder_account_number);
            }                
            else if(option==3)
            {
            printf("\nEnter Available Amount:\t\t");
            scanf("%d", &user_data.holder_amount);
            }
            else
                goto try;
            flag=1;
            fprintf(file_pointer_updated, "%50s %d %d\n",user_data.holder_name,user_data.holder_account_number,user_data.holder_amount);
        }
        else
        {
            fprintf(file_pointer_updated, "%50s %d %d\n",user_data.holder_name,user_data.holder_account_number,user_data.holder_amount);
        }

    }
    if(flag==1)
        printf("\n\nRecord Updated");
    else
        printf("\n\nNO Record Founded");
    fclose(file_pointer_updated);
    fclose(file_pointer_temp_updated);
    fclose(fopen("../7_Other/data-set/Account_Datail_temp.dat", "w"));

}