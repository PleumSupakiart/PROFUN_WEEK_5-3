#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 void Pleumnaja(char o[])
 {
 	char *p=o;
 	    while(*p != '\0')
    {	
		char x=*p,s;
    	if((*p>='a') && (*p<='z'))
    	{
    		if(*p>=97)
    		{
    			int a=*p-97+65;
    			printf("%c",a);
    		}
    	}
    	if((*p>='A')&&(*p<='Z'))
    	{
    		if (*p>=65)
			{
    			int a=*p-65+97;
    			printf("%c",a);
    		
    		}
    		
    	}
    	p++;
    }
 }

int main()
{
	char str[1000];
	scanf("%s",str);
	Pleumnaja(str);
return 0; 	
}

