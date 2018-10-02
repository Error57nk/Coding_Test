#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	char st[20],s[5],num[5];
	int i=0,j=0,k=0,l=0,m=0;
	scanf(" %s",&st);
	while(st[i]!='\0')
	{	
		if(st[i]=='(')
		{	
			j=0;
			while(st[i]!=')')
			{
				s[j]=st[i];
				i++;
				j++;
			}
			for(k=0;k<num;k++)
			{
				printf("%s",s);
			}
		}
		else
		{
		 	num=atoi(st[i]);
		}
		
		
		
	}

}
