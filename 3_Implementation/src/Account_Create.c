#include <stdio.h>
#include <string.h>
void create()
{
    FILE* file_pointer = fopen("file_path.csv", "a+");
  
    char holder_name[50];
    int holder_account_number=0, holder_amount=0;
    printf("\n\t\t\tCreate new account\n\n");
    printf("Enter Account Holder Name:\t");
    scanf("%50s", &holder_name);
    printf("Enter Account Number:\t\t");
    scanf("%d", &holder_account_number);
    printf("Enter Available Amount:\t\t");
    scanf("%d", &holder_amount);

    fprintf(file_pointer, "%10s, %d, %d\n",holder_name,holder_account_number,holder_amount);
  
    printf("\nNew Account added to record\t");
    fclose(file_pointer);
}