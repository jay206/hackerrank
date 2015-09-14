// https://www.hackerrank.com/challenges/arrays-introduction
// All Domains > C++ > Introduction > Arrays Introduction
#include <iostream>

using namespace std;

int main() {
    int *a,n;
    
    cin >> n;
    
    a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    while (n--)
        cout << a[n] << ' ';
    cout << endl;
    
    delete [] a;
    return 0;
}
