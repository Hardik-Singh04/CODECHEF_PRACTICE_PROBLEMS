#include <iostream>
using namespace std;

int main() 
{
 int t, a, b, diff, max=0, winner, temp, p1=0, p2=0;
 cin>>t;
 while(t--)
 {
  cin>>a>>b;
  p1=p1+a;
  p2=p2+b;
  if(p1>p2)
  {
   diff=p1-p2; 
   temp=1;
  }
  else 
  {
   diff=p2-p1;
   temp=2;
  }
  if(diff>max) 
  {
   max=diff; 
   winner=temp;
  }
 }
 cout<<winner<<" "<<max;
 return 0;
}
