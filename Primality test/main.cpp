#include <iostream>

using namespace std;

int main()
{
    int t,n,f=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
            {
                f=1;
            }
            else
                for(int i=2;i<=n/2;i++)
                {
                    if(n%i==0)
                        {
                            f=1;
                            break;
                        }
                }
                if(f==1)
                    cout<<"no"<<endl;
                else
                    cout<<"yes"<<endl;
                    f=0;
    }
    return 0;
}
