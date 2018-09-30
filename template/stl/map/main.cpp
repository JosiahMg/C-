#include <iostream>
#include <map>

using namespace std;

class Compare{
public:
  bool operator()(int a, int b)
  {
    return a>b;
  }

};

int main()
{
  //map<int, string> coll'
  map<int, string, Compare> coll;
  map<int, string>::iterator iter;

  coll.insert(map<int, string>::value_type(1, "One"));
  coll.insert(make_pair(2, "Two"));
  coll[23] = "Twenty-three";
  coll.insert(pair<int, string>(9, "Nine"));

  for(iter=coll.begin();iter!=coll.end();++iter)\
  {
    cout << iter->first << " " << iter->second << endl;
  }
  cout << coll[23] << endl;
  Compare com;
  bool val = com(1,2);
  cout << val << endl;
  return 0;
}
