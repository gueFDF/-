#include<iostream>
#include<string>
using namespace std;
#include<vector>
bool cmp(vector<int>A,vector<int>B)
{
    if(A.size()!=B.size())
    return A.size()>B.size();
    else
    {
        for(int i=A.size()-1;i>=0;i++)
        {
            if(A[i]!=B[i])
            return A[i]>B[i];
        }
    }
    return true;
}
vector<int> sub(vector<int>&A,vector<int>&B)
{
    vector<int>C;
    int t=0;
    
    for(int i=0;i<A.size()||i<B.size();i++)
    {
        t=A[i]-t;   
        if(i<B.size()) t-=B[i];
        C.push_back((t+10)%10);
        if(t<0) t=1;

        else t=0;
    }
    //去除前导零
    while(C.size()>1&&C.back()==0)
    C.pop_back();

    return C;
}
int main()
{
    string a,b;
    vector<int>A;
    vector<int>B;
    cin>>a>>b;
    for(int i=a.size()-1;i>=0;i--) A.push_back(a[i]-'0');
    for(int i=b.size()-1;i>=0;i--) B.push_back(b[i]-'0');
    vector<int>C;
    if(cmp(A,B))
    C=sub(A,B);
    else
    C=sub(B,A);
    //输出
    for(int i=C.size()-1;i>=0;i--)  cout<<C[i];
}
