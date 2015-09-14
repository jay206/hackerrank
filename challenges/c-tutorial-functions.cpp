// https://www.hackerrank.com/challenges/c-tutorial-functions
// All Domains > C++ > Introduction > Functions
#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int &a, int &b, int &c, int &d)
{
  int m1 = (a > b) ? a : b;
  int m2 = (c > d) ? c : d;
  return (m1 > m2) ? m1 : m2;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

