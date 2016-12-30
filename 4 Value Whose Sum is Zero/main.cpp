#include <cstdio>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
#define maxn 4000+5
int n,a[maxn][4];
map<int,int> m;
int main()
{
    freopen("input.txt","r",stdin);
    scanf("%d",&n);
    for(int i = 0;i < n;i++)
        for(int j = 0;j < 4;j++)
        scanf("%d",&a[i][j]);
    for(int i = 0;i < n;i++)
        for(int j = 0;j < n;j++)
    {
        m[a[i][0]+a[j][1]]++;
    }
    int num = 0;
    for(int i = 0;i < n;i++)
        for(int j = 0;j < n;j++)
    {
        num += m[-(a[i][2]+a[j][3])];
    }
    printf("%d\n",num);
    fclose(stdin);
    return 0;
}
