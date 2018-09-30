#include <list>
#include <iostream>

using namespace std;

bool compare(int a, int b)
{
  return a>b;
}

void show_list(const list<int> coll)
{
  list<int>::const_iterator iter;
  for(iter=coll.begin();iter!=coll.end();++iter)
  {
    cout << *iter << " ";
  }
  cout << endl;
}

int main()
{
  list<int> coll;
  coll.push_back(100);
  coll.push_back(234);
  coll.push_back(87);
  coll.push_back(57);
  coll.push_back(12);
  coll.push_back(56);

  list<int>::iterator iter = coll.begin();
  coll.erase(iter);

  iter = ++ coll.begin();

  coll.erase(iter);
  coll.sort(compare);
  show_list(coll);

  coll.sort();
  show_list(coll);

  return 0;
}
