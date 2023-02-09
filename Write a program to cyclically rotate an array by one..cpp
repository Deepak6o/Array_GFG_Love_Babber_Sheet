#include<bits/stdc++.h>
using namespace std;
void Rotate(int arr[])
{
    int x=arr[4];
    for(int i=5; i>0; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=x;
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    Rotate(arr);
    return 0;

}
