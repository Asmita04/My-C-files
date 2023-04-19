#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int i = 1;
    cin>>n;
    char c;
    cin>>c;
    
    for(i; i <= n; i++) {
    	
	}
    
    while(n>0)
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

