#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int temp[1000000];
int func(int a)
{
    int ret=0;
    while(a)
    {
        if(a&1) ret++;
        a=a>>1;
    }
    return ret;
}
int main()
{
    int n=0;
    cin>>n;
    for (int i = 0; i < n; i ++ )
    {
        scanf("%d",&temp[i]);
    }
    for (int i = 0; i < n; i ++ )
    {
        cout<<func(temp[i])<<" ";
    }
    return 0;
    
}