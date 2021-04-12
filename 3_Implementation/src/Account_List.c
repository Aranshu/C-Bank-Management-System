/**
 * @file Account_List.c
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
 * @brief function for printing account list
 * 
 * @return error 
 */
error account_list()
{
    FILE* file_pointer = fopen("../7_Other/data-set/Account_Datail.csv", "r");
  
    if (!file_pointer)
    {
        printf("Can't open file\n");
        return ERROR_File;
    }
    else 
    {
        char buffer[1024];
        int table_row = 0;
        int table_column = 0;

        printf("\n\t\tList of all account\n\n");
        while (fgets(buffer,1024,file_pointer)) 
        {
            table_column = 0;
            table_row++;

            char* value = strtok(buffer, ", ");
  
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
        fclose(file_pointer);
        printf("\nAll account printed\t");
    }
    return  SUCCESS;
}