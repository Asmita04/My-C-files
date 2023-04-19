//Additive cipher
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	int key,cipher;
	char s[30],ch;
	
	printf("Enter the plain text:");
	gets(s);
	
	printf("Enter the key:");
	scanf("%d",&key);
	
	for(int i=0;s[i]!='\0';i++)
	{
	//	temp=s[i];
		if(islower(s[i]))
		{
			cipher = (s[i] - 97 + key) % 26 + 97; 
			ch = (char)(cipher);
	
		}
		else
		{
			cipher = (s[i] - 65 + key) % 26 + 65;  
			ch = (char)(cipher);
		}
	//	printf("(s[i]):%d\n",s[i]);
		s[i]=ch;
	}
	printf("encrypted Text :%s",s);
	
	printf("\n");
	fflush(stdin);
	
	//decryption
	printf("cipher text:");
	gets(s);
	for(int j=0;s[j]!='\0';j++)
	{
		if(islower(s[j]))
		{
			cipher = (( int)s[j] - 97 - key) % 26 + 97; 
			ch = (char)(cipher);
	
		}
		else
		{
			cipher = (( int)s[j] - 65 - key) % 26 + 65;  
			ch = (char)(cipher);
		}
	//	printf("(s[i]):%d\n",s[i]);
		s[j]=ch;
	}
	printf("decrypted Text :%s",s);
	
}