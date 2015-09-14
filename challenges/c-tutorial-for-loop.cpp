// https://www.hackerrank.com/challenges/c-tutorial-for-loop
// All Domains > C++ > Introduction > For Loop
#include <iostream>

using namespace std;

void iput(int &, int &, istream &is=cin);
void oput(int &, ostream &os=cout);
void f(int &, int &, ostream &os=cout);

int main()
{
  int a;
  int b;
  iput(a, b);
  f(a, b);
  return 0;
}

void iput(int &x, int &y, istream &is)
{
  is >> x >> y;
}

void oput(int &x, ostream &os)
{
  switch (x) {
  case 1: os << "one" << endl; break;
  case 2: os << "two" << endl; break;
  case 3: os << "three" << endl; break;
  case 4: os << "four" << endl; break;
  case 5: os << "five" << endl; break;
  case 6: os << "six" << endl; break;
  case 7: os << "seven" << endl; break;
  case 8: os << "eight" << endl; break;
  case 9: os << "nine" << endl; break;
  default: os << ((x%2) ? "odd" : "even") << endl;
  }
}

void f(int &x, int &y, ostream &os)
{
  for (int i = x; i <= y; i++) {
    oput(i);
  }
}
