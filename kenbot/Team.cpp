#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int x = 0;
    int y = 0;
    int z = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> x;
            if (x == 1)
            {
                y++;
            }

        }
        if (y >= 2)
        {
            z++;
        }
        y = 0;
    }
    cout << z;

    return 0;
}
