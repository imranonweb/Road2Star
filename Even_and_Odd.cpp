#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

void odd_even(){
    int n; cin >> n;
    vector<int> arr(n);
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    int ocount=0;
    int ecount = 0;
    for(int i =0;i<n;i++){
        if(arr[i]%2==0)
        ecount++;
        else
        ocount++;
        
    }
    cout << ecount << " " << ocount << endl;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    odd_even();
    return 0;
}