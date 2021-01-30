#include <iostream>

using namespace std;

int main()
{
    int n= 0;
    int a = 0;
    int b = 0;
    
    cin >> a >> b;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        n++;
    }
    cout << n;
    return 0;
}