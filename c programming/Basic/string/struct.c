#include<stdio.h>
#pragma pack(1)
/*struct s{
	int i;
	char ch;
	double d;
};
int main()
{
	struct s A;
	printf("size of A:%d",sizeof(A));
}
*/
int main()

{
	struct x{
		int a;
		
		int b;
		
		x *pqr;
	}t;
	printf("%d,%d",sizeof(x),sizeof(t.pqr));
}*/