#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int t, n;
    string s, sr, saux, subs;
    bool c;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        c = true;
        cin >> s;
        n = s.size();
        sr = s;
        reverse(sr.begin(),sr.end());
        if (s == sr)
        {
            if (n == 2 || n == 3)
            {
                cout << "NO" << endl;
            }
            else if (n > 2 && n > 3)
            {
                subs = s.substr(0,n/2);
                reverse(subs.begin(),subs.end());
                sr.replace(0,n/2,subs);
                sr.replace(n/2+1,n-1,subs);
                if (sr != s)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }

        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
