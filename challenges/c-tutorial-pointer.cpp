// https://www.hackerrank.com/challenges/c-tutorial-pointer
// All Domains > C++ > Introduction > Pointer
#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    // Complete this function
  int a0 = *a;
  int b0 = *b;
  *a = a0 + b0;
  *b = abs(a0-b0);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d\n", a, b);

    return 0;
}
