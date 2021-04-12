/**
 * @file Login.c
 * @author your name (you@domain.com)
 * @brief c file for Login.h
 * @version 0.1
 * @date 2021-04-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Login.h"

/**
 * @brief function for login
 * 
 * @param username variable used to store username
 * @param password variable used to store password
 * @return true 
 * @return false 
 */
bool login(char username[15],char password[12])
{
    char buffer[1024];
    int table_row = 0;
    int table_column = 0;
    int flag_username=1;
    int flag_password=1;

    FILE* file_pointer = fopen("../7_Other/data-set/Login_Detail.csv", "a+");
    while (fgets(buffer,1024,file_pointer)) 
    {
        table_column = 0;
        table_row++;
        char* value = strtok(buffer, ", ");
        while (value) 
        {
            if(table_column == 0)
            {
               flag_username=strcmp(value,username);
            }
            if(table_column == 1)
            {
                flag_password=strcmp(value,password);

            }                    
            value = strtok(NULL, ", ");
            table_column++;
        }
    }
    fclose(file_pointer);
    if(flag_username==0 || flag_password==0)
    {
        return true;
    }
    else
        return false;
}