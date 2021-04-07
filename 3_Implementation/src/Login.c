#include<stdio.h>
#include<string.h>
#include<stdbool.h>  
bool login(char username[15],char password[12])
{
    if(strcmp(username,"root")==0 && strcmp(password,"root")==0)
        return true;
    else
        return false;
}