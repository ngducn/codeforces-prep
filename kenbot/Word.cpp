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
    string s;
    cin >> s;
    int count_lower = count_if(s.begin(), s.end(), [](unsigned char ch) { return islower(ch); });
    int count_upper = count_if(s.begin(), s.end(), [](unsigned char ch) { return isupper(ch); });
    
    if (count_lower < count_upper)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s;
    return 0;

  

}