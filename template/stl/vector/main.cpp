#include <vector>
#include <iostream>

using namespace std;


int main()
{

  vector<int> coll;
  for(int i=0;i<10;i++)
  {
    coll.push_back(i);
  }
  coll.pop_back();
  cout << "Number[0]=" << coll[0] << endl;
  cout << "Capacity is " << coll.capacity() << endl;
  cout << "Size is " << coll.size() << endl;

  vector<int>::iterator iter;
  for(iter=coll.begin();iter!=coll.end();iter++)
  {
    cout << *iter << " ";
    *iter = 100;
  }
  cout << endl;


  vector<int>::const_iterator citer;
  for(citer=coll.begin();citer!=coll.end();citer++)
  {
    cout << *citer << " ";
  }
  cout << endl;

  


}
