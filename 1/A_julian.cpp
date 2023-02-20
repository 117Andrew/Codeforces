#include <iostream>
using namespace std;

int main()
{
int m, n, a, l, x=0;
    cin >> m >> n >> a;
    l= m+n;
    while (l>0)
    {
        l-=a;
        x++;
    }
    cout << x << "\n";
    return 0;
}