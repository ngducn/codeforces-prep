#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int sej = 0;
    int dima = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0; 
    int r = n - 1;
    bool p = true;

    while (l <= r)
    {
        if (a[l] >= a[r])
        {
            if (p)
            {
                sej += a[l];
            }
            else
            {
                dima += a[l];
            }
            l++;
        }
        else if (a[r] > a[l]) 
        {
            if (p)
            {
                sej += a[r];
            }
            else
            {
                dima += a[r];
            }
            r--;
        }
        if (p)
        {
            p = false;
        }
        else
            p = true;
    }
    cout << sej << " " << dima;
    return 0;

  

}