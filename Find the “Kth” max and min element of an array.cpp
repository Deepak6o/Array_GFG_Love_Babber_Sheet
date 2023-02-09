#include<bits/stdc++.h>
using namespace std;
void Kth_sm(int n,int arr[],int ks)
{
    cout<<"Kth_Max = "<<arr[ks-1];
}
void Kth_lg(int n,int arr[],int kl)
{
    cout<<"Kth_Min = "<<arr[n-kl];
}
int main()
{
    int arr[5]={5,6,9,4,10};
    int ks,kl;
    sort(arr,arr+5);
    Kth_sm(5,arr,2);
    cout<<endl;
    Kth_lg(5,arr,2);
}
