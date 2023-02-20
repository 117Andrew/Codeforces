#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int p, m, n, a = 0;
    queue <int> q;
    cin >> p >> m;
    for (int i=0;i<p;i++)
    {
        cin >> n;
        q.push(n);
    }
    for (int i=0;i<p;i++)
    {
        if (q.front()>m)
        {
            a++;
        }
        q.pop();
    }
    cout << a << "\n";
    return 0;
}