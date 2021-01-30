// https://codeforces.com/contest/791/problem/A

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


int a, b;

int main() {
    cin>>a>>b;
    int years = 0;
    while (true) {
        ++years;
        a = a*3;
        b = b*2;
        
        if (a > b) {
            cout<<years;
            break;
        }
    }
    return 0;
}