// https://www.hackerrank.com/challenges/alternating-characters
// All Domains > Algorithms > Strings > Alternating Characters
#include <iostream>
#include <deque>

using namespace std;

class AlternatingCharacters
{
private:
  int *repeatCount; // array of counters of consecutive characters
  int t; // test cases
  deque<string> input;
public:
  AlternatingCharacters()
  {
    this->repeatCount = NULL;
    this->t = 0;
  }
  ~AlternatingCharacters()
  {
    if (this->repeatCount != NULL) {
      delete[] this->repeatCount;
    }
  }
  friend istream &operator>>(istream &is, AlternatingCharacters &data)
  {
    is >> data.t;
    data.repeatCount = new int[data.t];
    for (int i = 0; i < data.t; i++) {
      string buffer;
      is >> buffer;
      for (int j = 0; j < buffer.length()-1; j++) {
	if (buffer[j] == buffer[j+1]) {
	  data.repeatCount[i]++;
	}
      }
      data.input.push_back(buffer);
    }
    return is;
  }
  friend ostream &operator<<(ostream &os, AlternatingCharacters &data)
  {
    for (int i = 0; i < data.t; i++) {
      os << data.repeatCount[i] << endl;
    }
    return os;
  }
};

int main(int argc, char *argv[])
{
  AlternatingCharacters data;
  cin >> data;
  cout << data;
  return 0;
}
