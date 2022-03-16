#include <iostream>
using namespace std;

int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int num=0,rem=0,sum=0;
        cin>>num;
        while(num>0)
        {
            rem=num%10;
            sum=sum*10 + rem;
            num=num/10;
        }
        cout<<sum<<endl;
    }
	return 0;
}
