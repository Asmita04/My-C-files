#include<stdio.h>
int check(char str[1000],int len)
{
    int i;
    for(i=0;i<len;i=i+2)
    {
        if(str[0]!=str[i])
        {
            return 0;
        }
    }

    return 1;
}

void main()
{
    int N,i;
    scanf("%d",&N);

    char str[N][1000];
    for(i=0;i<N;i++)
    {
        scanf("%s",str[i]);
    }

    for(i=0;i<N;i++)
    {
        int len=0;
        while(str[i][len]!='\0')
            {
                len++;
            }
        printf("%d\n",check(str[i],len));
    }
}