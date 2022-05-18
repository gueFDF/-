#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
const int N=300030;
typedef pair<int,int> PII;
vector<PII>add,query;
vector<int>alls;
int n,m,x,c,l,r;
int a[N];
int find(int x)
{
    int l=0,r=alls.size()-1,mid;
    while(l<r)
    {
        mid=(l+r)>>1;
        if(alls[mid]==x)
        return mid+1;
        if(alls[mid]>=x)
        r=mid;
        else
        l=mid+1;
    }
    return r+1;
}
int main()
{
    cin>>n>>m;
    //读入操作
    for(int i=0;i<n;i++)
    {
        cin>>x>>c;
        add.push_back({x,c});
        alls.push_back(x);
    }
    //读入访问区间
    for(int i=0;i<m;i++)
    {
        cin>>l>>r;
        alls.push_back(l);
        alls.push_back(r);
        query.push_back({l,r});
    }
    //去重
    sort(alls.begin(),alls.end());
    alls.erase(unique(alls.begin(),alls.end()),alls.end());
    //处理数据
    for(auto temp:add)
    {
        int x=find(temp.first);
        a[x]+=temp.second;        
    }
    //预处理前缀和
    for(int i=1;i<alls.size();i++) a[i]+=a[i-1];
    //处理访问
    for(auto temp :query)
    {
        int l=find(temp.first),r=find(temp.second);
        cout<<a[r]-a[l-1]<<endl;
    }
    return 0;
}
    