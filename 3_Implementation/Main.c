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
#include"Account.h"

int main()
{
login: 
        system("cls||clear");    
        char username[15],password[12];   
        printf("\n\tLOGIN PAGE\n\n");
        printf("Exter Your Username:\t");
        scanf("%4s",&username);
        printf("Exter Your Password:\t");
        scanf("%4s",&password);
        if(login(username,password))
        {
        int flag=0;
main_menu:
        do
        {
                system("cls||clear"); 
                char choice_main_menu;
                printf("\n\t\t\tCustomer Account Banking Management System\n\n");
                printf("Press 1 to Create new account\n");
                printf("Press 2 to Update information of existing account\n");
                printf("Press 3 to Removing existing account\n");
                printf("Press 4 to Check the detail of existing account\n");
                printf("Press 5 to List of all account\n");
                printf("Press 6 to delete all account\n");
                printf("Press 7 to Open calculator\n");
                printf("Press 8 for login page\n");
                printf("\nPlease enter your choice:\t");
                scanf("%1s",&choice_main_menu);
                switch(choice_main_menu)
                {
                        case'1':system("cls||clear"); 
                                create();
                                getch(); 
                                break;
                        case'2':system("cls||clear"); 
                                account_update();
                                getch();
                                break;
                        case'3':system("cls||clear"); 
                                getch();
                                break;
                        case'4':system("cls||clear"); 
                                break;
                        case'5':system("cls||clear"); 
                                list1();
                                getch();
                                break;
                        case'6':system("cls||clear"); 
                                delete1();
                                getch();
                                break;
                        case'7':do
                                {
                                        system("cls||clear"); 
                                        flag=0;
                                        char choice_sub_menu;
                                        struct calculator calculator_number1;
                                        struct calculator calculator_number2;
                                        printf("\n\t\tWelcome to calculator\n\n");
                                        printf("Press + for addition\n");
                                        printf("Press - for subtraction\n");
                                        printf("Press * for multiplication\n");
                                        printf("Press / for division\n");
                                        printf("Press ^ for power\n");
                                        printf("Press ! for factorial\n");
                                        printf("Press ? for modulus\n");
                                        printf("Press m for main menu\n");
                                        printf("\nPlease enter your choice:\t");
                                        scanf("%1s",&choice_sub_menu);
                                        switch(choice_sub_menu)
                                        {
                                                case'+':system("cls||clear"); 
                                                        printf("\t\t\tAddition\n");
                                                        printf("Enter the first number:\t\t");
                                                        scanf("%d",&calculator_number1.number);
                                                        printf("Enter the secound number:\t");
                                                        scanf("%d",&calculator_number2.number);
                                                        printf("Result is:\t\t\t%d\n",addition(&calculator_number1,&calculator_number2));
                                                        getch();
                                                        break;
                                                case'-':system("cls||clear"); 
                                                        printf("\t\t\tSubtraction\n");
                                                        printf("Enter the first number:\t\t");
                                                        scanf("%d",&calculator_number1.number);
                                                        printf("Enter the secound number:\t");
                                                        scanf("%d",&calculator_number2.number);
                                                        printf("Result is:\t\t\t%d\n",subtraction(&calculator_number1,&calculator_number2));
                                                        getch();
                                                        break;
                                                case'*':system("cls||clear"); 
                                                        printf("\t\t\tMultiplication\n");
                                                        printf("Enter the first number:\t\t");
                                                        scanf("%d",&calculator_number1.number);
                                                        printf("Enter the secound number:\t");
                                                        scanf("%d",&calculator_number2.number);
                                                        printf("Result is:\t\t\t%d\n",multiplication(&calculator_number1,&calculator_number2));
                                                        getch();
                                                        break;
                                                case'/':system("cls||clear"); 
                                                        printf("\t\t\tDivision\n");
                                                        printf("Enter the first number:\t\t");
                                                        scanf("%d",&calculator_number1.number);
                                                        printf("Enter the secound number:\t");
                                                        scanf("%d",&calculator_number2.number);
                                                         if(division(&calculator_number1,&calculator_number2)==-1)
                                                                printf("Result is:\t\t\tError\n");
                                                        else
                                                                printf("Result is:\t\t\t%d\n",division(&calculator_number1,&calculator_number2));
                                                        getch();
                                                        break;
                                                case'^':system("cls||clear"); 
                                                        printf("\t\t\tPower\n");
                                                        printf("Enter the number:\t\t");
                                                        scanf("%d",&calculator_number1.number);
                                                        printf("Enter the Power:\t\t");
                                                        scanf("%d",&calculator_number2.number);
                                                        printf("Result is:\t\t\t%d\n",power(&calculator_number1,&calculator_number2));
                                                        getch();
                                                        break;
                                                case'!':system("cls||clear"); 
                                                        printf("\t\t\tFactorial\n");
                                                        printf("Enter the number:\t\t");
                                                        scanf("%d",&calculator_number1.number);
                                                        if(factorial(&calculator_number1)==-1)
                                                                printf("\nPlease enter a positive number to find factorial and try again\nFactorial can't be found for negative values. It can be only positive or 0 \n");
                                                        else
                                                                printf("Result is:\t\t\t%d\n",factorial(&calculator_number1));
                                                        getch();
                                                        break;
                                                case'?':system("cls||clear"); 
                                                        printf("\t\t\tModulus\n");
                                                        printf("Enter the first number:\t\t");
                                                        scanf("%d",&calculator_number1.number);
                                                        printf("Enter the secound number:\t");
                                                        scanf("%d",&calculator_number2.number);
                                                        if(modulus(&calculator_number1,&calculator_number2)==-1)
                                                                printf("Result is:\t\t\tError\n");
                                                        else
                                                        printf("Result is:\t\t\t%d\n",modulus(&calculator_number1,&calculator_number2));
                                                        getch();    
                                                case'm':flag=2;
                                                        break;
                                                default:system("cls||clear"); 
                                                        printf("Please enter a valid choice\n"); 
                                                        getch();
                                        }
                                }
                                while (flag!=2);
                                goto main_menu;
                        case'8': flag=1;
                                break;
                        default:system("cls||clear");
                                printf("Please enter a valid choice\n"); 
                                getch();
                }
        } 
        while (flag!=1);
        goto login;    
        }
        
        else
        {
                system("cls||clear"); 
                printf("Wrong Credentials\n");
                getch();
                goto login;
        }

        return 0;
}