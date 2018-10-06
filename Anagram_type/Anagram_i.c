#include<stdio.h>
#include<string.h>
 
int check_anagram(char [], char []);
 
int main()
{
  char a[100], b[100];
  int i,len,k=0;
 
  printf("Enter a string\n");
  gets(a);
 
  printf("Enter a string\n");
  gets(b);
  
 len=strlen(a);
  if (check_anagram(a, b) == 1)
  	{
  	for(i=0;i<len;i++)
  	{
  		if(a[i]==b[i])
  		{
  		k++;	
		}
	 }
    printf("%d",k);
	}
  else
  	{
  
    printf("-1");
	}
  return 0;
}
 
int check_anagram(char a[], char b[])
{
  int first[26] = {0}, second[26] = {0}, c = 0;
 
  while (a[c] != '\0')
  {
    first[a[c]-'a']++;
    c++;
  }
 
  c = 0;
 
  while (b[c] != '\0')
  {
    second[b[c]-'a']++;
    c++;
  }
 
  for (c = 0; c < 26; c++)
  {
    if (first[c] != second[c])
      return 0;
  }
 
  return 1;
}
