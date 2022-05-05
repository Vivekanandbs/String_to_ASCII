#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string_to_ASCII.h"

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