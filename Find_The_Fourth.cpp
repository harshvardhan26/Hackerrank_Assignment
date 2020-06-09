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
    char c[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin>>c[i][j];
        }
    }
    int x,p,k,l;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(c[i][j]=='*')
            {
                x=i;
                p=j;
                break;
            }
        }
    }
    int f=0;
    for(int j=p+1;j<b;j++)
    {
        if(c[x][j]=='*')
        {
            k=j;
            f=1;
            break;
        }
    }
    int q=0;
    for(int i=0;i<a;i++)
    {
        if(c[i][p]=='*')
        {
            l=i;
            q=1;
            break;
        }
    }

    if(q==0)
    {
        for(int i=0;i<a;i++)
        {
            if(c[i][k]=='*')
            {
                l=i;
                q=1;
                break;
            }
        }
        cout<<l+1<<" "<<p+1<<"\n";
    }

    else if(f==0)
    {
       for(int j=0;j<b;j++)
        {
            if(c[l][j]=='*'&& j!=p)
            {
                k=j;
                f=1;
                break;
            }
        }
        cout<<x+1<<" "<<k+1<<"\n";
    }

    else
    {
        cout<<l+1<<" "<<k+1<<"\n";
    }
    return 0;
}