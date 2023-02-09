#include<bits/stdc++.h>
using namespace std;
void rev(int size,int arr[])
{
    int temp;
    for(int i=0,j=size-1;i<=j;i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int a[]={1,2,3,4,5};
   rev(5,a);
   return 0;

}

