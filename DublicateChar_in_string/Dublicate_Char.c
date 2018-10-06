// printing the dublicate charter in string

#include<stdio.h>
#include<string.h>
int check(char c);
void add(char c);
char s[10];
main()
{
	char st[10],c;
	int i=0,j=0,k=0;
	while(k<10)
		{
			s[k]='\0';
			k++;
		}
		k=0;
	printf("\n Enter the string -> ");
	scanf("%s",&st);
	printf("%s",st);
	
	while(st[i] != '\0')
	{
		c=st[i];
		j=i+1;
		k=0;
		printf("\n for -> %c",c);
		while(st[j]!='\0')
		{
			if(st[j]==c)
			{
				k++;
			}
			j++;
		}
		printf("\n Simillar found %d \n",k);
		if(k>0)
		{
			if(check(c)==0)
			{
				printf("Adding \n");
				add(c);
			}
			else
				printf("\n Mating string* \n");
		}
		i++;
	}
	printf("\n THE DUBLICATe CHAR ARE :- .....\n");
	
	printf(" %s",s);
	
}
int check(char c)
{	
	int j=0, k=0;
	while(s[j] != '\0')
		{
			if(s[j] == c)
			{
				k++;
			}
			j++;
		}
		if(k>0 )
		{	printf("\n matching %d ",k);
			return k;
		}
		else 
		{
				printf("\n matching %d ",k);
				return 0;
		}
}

void add(char c)
{	int i=0;
	while(s[i]!='\0')
	{
		i++;
	}
	printf("\n Adding %c ",c);
	s[i]=c;
	s[i+1]='\0';
}
