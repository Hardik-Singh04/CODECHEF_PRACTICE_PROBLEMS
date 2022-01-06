#include <iostream>
using namespace std;
int main()
{
    int t,num,r,sum=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>num;
        r=num%10;
        while(num>9)
        {
            num=num/10;
        }
        sum=num+r;
        cout<<sum<<endl;
    }
	return 0;
}
