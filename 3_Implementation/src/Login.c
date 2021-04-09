/**
 * @file Login.c
 * @author your name (you@domain.com)
 * @brief c file for login
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
    if(strcmp(username,"root")==0 && strcmp(password,"root")==0)
        return true;
    else
        return false;
}