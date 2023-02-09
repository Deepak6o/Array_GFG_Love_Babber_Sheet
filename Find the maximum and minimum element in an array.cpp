#include<bits/stdc++.h>
using namespace std;
void max_min(int n,int arr[])
{
    int maxx=*max_element(arr,arr+n);
    int minn=*min_element(arr,arr+n);
    cout<<"Max = "<<maxx<<endl<<"Min = "<<minn;
}
int main()
{
    int a[]={10,200,453,154,105};
    max_min(5,a);
    return 0;

}

