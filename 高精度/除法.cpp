#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> div(vector<int>&A,int b,int&t)
{
    t=0;
    vector<int>C;
    for(int i=A.size()-1;i>=0;i--)
    {
        t=t*10+A[i]%b;
        C.push_back(t/b);
        t%=b;
    }
    reverse(C.begin(),C.end());
    while(C.size()>1&&C.back()==0) C.pop_back();
    return C;
} 
int main()
{
    string a;
    int b;
    cin>>a>>b;
    vector<int>A;
    for(int i=a.size()-1;i>=0;i--) A.push_back(a[i]-'0');
    int t=0;
    auto C=div(A,b,t);
    for(int i=C.size()-1;i>=0;i--) cout<<C[i];
    cout<<endl<<t;
    return 0;
}