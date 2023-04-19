#include<stdio.h>
void main()
{
    char name;
    printf("Enter the product name=");
    scanf("%c",&name);
    int N;
    printf("Enter the number=");
    scanf("%d",&N);

    if('a'<=name<='z')
    {
        if(name+N<='z')
        {
            printf("%c",name+N);
            return;
        }

        else
        {
            printf("%c",(name+N)-'z'+'a'-1);
        return;
        }
    }


        if('A'<=name<='Z')
    {
        if(name+N<='Z')
        {
            printf("%c",name+N);
            return;
        }

        else
        {
            printf("%c",(name+N)-'Z'+'A'-1);
            return;

        }
    }
}