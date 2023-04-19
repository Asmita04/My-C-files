#include<stdio.h>
int main()
{
	
	int size;
	printf("Enter the size of an arrar:");
	scanf("%d",&size);
	int arr[size];
	
	
	for(int i=0;i<size;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&arr[i]);	
}
for(int i=0;i<size;i++){

   
	 
	if(i>0){
		arr[i]=arr[i]+arr[i-1];
		
		printf("arr[i]",i);
	}
}

}