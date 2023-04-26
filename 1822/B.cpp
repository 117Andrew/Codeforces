#include <iostream>
#include <stdio.h>
#include <vector>

#define forn(i, n) for(int i = 0; i < n; i ++)

using namespace std;

typedef long long ll;

int main()
{
vector <ll> v, suma;
int t, n, x;
ll rta, aux;
    cin >> t;
    forn(i, t)
    {
        cin >> n;
        v.clear();
        suma.clear();
        aux = 0, rta = 0;
        for (int j = 0; j < n; j++)
        {
            cin >>x;
            v.push_back(x);
        }
        if (v.size() > 2)
            {
                for (int k = 0; k < n; k++)
                {
                    for (int l = 0; l < n; l++)
                    {
                        if (k != l)
                        {    
                            if (aux < v[k]*v[l])
                                aux = v[k]*v[l];
                        }
                    }
                }
                 rta = aux;
            }
        else
            rta = v[0] * v[1];
        cout << rta << '\n';
    }
}