#include <iostream>

using namespace std;
long long fact(int n)
{
    int f=1,i;
    for (i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
}
