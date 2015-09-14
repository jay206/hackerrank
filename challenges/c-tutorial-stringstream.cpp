// https://www.hackerrank.com/challenges/c-tutorial-stringstream
// All Domains > C++ > Strings > StringStream
#include <algorithm>
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
   // Complete this function
  char c;
  int tmp;
  stringstream ss(str);
  vector<int> rVal;
  size_t dCnt = count(str.begin(), str.end(), ',');
  for (int i = 0; i <= dCnt; i++) {
    ss >> tmp >> c;
    rVal.push_back(tmp);
  }
  return rVal;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
