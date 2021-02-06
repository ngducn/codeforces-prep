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
    int n = 0;
    int i = 0;
    int a = 0;
    int b = 0;
    int j;
    cin >> n;
    for (j = 0; j < n; j++)
    {
        cin >> a;
        if (a != b)
        {
            i++;
        }
        b = a;
    }
    cout << i;
    return 0;

  

}