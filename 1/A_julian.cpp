#include <iostream>
using namespace std;

int main()
{
int m, n, a, x=0;
    cin >> m >> n >> a;
    while ((m>0) || (n>0))
    {
        if (m>0)
        {
            m-=a;
            x++;
        }
        if (n>0)
        {
            n-=a;
            x++;
        }
    }
    cout << x << "\n";
    return 0;
}