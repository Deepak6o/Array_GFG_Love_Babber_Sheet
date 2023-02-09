#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[12]={0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    sort(arr,arr+12);
    for(int i=0;i<12;i++)
    {
        cout<<arr[i]<<" ";
    }
}
