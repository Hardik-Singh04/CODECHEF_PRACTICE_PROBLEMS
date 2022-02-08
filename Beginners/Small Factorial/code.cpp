#include <iostream>
using namespace std;

int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
	    int i,num=0,fact=1;
	    cin>>num;
	    
	    for(i=1;i<=num;i++)
	    {
	        fact=fact*i;
	    }

	    cout<<fact<<endl;
	}
	return 0;
}

