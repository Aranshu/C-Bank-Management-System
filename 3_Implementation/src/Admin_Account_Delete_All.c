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
    int flag=0;
    printf("\n\t   Delete all account\n\n");
    printf("Warning all Account will be deleted Permanently\n\nPress enter to delete\nPress esc to move to safe zone\n\nPlease enter your choice:\t\t");
    if((flag=getch())!=27)
    {
        printf("\n\nAll content of the file are Deleted\t"); 
        fclose(fopen("../../7_Other/data-set/Account_Datail.dat", "w"));
        fclose(fopen("../../7_Other/data-set/Account_Datail_temp.dat", "w"));
    }
    else
    {
        printf("\n\nNo content of the file are Deleted\t");
    }
}