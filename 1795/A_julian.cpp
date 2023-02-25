#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t,n,m;
    string x,z,y,w;
    bool a = true, b = true;

    cin >> t ;

    for(int i=0; i<t; i++)
    {
        cin >> n >> m >> x >> z;

        if(x[n-1]==x[n-2] && z[m-1]==z[m-2])
        {
            cout << "NO";
        }
        else
        {
            y = x[0];
            for(int i=1; i<n; i++)
            {
                w = x[i];
                if (y != w)
                {

                }
            }
            y = z[0];
            for(int i=1; i<m; i++)
            {

            }
        }

    }

    return 0;
}
