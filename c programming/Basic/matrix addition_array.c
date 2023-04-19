//matrix addition in array
#include<stdio.h>
int main()
{
	int i,j,Row,Col;
	printf("enter the number rows of first matrix=");
	scanf("%d",&Row);
	printf("enter the number of columns of first matrix=");
	scanf("%d",&Col);
	
	int M1[Row][Col];
	for(i=0;i<Row;i++)
		{
			for(j=0;j<Col;j++)
			{
			
			printf("enter the values M1[%d][%d]=",i,j);
			scanf("%d",&M1[i][j]);
			}
		}
	int M2[Row][Col];
	for(i=0;i<Row;i++)
			{
				for(j=0;j<Col;j++)
				{
					
					printf("enter the values of M2[%d][%d]=",i,j);
					scanf("%d",&M2[i][j]);
				}		
				
			}		
		int M3[Row][Col];
		for(i=0;i<Row;i++)
			{
				for(j=0;j<Col;j++)
				{
				//	printf("\n");
					M3[i][j]=M1[i][j]+M2[i][j];
					
				//	printf("%d\t",M3[i][j]);
			    }
		
         	}
		for(i=0;i<Row;i++)
		{
			printf("\n");
			for(j=0;j<Col;j++)
			printf("\t%d\t",M1[i][j]);
		}
	printf("\n+\n");
	
	for(i=0;i<Row;i++)
		{
			printf("\n");
			for(j=0;j<Col;j++)
			printf("\t%d\t",M2[i][j]);
		}
			printf("\n=\n");
	
	for(i=0;i<Row;i++)
		{
			printf("\n");
			for(j=0;j<Col;j++)
			printf("\t%d\t",M3[i][j]);
	   }
			
			
			
			
			
			
			printf("enter the values M1[%d][%d]=",i,j);
			scanf("%d",&M1[i][j]);
			}
	    
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	return 0 ;
}