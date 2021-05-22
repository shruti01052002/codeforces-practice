#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n, i, j, c=0, mi, ma;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    mi = *min_element(a, a+n);
    ma = *max_element(a, a+n);
    if(a[n-1]!=mi)
    for(i=n-2;i>=0;i--)
    {
        if(a[i]==mi)
        {
            for(j=i;j<n-1;j++)
            {
                swap(a[j], a[j+1]);
                c++;
            }
            break;
        }
    }
    if(a[0]!=ma)
    for(i=0;i<n;i++)
    {
        if(a[i]==ma)
        {
            for(j=i;j>0;j--)
            {
                swap(a[j], a[j-1]);
                c++;
            }
            break;
        }
    }
    cout<<c<<endl;
    return 0;
}