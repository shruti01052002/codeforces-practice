// https://codeforces.com/gym/301895/problem/B
#include<stdio.h>
int main()
{
   int w;
   scanf("%d",&w);
   if(w%2==0&&w!=2)  
   printf("YES");
   else
   printf("NO");
   return 0;
}