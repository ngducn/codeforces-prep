// https://codeforces.com/contest/734/problem/A

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
    string s;
    string result = "";
    int anton, danik = 0;

    cin>>n;
    cin>>s;

    for(int i = 0; i < n; ++i) {
        if (s[i] == 'A') {
            ++anton;
        } else {
            ++danik;
        }
    }

    if (anton > danik) {
        result = "Anton";
    } else if (anton < danik) {
        result = "Danik";
    } else if (anton == danik) {
        result = "Friendship";
    }

    cout<<result;
    return 0;
}