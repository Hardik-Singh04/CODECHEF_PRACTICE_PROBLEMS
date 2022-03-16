#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int q,p;
        cin>>q>>p;
        double total;
        total=q*p;
        if(q>1000)
        {
            total=0.9*total;
        }
        printf("%0.6f\n",total);
    }
	return 0;
}
