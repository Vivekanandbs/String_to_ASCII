/**
 * @file main.c
 * @author Vivekanand B Shigihalli 
 * @brief program to calculate sum of ASCII values
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string_to_ASCII.h"
/**
 * @brief main function
 * 
 * @return int 
 */
int main()
{
    char str[100];
    printf("Enter any string\n");
    scanf("%s",str);
    int len = strlen(str);
    int sum = ascii(str,len);
    printf("%X\n",sum);
    return 0;
}