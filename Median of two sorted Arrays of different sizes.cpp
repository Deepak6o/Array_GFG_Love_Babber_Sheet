#include<bits/stdc++.h>
using namespace std;
void mergee(int n1,int n2, int arr1[],int arr2[],int arr3[])
{
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]>arr2[j])
        {
            arr3[k++]=arr2[j++];
        }
        else
        {
            arr3[k++]=arr1[i++];
        }
    }
    while(i<n1)
    {
        arr3[k++]=arr1[i++];
    }
    while(j<n2)
    {
        arr3[k++]=arr2[j++];
    }
    for(int i=0;i<n1+n2;i++)
    {
        cout<<arr3[i]<<" ";
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    cout<<"1st array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"2nd array"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int c[n+m];
    mergee(n,m,a,b,c);
    cout<<endl;
    int t=n+m;

    if((t)%2!=0)
    {

        cout<<float(c[((t+1)/2)-1]);
    }
    else
    {
        cout<<float((c[(t/2)-1]+c[(t/2)])/2);
    }


}
