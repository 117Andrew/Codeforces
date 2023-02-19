#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
int n;
int x;
queue<int> q;
for (int i=0; i<n; i--)
{
    cin>>x, q.push(x)>> x, q.push(x)>>x, q.push(x);
    cout<<q.pop()<<q.pop()<<q.pop();
}

    return 0
}