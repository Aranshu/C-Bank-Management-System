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
bool login_admin(char username[15],char password[12])
{
    char username_temp[15],password_temp[12];
    FILE* file_pointer = fopen("../7_Other/data-set/Login_Detail.dat", "r");
    while (fscanf(file_pointer,"%13s %10s",username_temp,password_temp)) 
        if(strcmp(username,username_temp)==0 && strcmp(password,password_temp)==0)
        {
            fclose(file_pointer);
            return true;
        }
        else
        {
            fclose(file_pointer);
            return false;
        }
}