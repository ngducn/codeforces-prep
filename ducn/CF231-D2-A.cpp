// https://codeforces.com/contest/231/problem/A

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

int n;

int main() {
    int confidence = 0;
    int result = 0;
    int y = 0;
    
    cin>>n;

    for (int i = 0; i < n; ++i) {
        confidence = 0;
        for (int j = 0; j < 3; ++j) {
            cin>>y;
            confidence+=y;
        }
        if (confidence > 1) {
            result++;
        }
    }
    
    cout<<result;
    return 0;
}