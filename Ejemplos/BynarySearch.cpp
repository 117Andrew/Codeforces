#include <iostream>
#include <vector>
using namespace std;

int a, b, c, l, t, aux, x;
vector <int> v;
int p(int z)
{
    if (v[z] >= x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    cin >> l >> t;
    for (int i = 0; i < l; i++)
    {
        cin >> aux;
        v.push_back(aux);
    }
    for (int j = 0; j < t; j++)
    {
        cin >> x;    
        a = -1, b = l;
        while (b-a > 1)
        {
            c = (a+b)/2;
            if (p(c) == 1)
                b = c;
            else
                a = c;
        }
        if (b == v.size())
        {
            cout << "\n" <<"-1";
        }
        else if (v[b] == x)
        {
            cout << "\n" << b;
        }
        else
        {
            cout << "\n" <<"-1";
        }
    } 
    return 0;
}
