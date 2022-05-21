#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
typedef pair<int ,int>PII;
vector<PII>num;

int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i ++ ) 
    {
        int l,r;
        cin>>l>>r;
        num.push_back({l,r});
    }
    int res=1;
    sort(num.begin(),num.end());
    int a=num[0].first;
    int b=num[0].second;
    for(auto temp:num)
    {
        if(b>=temp.first)
        {
            res++;
            b=max(b,temp.second);
        }
        else
        {
            b=temp.second;
        }
    }
    cout<<b;
    return 0;
}