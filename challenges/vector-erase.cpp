// https://www.hackerrank.com/challenges/vector-erase
// All Domains > C++ > STL > Vector-Erase
#include <vector>
#include <iostream>
#include <iterator>

using namespace std;

int main() {

    int a,b,n,x;
    vector<int> v;
    cin >> n;
    while(n--) {
        cin >> x;
        v.push_back(x);
    }
    cin >> x >> a >> b;

    v.erase(v.begin()+--x);
    v.erase(v.begin()+--a,v.begin()+--b);

    cout << v.size() << endl;
    copy(v.begin(),v.end(),ostream_iterator<int>(cout, " "));
    cout << endl;
    
    return 0;
}
