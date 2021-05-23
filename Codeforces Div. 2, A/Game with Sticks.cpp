#include <bits/stdc++.h>
#include<iostream>
using namespace std;
 
int main()
{
    int n, mi, m;
    cin>>n>>m;
    mi = min(n, m);
    if(mi%2==0)
    cout<<"Malvika"<<endl;
    else
    cout<<"Akshat"<<endl;
    return 0;
}