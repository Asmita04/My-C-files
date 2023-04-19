//Additive cipher
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	int key,cipher,i=0;
	char s[30],ch;
	
	printf("Enter the plain text:");
	gets(s);
	
	printf("Enter the key:");
	scanf("%d",&key);
	//encryption
	
	while(s[i]!='\0')
	{
	//	temp=s[i];
		if(islower(s[i]))
		{
			cipher =((s[i] -97) * key) % 26 +97; 
			ch = (char)(cipher);
		}
		else
		{
			cipher = ((s[i] -65)* key )% 26 + 65;  
			ch = (char)(cipher);
		}

		s[i]=ch;
		i++;
	}
	printf("encrypted Text :%s",s);
	
	//decryption
	/*for(int i=0;s[i]!='\0';i++)
	{
		
		
	}*/
}
