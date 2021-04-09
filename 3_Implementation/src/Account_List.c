#include <conio.h>
#include <stdio.h>
#include <string.h>
  
// Driver Code
void list1()
{
    // Substitute the full file path
    // for the string file_path
    FILE* file_pointer = fopen("file_path.csv", "r");
  
    if (!file_pointer)
        printf("Can't open file\n");
  
    else {

        char buffer[1024];
  
        int table_row = 0;
        int table_column = 0;
        printf("\n\t\t\tList of all account\n\n");
        while (fgets(buffer,1024,file_pointer)) {
            table_column = 0;
            table_row++;
  
            // To avoid printing of column
            // names in file can be changed
            // according to need
            if (table_row == 1)
                continue;
  
            // Splitting the data
            char* value = strtok(buffer, ", ");
  
            while (value) {
                // Column 1
                if (table_column == 0)
                    printf("Account Holder Name:\t");
  
                // Column 2
                if (table_column == 1) 
                    printf("Account Number:\t\t");
  
                // Column 3
                if (table_column == 2) 
                    printf("Available Amount:\t");
  
                printf("%s\n", value);
                value = strtok(NULL, ", ");
                table_column++;
            }
        }
        fclose(file_pointer);
        printf("\nAll account printed\t");
    }
}