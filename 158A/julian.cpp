#include <iostream>
#include <array>
using namespace std;

int main()
{
    int p, m, n, aux, x = 0;
        cin >> p >> aux;
        int a[p];
    for (int i=0;i<p;i++)
    {
        cin >> a[i];
    }
    m=a[(aux-1)];
    for (int i=0;i<p;i++)
    {
        if (a[i]>=m)
        {
            x++;
        }
    }
    cout << x << "\n";
    return 0;
}