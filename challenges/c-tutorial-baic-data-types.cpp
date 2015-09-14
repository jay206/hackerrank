// https://www.hackerrank.com/challenges/c-tutorial-basic-data-types
// All Domains > C++ > Introduction > Basic Data Types

#include <cstdio>

int main()
{
	int       i;
	long      l;
	long long m;
	char      c;
	float     f;
	double    d;
	scanf("%d %ld %lld %c %f %lf\n", &i, &l, &m, &c, &f, &d);
	printf("%d\n%ld\n%lld\n%c\n%.2f\n%.5lf\n",i, l, m, c, f, d);
	return 0;
}
