#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n>26)
    {
        int sum=0;
        while(n>0)
        {
            int r=n%10;
            sum+=r;
            n/=10;
        }
        n=sum;
    }
    char c='A'+n-1;
    cout<<c;

    return 0;
}

