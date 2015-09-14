// https://www.hackerrank.com/challenges/c-tutorial-strings
// All Domains > C++ > Strings > Strings
#include <iostream>
#include <string>
using namespace std;

void iput(string &, string &, istream &is=cin);
void oput(string &, string &, ostream &os=cout);
void oput1(string &, string &, ostream &);
void oput2(string &, string &, ostream &);
void oput3(string &, string &, ostream &);
void swap_first_char(string &, string &);

int main() {
   // Complete the program
  string s1;
  string s2;

  iput(s1, s2);
  oput(s1, s2);  
    return 0;
}

void iput(string &x, string &y, istream &is)
{
  is >> x >> y;
}

void oput(string &x, string &y, ostream &os)
{
  oput1(x,y,os);
  oput2(x,y,os);
  oput3(x,y,os);
}
void oput1(string &x, string &y, ostream &os)
{
  os << x.size() << ' ' << y.size() << endl;
}
void oput2(string &x, string &y, ostream &os)
{
  os << x << y << endl;
}
void oput3(string &x, string &y, ostream &os)
{
  swap_first_char(x, y);
  os << x << ' ' << y << endl;
}

void swap_first_char(string &x, string &y)
{
  char c = x[0];
  x[0] = y[0];
  y[0] = c;
}
