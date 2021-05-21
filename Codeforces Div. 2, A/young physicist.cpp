#include<iostream>
using namespace std;
int main()
{
    long int n,x=0,y=0,z=0,a,b,c;
    cin>>n;
    while(n--)
    {
        cin>>a;
        cin>>b;
        cin>>c;
        x=x+a;
        y=y+b;
        z=z+c;
    }
 
    if(x==0&&y==0&&z==0)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}