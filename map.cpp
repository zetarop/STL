/*
  Maps are associative containers that store elements in a mapped fashion. 
  Each element has a key value and a mapped value.
  No two mapped values can have same key values.
  
  we can traverse map.
  
  M.erase(key)
  M.clear()

*/

#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<int,int> M;
	for(int i=5;i<=10;i++)
		M[i]=i*i;
    
	//M.clear();

	for(auto x:M)
		cout<<x.first<<" "<<x.second<<endl;

	return 0;
}
