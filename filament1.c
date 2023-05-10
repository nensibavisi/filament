#include<stdio.h>

main()
{
	
	char name[100];
	
	char temp[100];
	
	strcpy(temp,name);
	
	if(strcpy(temp,name)>8)
	{
		printf("string is palindrom");
	}
	else
	{
		printf("string is not palindrom");
	}
}
