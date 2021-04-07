/**
 * @file Main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<string.h>
#include<conio.h>

#include"Login.h"
#include"Calculator.h"
int main()
{
    char username[15],password[12];
login:    
    printf("\n\tLOGIN PAGE\n");
    printf("Exter Your Username:\t");
    scanf("%4s",&username);
    printf("Exter Your Password:\t");
    scanf("%4s",&password);
    if(login(username,password))
    {

        int choice_main_menu=0,check=0;
        char choice_sub_menu;
        do
        {
            printf("\n\t\t\t\tCustomer Account Banking Management System\n\n");
            printf("\tPress 1 to Create new account\n");
            printf("\tPress 2 to Update information of existing account\n");
            printf("\tPress 3 to Removing existing account\n");
            printf("\tPress 4 to Check the detail of existing account\n");
            printf("\tPress 5 to List of all account\n");
            printf("\tPress 6 to Open calculator\n");
            printf("\tPlease enter your choice:\t");
            scanf("%d",&choice_main_menu);
            switch(choice_main_menu)
            {
                case 1: break;
                case 2: break;
                case 3: break;
                case 4: break;
                case 5: break;
                case 6:do
                        {
                            struct calculator calculator_number1;
                            struct calculator calculator_number2;
                            printf("\n\t\t\t\tWelcome to calculator\n\n");
                            printf("\t\tPlease enter your choice:\t");
                            scanf("%1s",&choice_sub_menu);
                            switch(choice_sub_menu)
                            {
                                case '+':printf("\t\tEnter the first number:\t\t");
                                         scanf("%d",&calculator_number1.number);
                                         printf("\t\tEnter the secound number:\t");
                                         scanf("%d",&calculator_number2.number);
                                         printf("\t\tResult is:\t\t\t%d\n",addition(&calculator_number1,&calculator_number2));
                                         break;
                                case '-':printf("\t\tEnter the first number:\t\t");
                                         scanf("%d",&calculator_number1.number);
                                         printf("\t\tEnter the secound number:\t");
                                         scanf("%d",&calculator_number2.number);
                                         printf("\t\tResult is:\t\t\t%d\n",subtraction(&calculator_number1,&calculator_number2));
                                         break;
                                case '*':break;
                                case '/':
                                case 'p':break;
                                case 'f':
                                default:printf("\t\tPlease enter a valid choice\t"); 
                            }
                            printf("press enter to continue and press escape to exit\n");
                        } while ((check=getch())!=27);
                        break;
                default:printf("\tPlease enter a valid choice\n"); 
                        break;
            }
            printf("press enter to continue and press escape to exit\n");
        } while ((check=getch())!=27);
        
    }
    else
    {
        printf("Wrong Credentials\n");
        goto login;
    }

    return 0;
}