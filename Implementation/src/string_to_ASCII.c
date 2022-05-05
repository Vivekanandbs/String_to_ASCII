/**
 * @file string_to_ASCII.c
 * @author Vivekanand B SHigihalli 
 * @brief function to find sum of ASCII values in a string
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
 * @brief function definition
 * 
 * @param ptr 
 * @param len 
 * @return integer sum
 */
int ascii(char* ptr,int len)
{	
	int arr[len],sum=0;
	for(int i=0;i<len;i++)
	{
		arr[i]=(int)*(ptr++);
		printf("%X\n",arr[i]);
		sum+=arr[i];
	}
	return sum;
}