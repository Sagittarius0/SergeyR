//https://www.codewars.com/kata/55a2d7ebe362935a210000b2

//Given an array of integers your solution should find the smallest integer.




#include <vector>
#include<iostream>
using namespace std; 

int findSmallest(vector <int> list)
{
   int min;
   min=99999999;
   for(int i=0; i<list.size();i++)
   {
   if (list[i] < min)
   {
   min=list[i];
   }
   }
   
  return min;
}
int main(){
	cout << findSmallest([1,2,3,4,5,6]) << endl;
	return 0;
}