#include <stdio.h>
#include <string.h>
void account_update()
{
    FILE* file_pointer = fopen("file_path.csv", "a+");
    
    char buffer[1024];
        int test,add;
        int table_row = 0;
        int table_column = 0;
        printf("\n\t\t\tList of all account\n\n");
        scanf("%d",&add);
        while (fgets(buffer,1024,file_pointer)) {
            table_column = 1;
            table_row++;
            fread(&test,sizeof(int),1,file_pointer);
            if(test==add)
            {
                printf("pass");
            }
            else
            {
                printf("fail");
            }
            // To avoid printing of column
            // names in file can be changed
            // according to need
            
        }
        fclose(file_pointer);
   

  //  fprintf(file_pointer, "%10s, %d, %d\n",holder_name,holder_account_number,holder_amount);

}