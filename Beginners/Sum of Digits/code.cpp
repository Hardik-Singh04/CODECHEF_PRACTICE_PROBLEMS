#include <iostream>

using namespace std;

int main() 

{

    int t=0,n;

    cin>>t;

    while(t>0)

    {

        cin>>n;

        int sum=0,rem;

        while(n>0)

        {

            rem=n%10;

            sum=sum+rem;

            n=n/10;

        }

        cout<<sum<<endl;

        t--;

    }

	return 0;

}
