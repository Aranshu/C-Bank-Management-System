/**
 * @file Customized_Getch.c
 * @author your name (you@domain.com)
 * @brief c file for HeaderFile.h
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdlib.h>
#include <stdio.h>

/**
 * @brief Customized getch to stop output screen
 * 
 */
void getch(void)
{
        fflush(stdin);
        char *s = (char *)malloc(1*sizeof(int));
        scanf("%c",s);
        free(s);
}