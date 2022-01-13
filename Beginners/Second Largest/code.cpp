#include <iostream>
using namespace std;

int main() 
{
	int t=0;
	cin>>t;
	while(t--)
	{
	    int a=0,b=0,c=0,slarge=0;
	    cin>>a>>b>>c;
	    if(a >b && a<c || a<b && a>c)
	    {
	        slarge=a;
	    }
	    else if(b >a && b<c || b<a && b>c)
	    {
	        slarge=b;
	    }
	    else if(c >b && c<a || c<b && c>a)
	    {
	        slarge=c;
	    }
	    cout<<slarge<<endl;
	}
	return 0;
}
