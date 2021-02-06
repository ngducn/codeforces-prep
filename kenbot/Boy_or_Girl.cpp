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
    string str;
    cin >> str;
    int hash[128] = { 0 };
    int i, c = 0;

    for (i = 0; i < str.size(); ++i) {
        hash[str[i]] = 1;
    }

    for (i = 0; i < 128; ++i) {
        c += hash[i];
    }

    if (c % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
    

}