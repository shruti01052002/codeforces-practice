#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int t, a, b, i, c=0;
   cin>>t;
   vector<vector<int>> vec;
   while(t--)
   {
       vector<int>subvec;
       for(i=0;i<2;i++)
       {
           cin>>a;
           subvec.push_back(a);
       }
       vec.push_back(subvec);
   }
   for ( int i = 0 ; i < vec.size(); i++ )
    {
        for ( int j = 0; j < vec.size() ; j++ )
        {
            if(i!=j)
            {
                if(vec[i][0]==vec[j][1])
                c++;
            }
        }
    }
    cout<<c<<endl;
   return 0;
}