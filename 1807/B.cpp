#include <iostream>
#include <vector>
using namespace std;

int t, l, n;
vector <int> c;

int main()
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> l;
        for (int j = 0; j < l; j++)
        {
            cin >> n;
            c.push_back(n);
        }
        
    }
}