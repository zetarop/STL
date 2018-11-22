/*
  Queues are a type of container adaptors which operate in a first in first out (FIFO) type of arrangement. 
  Elements are inserted at the back (end) and are deleted from the front.
  
  Q.push(k)
  Q.pop()
  
  Q.empty() // return 1 if queue Q is empty else return 0.
  
*/

#include<iostream>
#include<queue>
using namespace std;


void print_queue(queue<int> Q)
{
	while(!Q.empty())
	{
		cout<<Q.front()<<" ";
		Q.pop();
	}
	cout<<endl;
}

int main()
{
	queue<int> Q;

	for(int i=1;i<=10;i++)
		Q.push(i);
	print_queue(Q);

	cout<<Q.front()<<" "<<Q.back()<<endl;
	Q.pop();
	cout<<Q.front()<<" "<<Q.back()<<endl;


	
	return 0;
}
