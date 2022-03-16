#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>> t;
	while(t--)
	{
	    int num,one,two,five,ten,fifty,hundred,sum=0;
	    cin>>num;
	    hundred=num/100;
	    num=num%100;
	    fifty=num/50;
	    num=num%50;
	    ten=num/10;
	    num=num%10;
	    five=num/5;
	    num=num%5;
	    two=num/2;
	    num=num%2;
	    one=num/1;
	    sum=one+two+five+ten+fifty+hundred;
	    cout<<sum<<endl;
	}
	return 0;
}
