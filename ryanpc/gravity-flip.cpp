// https://codeforces.com/contest/405/problem/A


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

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // just use algorithm::sort lol
    sort(arr, arr+n);

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}