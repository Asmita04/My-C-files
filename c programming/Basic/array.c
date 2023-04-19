// writing elements in the array
#include<stdio.h>
int main()
{
	int i,a[5];
	
	for(i=0;i<5;i++)
		{
			printf("a[%d]=",i);
			scanf("%d",&a[i]);
		}
for(i=0;i<5;i++)	
{
	printf("\na[%d]=%d",i,a[i]);
	}	
		
		
		
return 0;
}