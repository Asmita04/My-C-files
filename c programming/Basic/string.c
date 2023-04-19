
/*john works as a technical expert for a mobile comapny. where he analysis if mobiles are infeceted by viruses, 
The complete information of each mobile is coded in the form of a stringa   str A mobile is infected by a virus if str is "special string ".
 A string is called "special string" if all the charecters of alternate positions starting from index 0 are same 

write a program to print '1' if a particular mobile contains a virus,else print ' 0'
read the input from STDIN(standard input ) and write the output to STDOUT(standard output) 
.Do not print any arbitary string while reading the input or printing the output as those would contribute to STDOUT.*/

#include<stdio.h>
int check(char str[50],int len)
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

    char str[N][50];
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