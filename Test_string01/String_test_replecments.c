#include<stdio.h>
#include<string.h>



main()
{
	char ps[100],s[10],c,final[100];
	int i,j,p,len=0,len2=0,k=0,flen=0;
	printf("Enter the String ps-> ");
	gets(ps);
	len=strlen(ps);
	printf("\n Len %d",len);
	printf("\n Enter the character to replace c ->" );
	scanf("%c",&c);
	printf("\n Enter the Replacements s ->");
	scanf("%s",s);
	len2=strlen(s);
	printf("\n Lenths %d",len2);
		for(i=0;i<len;i++)
	{
		if(ps[i]==c)
		{
			k++;
		}
	}
	printf("\n K value is %d",k);
	flen=len+(len2*k);
	printf("\n flen value is %d",flen);
	for(i=0,p=0;i<flen-1;i++)
	{
		if(ps[p]==c)
		{
			for(j=0;j<len2;j++)
			{
				final[i]=s[j];
				i++;
			}
		p++;	
		}
		
		
		final[i]=ps[p];
		p++;
		
		
	}
	printf("\n");
	for(i=0,p=0;i<flen;i++)
	{
		printf(" %c",final[i]);
	}
}
