#include<iostream>
#include<stack>
using namespace std;

void print_stack(stack<int> S)
{
	while(!S.empty())
	{
		cout<<S.top()<<" ";
		S.pop();
	}
	cout<<endl;
}

int main()
{
	stack<int> S;

	for(int i=1;i<=10;i++)
		S.push(i);
	print_stack(S);

	cout<<S.top()<<endl;
	S.pop();
	cout<<S.top()<<endl;
	
	return 0;
}
