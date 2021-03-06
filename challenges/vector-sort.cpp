// https://www.hackerrank.com/challenges/vector-sort
// All Domains > C++ > STL > Vector-Sort
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {

    int n,x;
    vector<int> v;
    
    cin >> n;
    while(n--) {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << ' ';
    cout << endl;
    
    return 0;
}
