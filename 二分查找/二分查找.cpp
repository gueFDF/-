#include<iostream>
using namespace std;
const int N=500050;
int arr[N]; 
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    while(m--)
    {
        int k=0;
        cin>>k;
        int mid;
        int l=0,r=n-1;
        while(l<r)
        {
            mid=(l+r)>>1;
            if(arr[mid]>=k)
            r=mid;
            else
            l=mid+1;
        }
        if(arr[l]!=k)
        cout<<"-1 -1"<<endl;
        else
        {
            cout<<l<<" ";
            l=0,r=n-1,mid=0;
            while(l<r)
            {
                mid=(l+r+1)>>1;
                if(arr[mid]<=k)
                l=mid;
                else
                r=mid-1;
            }
            cout<<r<<endl;
        }
    }
    return 0;
}