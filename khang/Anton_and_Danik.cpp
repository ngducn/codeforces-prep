#include <iostream>
#include<string>

using namespace std;

int main()
{
    int n=0;
    int y = 0;
    int j = 0;
    string x;

    cin >> n;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (x[i] == 'A') 
        {
            j += 1;
        }
        else 
        {
            y += 1;
        }
    }
    if (j > y)
    {
        cout << "Anton";
    }
    else if (j < y)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship" << endl;
    }



    return 0;
}