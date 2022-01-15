#include <bits/stdc++.h> 

using namespace std;

int main() 
{
    int t=0,k=0,count=0;
    scanf("%d%d",&t,&k);
    while(t>0)
    {
        int a=0;
        scanf("%d",&a);
        if(a%k==0)
        {
          count=count+1; 
        }
        t--;
    }
	cout<<count;
	return 0;
}
