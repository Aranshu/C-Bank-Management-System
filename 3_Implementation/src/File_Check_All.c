/**
 * @file File_Check.c
 * @author your name (you@domain.com)
 * @brief C file for FileCheck.hS
 * @version 0.1
 * @date 2021-04-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "FileCheck.h"

/**
 * @brief function for checking all file present or not 
 * 
 * @return error_file
 */
error_file file_check_all()
{
    FILE* file_pointer_account = fopen("../7_Other/data-set/Account_Datail.csv", "r");
    FILE* file_pointer_login = fopen("../7_Other/data-set/Login_Datail.dat", "r");

    if (!file_pointer_account && !file_pointer_login)
        return ERROR_File_Not_Present;
    fclose(file_pointer_account);
    fclose(file_pointer_login);
    return SUCCESS_File_Present;
}