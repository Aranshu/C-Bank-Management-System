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
 * @brief Displaying a particular record
 * 
 * @return error 
 */
error account_Record()
{
    char buffer[1024];
    int table_row = 0;
    int table_column = 0;
    int table_row_temp=-1;
   
    char value_temp[10];
    printf("\n Check the detail of existing account\n\n");
    printf("Enter account number:\t");
    scanf("%10s",&value_temp);

    FILE* file_pointer_temp = fopen("../7_Other/data-set/Account_Datail.csv", "a+");
    while (fgets(buffer,1024,file_pointer_temp)) 
    {
        table_row++;
        char* value = strtok(buffer, ", ");
        while (value) 
        {
            if (!strcmp(value_temp,value))
                table_row_temp=table_row; 
            value = strtok(NULL, ", ");
            table_column++;
        }
    }
    fclose(file_pointer_temp);
        
    table_row = 0;
    table_column = 0;
    if(table_row_temp==-1)
        printf("\n\nNO Record Founded");
    else
    {
         printf("\n");
        FILE* file_pointer = fopen("../7_Other/data-set/Account_Datail.csv", "a+");
        while (fgets(buffer,1024,file_pointer)) 
        {
            table_row++;
            char* value = strtok(buffer, ", ");
            if(table_row_temp==table_row)
            {
                while (value) 
                {
                    if (table_column == 0)
                        printf("Account Holder Name:\t");
                    else if (table_column == 1) 
                        printf("Account Number:\t\t");
                    else if (table_column == 2) 
                        printf("Available Amount:\t");
                    printf("%s\n", value);
                    value = strtok(NULL, ", ");
                    table_column++;
                }
            }
        }
        printf("Record printed");
        fclose(file_pointer);
    }
    return SUCCESS;
}