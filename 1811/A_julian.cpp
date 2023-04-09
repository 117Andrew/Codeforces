#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t,n,b;
    char d, x, aux;
    string s, a="0", dd;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        cin >> n >> d >> s;
        b=0;
        dd=d;
        for (int j=0;j<n;j++)
        {
            if (d=='0')
            {
                s=s.append(dd);
                b=1;
                break;
            }
            else if (d=='9')
            {
                s=dd.append(s);
                b=1;
                break;
            }
            else if (s[j] < d)
            {
                if (j==n-1)
                {
                    s.append(a);
                    x = s[j];
                    s[j]=d;
                    s[j+1]=x;
                    b=1;
                    break;
                }
                else
                {
                    s.append(a);
                    x=s[j];
                    s[j]=d;
                    b=1;
                    for (int k=j+1;k<n+1;k++)
                    {
                        aux=s[k];
                        s[k]=x;
                        x=aux;
                    }
                    break;
                }
            }
        }
        if (b==0)
        {
            s.append(a);
            s[n]=d;
        }

        cout << s << '\n';
    }
    return 0;
}