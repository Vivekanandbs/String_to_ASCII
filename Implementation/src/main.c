#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string_to_ASCII.h"
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