#include<iostream>
using namespace std;
int binary_search1(int*arr,int find)
{
    int l=0,r=18;
    while(l<r)
    {
        int mid=(l+r)>>1;
        if(arr[mid]==find)
        return mid;
        if(arr[mid]>=find) 
        r=mid;
        else
        l=mid+1;
    }
    return l;
}
int binary_search2(int*arr,int find)
{
    int l=0,r=18;
    while(l<r)
    {
        int mid=(l+r)>>1;
        if(arr[mid]==find)
        return mid;
        if(arr[mid]<=find) 
        l=mid;
        else
        r=mid-1;
    }
    return l;
}
int main()
{
     int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
     cout<<binary_search1(arr,18)<<endl;
     cout<<binary_search2(arr,18)<<endl;
    return 0;
}