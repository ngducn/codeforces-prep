// https://codeforces.com/contest/677

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

int num_friends, fence_height, person_height;

int main() {
    int result = 0;
    cin>>num_friends>>fence_height;

    for(int i = 0; i < num_friends; i++) {
        cin>>person_height;
        if (person_height > fence_height) {
            result++;
        }
        result++;
    }
    cout<<result;
    return 0;
}