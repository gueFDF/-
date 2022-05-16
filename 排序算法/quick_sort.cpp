#include<iostream>
using namespace std;
void quick_sort(int arr[],int l,int r)
{
    if(l>=r)return;
    int x=arr[l],i=l-1,j=r+1;
    while(i<j)
    {
        do i++; while(arr[i]<x);
        do j--; while(arr[j]>x);
        if(i<j) swap(arr[i],arr[j]);
    }
    quick_sort(arr,l,j);
    quick_sort(arr,j+1,r);
}
int main()
{
    int arr[]={2,9,8,7,3,6,5,4,5,2,5,0,1,1,1,18,19};
    quick_sort(arr,0,16);
    for(int i=0;i<17;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
