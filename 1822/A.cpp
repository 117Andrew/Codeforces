#include <iostream>
#include <vector>

using namespace std;



int main()
{
vector <int> d,e;
int t, n, time, x, z, aux, rta;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> time;
        z = 0, rta = -1, aux = 0;
        d.clear();
        e.clear();
        for (int j = 1; j <= n; j++)
        {
            cin >> x;
            d.push_back(x);
        }
        for (int k = 1; k <= n; k++)
        {
            cin >> x;
            e.push_back(x);
        }
        for (int l = 1; l <= n; l++)
        {
            if (d[l-1]+z <= time)
            {
                if (aux < e[l-1])
                {
                    aux = e[l-1];
                    rta = l;
                }
            }
            z++;
        }
        cout << rta << "\n";
    }
}