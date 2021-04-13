/**
 * @file Login_Detail_Update.c
 * @author your name (you@domain.com)
 * @brief c file for Login.h
 * @version 0.1
 * @date 2021-04-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Login.h"

/**
 * @brief function for updating login details
 * 
 */
void login_datail_update()
{
    int flag=0;
    printf("\n\t\t\tLogin account reset\n\n");
    printf("Warning login credential will change Permanently\n\nPress enter to change login details Press esc to move to safe zone\n\nPlease enter your choice:\t\t");
    if((flag=getch())!=27)
    {
        FILE* file_pointer = fopen("../../7_Other/data-set/Login_Detail.dat", "w");
        char username[15],password[12];
    
        printf("\n\nPlease Enter your new username:\t\t");
        scanf("%13s", &username);
        printf("Please Enter your new password:\t\t");
        scanf("%10s", &password);

        fprintf(file_pointer,"%15s %12s\n",username,password);
  
        printf("\nLogin details updated\t");
        fclose(file_pointer);
    }
    else
    {
        printf("\n\nLogin details not updated\t");
    }
}