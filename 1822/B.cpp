#include <iostream>
#include <vector>

using namespace std;

int main()
{
vector < long int> v, suma;
int t, n, x;
long int rta, aux;
    cin >> t;
    cout << "\n";
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cout << "\n";
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
        cout << rta << "\n" << endl;
    }
}