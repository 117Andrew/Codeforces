#include <iostream>
using namespace std;


int main()
{
int t, l, n, m, b;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        m = 0, b = 0;
        cin >> l;
        for (int j = 0; j < l; j++)
        {
            cin >> n;
            if (n%2 == 0)
            {
                m += n;
            }
            else
            {
                b += n;
            }
        }
        if (m > b)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }

        
    }
    return 0;
}