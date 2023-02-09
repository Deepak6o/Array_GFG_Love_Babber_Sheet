#include<bits/stdc++.h>
using namespace std;
int largest_sub(int n,int arr[])
{
    int max_so_far=INT_MIN;
    int max_end=0;
    for(int i=0;i<n;i++)
    {
        max_end=max_end+arr[i];
        if(max_so_far<max_end)
        {
            max_so_far=max_end;
        }
        if(max_end<0)
        {
            max_end=0;
        }
    }
    return max_so_far;
}
int main()
{
    int arr[]= {-2, -3, 4, -1, -2, 1, 5, -3};
    cout<<largest_sub(8,arr);
}
