#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const int INF = 0x3f3f3f3f;
int n,a[2010],b,c;
void dfs(int u)
{
    c++;
    if(a[u]==-1)
        return ;
    dfs(a[u]);
}
void solve()
{
    b=-INF;
    for(int i=1;i<=n;i++)
    {
        c=0;
        dfs(i);
        b=max(b,c);
    }
    printf("%d\n",b);
}
int main()
{
    while(~scanf("%d",&n))
    {
        for(int i=1;i<=n;i++)
            scanf("%d",a+i);
        solve();
    }
    return 0;
}