// printing the 1st non repiting charter in string

#include<stdio.h>
#include<string.h>

main()
{
	char st[20],c;
	int i=0,j=0,k=0;
	printf("\n Enter the string -> ");
	scanf("%s",&st);

	while(st[i] != '\0')
	{
		c=st[i];
		j=i+1;
		k=0;
		while(st[j]!='\0')
		{
			if(st[j]==c)
			{
				k++;
			}
			j++;
		}
		
		if(k==0)
		{
			
			printf(" %c \n",c);
			break;
		}
			
		i++;
	}
	
	
}

