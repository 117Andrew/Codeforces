// El archivo B.in contiene el input del problema B.
//  para utilizarlo ejecutar por terminal "./B < B.in"
#include <iostream>
#include <vector>

#define forn(i, n) for(int i = 0; i < n; i ++)
//Definimos la funcion "forn" que ejecuta un for de i hasta n
using namespace std;

typedef long long ll;
// Cambiamos el token long long por ll

int main()
{
int t, n, x;
ll rta;
    cin >> t;
    forn(i, t)
    {
        vector <ll> V, N, P;
        cin >> n;
        rta = 0;
        for (int j = 0; j < n; j++)
        {
            cin >>x;
            V.push_back(x);
        }
        if (V.size() > 2)
            {
                for (int k = 0; k < n; k++)
                {
                    if (V[k] > 0)
                    {
                        if (V[k] >= P[0])
                        {
                            P[1] = P[0];
                            P[0] = V[k];
                        }
                    }
                    else
                    {
                        if (V[k] <= P[0])
                        {
                            N[1] = N[0];
                            N[0] = V[k];
                        }
                    }
                }
                if (N[0]*N[1] > P[0]*P[1])
                    rta = N[0]*N[1];
                else
                    rta = P[0]*P[1];
            }
        else
            rta = V[0] * V[1];
        cout << rta << '\n';
    }
}