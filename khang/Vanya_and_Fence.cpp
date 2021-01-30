#include <iostream>

using namespace std;

int main()
{
    int n, h, i;
    int x = 0;

    cin >> n >> h;

    for (int j = 0; j < n; j++)
    {
        cin >> i;
        if (i > h)
        {
            x += 2;
        }
        else 
        {
            x += 1;
        }
        
    }
    cout << x;

    return 0;
}