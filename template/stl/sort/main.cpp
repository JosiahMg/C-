#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class ID{
public:
  ID():name(""),score(0){}
  ID(string n, int s):name(n), score(s){}

  string name;
  int score;
};

bool operator==(const ID& x, const ID& y)
{
  return (x.name == y.name) && (x.score == y.score);
}

bool operator<(const ID& x, const ID& y)
{
  return x.score < y.score;
}

bool compare(const ID& x, const ID& y)
{
  return x.score > y.score;
}


int main()
{
  vector<ID> ids;
  vector<ID>::iterator iter;

  ids.push_back(ID("Tom", 99));
  ids.push_back(ID("Josh", 100));
  ids.push_back(ID("Li", 88));

  //sort(ids.begin(), ids.end(), compare);
  sort(ids.begin(), ids.end());

  for(iter=ids.begin();iter!=ids.end();iter++)
  {
    cout << (*iter).name << "  " << (*iter).score << endl;
  }
  return 0;

}
