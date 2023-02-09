#include<bits/stdc++.h>
using namespace std;
void Union(int arr1[],int arr2[])
{
    set<int> ans;
    for(int i=0; i<6; i++)
    {
        ans.insert(arr1[i]);
    }
    for(int i=0; i<5; i++)
    {
        ans.insert(arr2[i]);
    }
    cout<<"Union = ";
    for(int e:ans)
    {
        cout<<e<<" ";
    }

}
void intersection(int arr1[],int arr2[])
{
    set<int>ans2;
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(arr1[i]==arr2[j])
            {
                ans2.insert(arr1[i]);
            }
        }
    }
    cout<<"Intersection = ";
    for(int e:ans2)
    {
        cout<<e<<" ";
    }

}
int main()
{
    int arr1[6]= {7, 1, 5, 2, 3, 6};
    int arr2[5] = {3, 8, 6, 20, 7};
    Union(arr1,arr2);
    cout<<endl;
    intersection(arr1,arr2);



}
