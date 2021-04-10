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
#include "login.h"

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
    int flag=0;

    FILE* file_pointer = fopen("../7_Other/data-set/Login_Detail.csv", "a+");
    while (fgets(buffer,1024,file_pointer)) 
    {
        table_row++;
        char* value = strtok(buffer, ", ");
        while (value) 
        {
            if (!strcmp(username,value))
                flag++;
            if(!strcmp(password,value))
                flag++;
            value = strtok(NULL, ", ");
            table_column++;
        }
    }
    fclose(file_pointer);
    if(flag==2)
    {
        return true;
    }
    else
    return false;
}