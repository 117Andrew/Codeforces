#include <iostream>
using namespace std;
int main()
{
    int n, a, b, c, x, z=0;
    cin >> n;

    for (int i=0;i<n;i++)
    {
        x = 0;
        cin >> a >> b >>c;
        x = (a+b+c);

        if (x>=2)
        {
            z++;
        }
    }

    cout << z << "\n";
    return 0;
}