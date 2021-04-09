#include <stdio.h>
#include <conio.h>
#include <string.h>
void delete1()
{
    int flag=0;
    printf("\n\t\t\t\tDelete all account\n\n");
    printf("Warning all Account will be deleted press enter to dalete and esc to move to safe zone:\t");
    if((flag=getch())!=27)
    {
        printf("\nAll content of the file are Deleted\n"); 
        fclose(fopen("file_path.csv", "w"));
    }
    else
    {
        printf("\nNo content of the file are Deleted\n");
    }
}