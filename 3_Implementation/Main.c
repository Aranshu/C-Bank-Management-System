/**
 * @file Main.c
 * @author your name (you@domain.com)
 * @brief Main File to run system
 * @version 0.1
 * @date 2021-04-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * @brief User created header file
 * 
 */
#include"Account.h"
#include"Calculator.h"
#include"HeaderFile.h"
#include"Login.h"

/**
 * @brief Main Function of ProgramS
 * 
 * @return int 
 */
int main()
{
start:
        system("cls||clear");  
        int choice=0; //intialization of choice for home page
        printf("\n\t\t\t\t\t\tBANK MANAGEMENT SYSTEM\n\n");
        printf("\nHome Page Banking Management System\n\n");
        printf("Press 1 to enter into Admin Page\n");
        printf("Press 2 to enter into Customer Page\n");
        printf("\nEnter Your Choice:\t");
        scanf("%d",&choice);
        fflush(stdin);
        if(choice==1)
        {
login_admin: 
                system("cls||clear");    
                char username[15],password[12];   
                printf("\n\t\t\t\t\t\tBANK MANAGEMENT SYSTEM\n\n");
                printf("\n\tLOGIN PAGE\n\n");
                printf("Enter Your Username:\t");
                scanf("%13s",&username);
                fflush(stdin);
                printf("Enter Your Password:\t");
                scanf("%10s",&password);
                fflush(stdin);
                if(login_admin(username,password))
                {
                        int flag=0;
main_menu:
                        do
                        {
                                system("cls||clear"); 
                                flag=0;
                                char choice_main_menu='`'; //intialization of choice_main_menu for main menu
                                printf("\n\t\t\t\t\t\tBANK MANAGEMENT SYSTEM\n\n");
                                printf("\n  Customer Account Banking Management System\n\n");
                                printf("Press 1 to Create new account\n");
                                printf("Press 2 to Update information of existing account\n");
                                printf("Press 3 to Removing existing account\n");
                                printf("Press 4 to Check the detail of existing account\n");
                                printf("Press 5 to List of all account\n");
                                printf("Press 6 to delete all account\n");
                                printf("Press 7 to Open calculator\n");
                                printf("Press 8 to change login credentials\n");
                                printf("Press 9 to logout\n");
                                printf("Press 0 to exit application\n");
                                printf("\nPlease enter your choice:\t");
                                scanf("%1s",&choice_main_menu);
                                fflush(stdin);
                                switch(choice_main_menu)
                                {
                                        case'1':system("cls||clear");
                                                printf("\n\t\t\t\t\t\tBANK MANAGEMENT SYSTEM\n\n"); 
                                                admin_account_create();
                                                getch();
                                                break;
                                        case'2':system("cls||clear"); 
                                                printf("\n\t\t\t\t\t\tBANK MANAGEMENT SYSTEM\n\n");
                                                admin_account_update();
                                                getch();
                                                break;
                                        case'3':system("cls||clear"); 
                                                printf("\n\t\t\t\t\t\tBANK MANAGEMENT SYSTEM\n\n");
                                                admin_account_delete();
                                                getch();
                                                break;
                                        case'4':system("cls||clear"); 
                                                printf("\n\t\t\t\t\t\tBANK MANAGEMENT SYSTEM\n\n");
                                                admin_account_Record();
                                                getch();
                                                break;
                                        case'5':system("cls||clear"); 
                                                printf("\n\t\t\t\t\t\tBANK MANAGEMENT SYSTEM\n\n");
                                                admin_account_list();
                                                getch();
                                                break;
                                        case'6':system("cls||clear"); 
                                                printf("\n\t\t\t\t\t\tBANK MANAGEMENT SYSTEM\n\n");
                                                admin_account_delete_all();
                                                getch();
                                                break;
                                        case'7':do
                                                {
                                                        system("cls||clear"); 
                                                        flag=0;
                                                        char choice_sub_menu='`'; //intialization of choice_sub_menu for sub menu
                                                        struct calculator calculator_number1;
                                                        struct calculator calculator_number2;
                                                        printf("\n\t\t\t\t\t\tBANK MANAGEMENT SYSTEM\n");
                                                        printf("\n\tWelcome to calculator\n\n");
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
                                                        fflush(stdin);
                                                        switch(choice_sub_menu)
                                                        {
                                                                case'+':system("cls||clear"); 
                                                                        printf("\n\t\t\t\t\t\tBANK MANAGEMENT SYSTEM\n\n");
                                                                        printf("\t\tAddition\n\n");
                                                                        printf("Enter the first number:\t\t");
                                                                        scanf("%d",&calculator_number1.number);
                                                                        printf("Enter the secound number:\t");
                                                                        scanf("%d",&calculator_number2.number);
                                                                        printf("Result is:\t\t\t%d\n",addition(&calculator_number1,&calculator_number2));
                                                                        getch();
                                                                        break;
                                                                case'-':system("cls||clear"); 
                                                                        printf("\n\t\t\t\t\t\tBANK MANAGEMENT SYSTEM\n\n");
                                                                        printf("\t\tSubtraction\n\n");
                                                                        printf("Enter the first number:\t\t");
                                                                        scanf("%d",&calculator_number1.number);
                                                                        printf("Enter the secound number:\t");
                                                                        scanf("%d",&calculator_number2.number);
                                                                        printf("Result is:\t\t\t%d\n",subtraction(&calculator_number1,&calculator_number2));
                                                                        getch();
                                                                        break;
                                                                case'*':system("cls||clear"); 
                                                                        printf("\n\t\t\t\t\t\tBANK MANAGEMENT SYSTEM\n\n");
                                                                        printf("\t\tMultiplication\n\n");
                                                                        printf("Enter the first number:\t\t");
                                                                        scanf("%d",&calculator_number1.number);
                                                                        printf("Enter the secound number:\t");
                                                                        scanf("%d",&calculator_number2.number);
                                                                        printf("Result is:\t\t\t%d\n",multiplication(&calculator_number1,&calculator_number2));
                                                                        getch();
                                                                        break;
                                                                case'/':system("cls||clear"); 
                                                                        printf("\n\t\t\t\t\t\tBANK MANAGEMENT SYSTEM\n\n");
                                                                        printf("\t\tDivision\n\n");
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
                                                                        printf("\n\t\t\t\t\t\tBANK MANAGEMENT SYSTEM\n\n");
                                                                        printf("\t\tPower\n\n");
                                                                        printf("Enter the number:\t\t");
                                                                        scanf("%d",&calculator_number1.number);
                                                                        printf("Enter the Power:\t\t");
                                                                        scanf("%d",&calculator_number2.number);
                                                                        if(power(&calculator_number1,&calculator_number2)==-1)
                                                                                printf("\nPlease enter a positive number to find factorial and try again\nFactorial can't be found for negative values. It can be only positive or 0 \n");
                                                                        else
                                                                                printf("Result is:\t\t\t%d\n",power(&calculator_number1,&calculator_number2));
                                                                        getch();
                                                                        break;
                                                                case'!':system("cls||clear"); 
                                                                        printf("\n\t\t\t\t\t\tBANK MANAGEMENT SYSTEM\n\n");
                                                                        printf("\t\tFactorial\n\n");
                                                                        printf("Enter the number:\t\t");
                                                                        scanf("%d",&calculator_number1.number);
                                                                        if(factorial(&calculator_number1)==-1)
                                                                                printf("\nPlease enter a positive number to find factorial and try again\nFactorial can't be found for negative values. It can be only positive or 0 \n");
                                                                        else
                                                                                printf("Result is:\t\t\t%d\n",factorial(&calculator_number1));
                                                                        getch();
                                                                        break;
                                                                case'?':system("cls||clear"); 
                                                                        printf("\n\t\t\t\t\t\tBANK MANAGEMENT SYSTEM\n\n");
                                                                        printf("\t\tModulus\n\n");
                                                                        printf("Enter the first number:\t\t");
                                                                        scanf("%d",&calculator_number1.number);
                                                                        printf("Enter the secound number:\t");
                                                                        scanf("%d",&calculator_number2.number);
                                                                        if(modulus(&calculator_number1,&calculator_number2)==-1)
                                                                                printf("Result is:\t\t\tError\n");
                                                                        else
                                                                        printf("Result is:\t\t\t%d\n",modulus(&calculator_number1,&calculator_number2));
                                                                        getch();
                                                                        break; 
                                                                case'm':flag=2;
                                                                        break;
                                                                default:system("cls||clear"); 
                                                                        printf("Please enter a valid choice\n"); 
                                                                        getch();
                                                                        
                                                                        
                                                        }
                                                }
                                                while (flag!=2);
                                                goto main_menu;
                                        case'8':system("cls||clear");
                                                login_datail_update(); 
                                                getch();
                                                break;
                                        case'9':flag=1;
                                                break;
                                        case'0':exit(0);
                                        default:system("cls||clear");
                                                printf("\nPlease enter a valid choice\n"); 
                                                getch();
                                               
                                }
                        } 
                        while (flag!=1);
                        goto login_admin;;    
                }  
                else
                {
                        system("cls||clear"); 
                        printf("Wrong Credentials\n");
                        getch();
                        goto login_admin;
                }
                system("exit||exit 1");
        }
        else if(choice==2)
        {
login_customer:       
                system("cls||clear");  
                int account_number_temp=-1;
                printf("\n\t\t\t\t\t\tBANK MANAGEMENT SYSTEM\n\n");
                printf("\nPlease enter your accont number\n");
                scanf("%d",&account_number_temp);
                fflush(stdin);
                if(login_customer(account_number_temp))
                {
                        do
                        {
                                int choice_customer=0;
                                system("cls||clear"); 
                                printf("\n\t\t\t\t\t\tBANK MANAGEMENT SYSTEM\n\n");
                                printf("\n\tWelcome to XYZ Bank\n\n");
                                printf("Press 1 to view your balance\n");
                                printf("Press 2 to make a withdrawl\n");
                                printf("Press 3 to view your details\n");
                                printf("Press 0 to exit application\n");
                                printf("\nEnter Your Choice:\t");
                                scanf("%d",&choice_customer); //intialization of choice_customer for customer menu
                                fflush(stdin);
                                switch (choice_customer)
                                {
                                        case 1 :system("cls||clear");  
                                                printf("\n\t\t\t\t\t\tBANK MANAGEMENT SYSTEM\n\n");
                                                customer_account_balance(account_number_temp);
                                                getch();
                                                break;
                                        case 2 :system("cls||clear");
                                                printf("\n\t\t\t\t\t\tBANK MANAGEMENT SYSTEM\n\n");
                                                customer_account_withdrawl(account_number_temp);
                                                getch();
                                                break;
                                        case 3 :system("cls||clear"); 
                                                printf("\n\t\t\t\t\t\tBANK MANAGEMENT SYSTEM\n\n");
                                                customer_account_detail(account_number_temp);
                                                getch();
                                                break;
                                        case 0 :exit(0);
                                        default:system("cls||clear"); 
                                                printf("Please enter a valid choice\n"); 
                                                getch();
                                                break;
                                }
                        }
                        while (true);
                        system("exit||exit 1");
                }
                else
                {
                        system("cls||clear");
                        printf("Wrong Credentials\n");
                        getch();
                        goto login_customer;
                }
        }

        else
        {
                system("cls||clear");  
                printf("\nPlease enter a valid choice\n");
                getch();
                goto start;
        }
return 0;
}