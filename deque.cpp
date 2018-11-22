/*
  Doubly ended queue.
  
  Dq.push_front()
  Dq.push_back()
  
  Dq.pop_front()
  Dq.pop_back()
  
  we can traverse a deque.
  
*/

#include<iostream>
#include<deque>
using namespace std;

int main()
{
	deque<int> Dq;

	for(int i=1;i<=10;i++)
		Dq.push_back(i);

	for(auto x:Dq)
		cout<<x<<" ";
	
	return 0;
}
