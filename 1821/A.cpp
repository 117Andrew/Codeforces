#include <iostream>
#include <string>
using namespace std;

int main()
{
    int rta, t;
    string s;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> s;
        rta = 1;
        if (s.size() == 1)
        {
            if (s[0] == '?')
                rta = 9;
            else if (s[0]>'0')
                rta = 1;
            else
                rta = 0;
        }
        else
        {
            if (s[0] == '?')
            {
                rta = rta*9;
                for (int j = 1; j < s.size(); j++)
                    if (s[j] == '?')
                        rta = rta*10;
            }
            else if (s[0]>'0')
            {
                for (int j = 0; j < s.size(); j++)
                    if (s[j] == '?')
                        rta = rta*10;
            }
            else
                rta=0;
        }
        cout << '\n' << rta;
    }

    return 0;
}