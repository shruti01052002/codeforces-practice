#include<iostream>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    int arr[t],arr2[t];
    for(i=1;i<=t;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<=t;i++)
    {
        arr2[arr[i]]=i;
    }
    for(i=1;i<=t;i++)
    cout<<arr2[i]<<" ";
}