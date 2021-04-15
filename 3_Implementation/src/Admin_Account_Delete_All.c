/**
 * @file Admin_Account_Delete_All.c
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
 * @brief function for deleting all account
 * 
 * @return void
 */
void admin_account_delete_all(void)
{
    printf("\n\t   Delete all account\n\n");
    printf("Warning all Account will be deleted Permanently\n");
    printf("\n\nAll content of the file are Deleted\t"); 
    fclose(fopen("../7_Other/data-set/Account_Datail.dat", "w"));
    fclose(fopen("../7_Other/data-set/Account_Datail_temp.dat", "w"));
}