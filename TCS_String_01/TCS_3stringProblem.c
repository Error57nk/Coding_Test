#include<stdio.h>
#include<string.h>
void conv(char *s1,int a,int key);
main(int args,char* argv[])
{
	char *s0,*s2,*s3;
	int a,b,c,i;
	s0=argv[1];
	s2=argv[2];
	s3=argv[3];
	a=strlen(s0);
	b=strlen(s2);
	c=strlen(s3);
	printf("%d	%d	%d \n",a,b,c);
	conv(s0,a,1);
	printf("\n");
	conv(s2,b,2);
	printf("\n");
	printf("%s",strupr(s3));
}

void conv(char *s1,int a,int key)
{	
	int i=0;
	for(i=0;i<a;i++)
	{
		if(s1[i]=='a' || s1[i]=='e'|| s1[i]=='i'|| s1[i]=='o'|| s1[i]=='u')
		{
			if(key==1)
			{
				printf("#");
			}
			if(key==2)
			{
				printf("%c",s1[i]);
			}
		}
		else
		{
			if(key==1)
			{
				printf("%c",s1[i]);
			}
			if(key==2)
			{
				printf("*");
			}
		}
	}
}
	
