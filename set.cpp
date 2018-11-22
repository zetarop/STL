/*
  Set is a associative container. We know that in associative containers each element is unique.
  So sets are also containers that stores unique elements following in a specific order. 
  The word associative means each value associated with a key value. 
  For any kind of operation key will be more preferred than actual value.
  Here sets are special type of associative containers where value itself is key value.
  
  By default set element are arranged in increasing order.
  
  using below syntax we can reverse the ordering in set.
  
  i.e  set<int, greater<int> > S; 
  
  we can traverse through a set.
  
  S.insert(x);
  S.erase(x);
  S.clear() // remove all elements.
  
  S.count(x) // return number of occourance of element x in set.
  S.find(x) // check if there exist an element in set S or not.
  
   if(S.find(x) != S.end())
      element is present in set S.
    else
      element is not present.
      
  S.upper_bound(x)  // return iterator to the element which in next greater to x.
                       If the key passed in the parameter exceeds the maximum key in the container, 
		       then the iterator returned points to the last element in the set container.
		       
  S.lower_bound(x)  //  return iterator to the element which in equal to the passed element , if passed 
  			element is not present in the set it will return iterator to the next element which is just greate 
			than the passed element.
			if the passed element is greater than the max key in set then return iterator points to the last
			element in the set container.
      
  
  
  
  insertion take log(n) time.
  deletion take log(n) time.
  
  
*/

#include<iostream>
#include<set>
using namespace std;

int main()
{
	set<int> S;
	for(int i=1;i<=10;i++)
		S.insert(i*i);

	for(auto x:S)
		cout<<x<<" ";
	cout<<endl;


	cout<<S.count(4)<<endl;

	
	return 0;
}
