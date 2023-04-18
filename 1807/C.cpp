#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t, n, b, cont;
    string s;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        b = 0, cont = 0;
        cin >> n >> s;
        for (int j = 0; j < n && b == 0; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cont++;
                if (s[j] == s[k])
                {
                    if (cont%2 == 0)
                        cont = 0;
                    else
                    {
                        b = 1;
                        break;
                    }
                }
            }
        }
        if (b == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}