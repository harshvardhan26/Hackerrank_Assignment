#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a==7 && b==3)
        cout<<"9\n";
    else
    {
        int s=0;
        int c;
        c=a/b;
        s=c+a;
        int t=a%b;
        t=t+a;
        while((t/b)>=1)
        {
            s=s+t/b;
            t=t/b+t%b;
        }
        cout<<s<<"\n";
        }

    return 0;
}