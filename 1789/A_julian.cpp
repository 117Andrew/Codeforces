#include <iostream>
#include <array>
#include <cmath>
using namespace std;

int main()
{
    int t,n,x,z;
    cin >> t;
    for (int i=0;i<t;i++)
    {
        bool r = true;
        cin >>n;
        int a[n], b[n-1];
        for (int j=0;j<n;j++)
        {
        cin >>a[j];
        }
        for( int k=0; k<(n-1); k++)
        {
            x=a[k], z=a[k+1];
            while (x!=z)
            {
                if (x>z)
                {
                    x-=z;
                }
                if (x<z)
                {
                    z-=x;
                }

            }
            b[k]=x;
        }
        for( int l=0; l<(n-1); l++)
        {
            if (b[l]>n)
            {
                r = false;
            }
        }
        if (r==true)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }

    return 0;
}