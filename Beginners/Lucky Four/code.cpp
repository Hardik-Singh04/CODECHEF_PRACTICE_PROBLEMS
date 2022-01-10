#include <iostream>
using namespace std;

int main()
{
	int t=0,n;
	cin>>t;
	while(t--)
	{
	    int rem=0,count=0;;
	    cin>>n;
	    while(n>0)
	    {
	    rem=n%10;
	    if(rem==4)
	    {
	        count=count+1;
	    }
	    n=n/10;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
