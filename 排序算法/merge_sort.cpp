#include<iostream>
using namespace std;
int index[50000];
void  merge_sort(int*arr,int l,int r)
{
    if(l==r) return;
    int mid=(l+r)>>1;
    merge_sort(arr,l,mid);
    merge_sort(arr,mid+1,r);
    int k=0,i=l,j=mid+1;
    while (i<=mid&&j<=r)
    {
        if(arr[i]<=arr[j]) index[k++]=arr[i++];
        if(arr[i]>arr[j])  index[k++]=arr[j++];
    }
    while(i<=mid) index[k++]=arr[i++];
    while(j<=r)   index[k++]=arr[j++];
    for(i=l,j=0;i<=r;i++,j++)
    {
        arr[i]=index[j];
    }
}
int main()
{
    int arr[]={2,9,8,7,3,6,5,4,5,2,5,0,1,1,1,18,19};
    merge_sort(arr,0,16);
    for(int i=0;i<17;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
