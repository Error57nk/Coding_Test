#include<stdio.h>
#include<string.h>
main()
{
	char s[100];
	int count=0;
	int i,j;
	int len,n;
	printf("\n Enter the string of number \n");
	gets(s);
	len=strlen(s);
	
	for(i=0;i<len;i++)
	{	
		count=0;
		for(j=i;j<len;j++)
		{	
			n=(int)s[j];
			if(n%2==0)
			{
				count++;
			}
			
		}
		printf("%d	",count);
		
	}
}
