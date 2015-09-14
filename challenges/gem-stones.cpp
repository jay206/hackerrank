// https://www.hackerrank.com/challenges/gem-stones
// All Domains > Algorithms > Strings > Gemstones
#include <cstring>
#include <iostream>

using namespace std;

class GemStones
{
  friend istream &operator>>(istream &is, GemStones &gs)
  {
    is >> gs.n; // get number of rocks
    gs.comp = new char*[gs.n];
    gs.compUniq = new char*[gs.n];
    gs.elements = new int*[gs.n];
    for(int i = 0; i < gs.n; i++) {
      gs.comp[i] = new char[100];
      gs.compUniq[i] = new char[100];
      gs.elements[i] = new int[26];
      is >> gs.comp[i]; // get rock composition
      for (int j = 0; j < strlen(gs.comp[i]); j++) {
	gs.elements[i][(int)(gs.comp[i][j])-97]++;
      }
      int uniqLen = 0; // index counter
      for (int j = 0; j < 26; j++) {
	if (gs.elements[i][j] != 0) {
	  gs.compUniq[i][uniqLen++] = (char)(j+97);
	}
      }
      gs.compUniq[i][uniqLen] = '\0'; // mull terminate each of the unique rock compositions
      for (int j = 0; j < strlen(gs.compUniq[i]); j++) {
	gs.e[(int)(gs.compUniq[i][j])-97]++;
      }
    }
    return is;
  }
  friend ostream &operator<<(ostream &os, const GemStones &gs)
  {
    // print composition details
    //    os << "n" << gs.n << endl;
    //    for(int i = 0; i < gs.n; i++)
    //      os << '\t' << gs.comp[i] << '\t' << gs.compUniq[i] << endl;
    //    for(int i = 0; i < 26; i++)
    //      os << (char)(i+97) << '\t' << gs.e[i] << endl;

    // count common gem-elements
    int total = 0;
    for (int i = 0; i < 26; i++) {
      if (gs.e[i] >= gs.n)
	total += 1;
    }
    os << total << endl;
    return os;
  }
private:
  int e[26];       // total count of individual elements from each input rock composition
  int **elements;  // array of individual elements for each roc
  int n;           // number of rocks
  char **comp;     // array of rock compositions
  char **compUniq; // array of unique rock compositions
public:
  GemStones()
  {
    for(int i = 0; i < 26; i++) {
      this->e[i] = 0;
    }
    this->elements = NULL;
    this->n = 0;
    this->comp = NULL;
    this->compUniq = NULL;
  }
  ~GemStones()
  {
    if (this->n > 0 && this->comp != NULL) {
      for(int i = 0; i < this->n; i++) {
	delete[] this->comp[i];
	delete[] this->compUniq[i];
	delete[] this->elements[i];
      }
      delete[] this->comp;
      delete[] this->compUniq;
      delete[] this->elements;
    }
  }
};

int main()
{
  GemStones g;
  
  cin >> g;
  cout << g;

  return 0;
}
