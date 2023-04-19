//Accept a name using char array .And print name using pointer concept.
#include"stdio.h"
int main()
{
	int size,i;
	char *ptr;
	
	printf("Enter the size :");
	scanf("%d",&size);
	
	char Name[size];
	
	for(i=0;i<size;i++)
	{
		scanf("%c",&Name[i]);
	}
	ptr=Name;
	for(i=0;i<size;i++)
	{
		printf("%c",*(ptr+i));
	//	ptr++;
	}
}