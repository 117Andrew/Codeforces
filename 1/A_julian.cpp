#include <iostream>
#include <cmath>
using namespace std;

int main()
{
double m, n, a;
int x=0;
    cin >> m >> n >> a;
    x=ceil(m/a)*ceil(n/a);
    
    cout << x << "\n";
    return 0;
}