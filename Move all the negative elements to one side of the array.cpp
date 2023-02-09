#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>neg;
    vector<int>pos;
    int arr[9]= { -12, 11, -13, -5, 6, -7, 5, -3, -6};
    for(int i=0; i<9; i++)
    {
        if(arr[i]<0)
        {
            neg.push_back(arr[i]);
        }
        else
        {
            pos.push_back(arr[i]);
        }
    }
    for (int e : neg)
        cout<<e << " ";
    for (int e : pos)
        cout<<e << " ";
    return 0;

}
