// https://www.hackerrank.com/challenges/utopian-tree
// All Domains > Algorithms > Implementation > Utopian Tree
#include <iostream>
using namespace std;

int spring(int n) {
    return 2*n;    
}
int summer(int n) {
    return n+1;
}
int gCycle(int count) {
    int h = 1;
    if (count == 0) return 1;

    for (int i=0; i<count; i++) {
        if (i%2) {
            h = summer(h);
        } else {
            h = spring(h);
        }
    }
    return h;
}

int main() {
    int t;
    cin >> t;
    int *n = new int[t];

    for (int i=0;i<t;i++) {
        cin >> n[i];
    }
    
    for (int i=0;i<t;i++) {
        cout << gCycle(n[i]) << endl;
    }
    
    delete[] n;
    return 0;

}
