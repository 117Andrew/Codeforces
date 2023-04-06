#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t=0,n=0;
    char d, x;
    string s,sf;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        cin >> n >> d >> s;
        for (int j=0;j<n;j++)
        {
            if (s[j]<d)
            {
                x=s[j];
                s[j]=d;
            }
        }
    }
    return 0;
}