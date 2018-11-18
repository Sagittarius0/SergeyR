//https://www.codewars.com/kata/57356c55867b9b7a60000bd7
/*Your task is to create a function that does four basic mathematical operations.

The function should take three arguments - operation(string/char), value1(number), value2(number).
The function should return result of numbers after applying the chosen operation.*/



#include<iostream>
using namespace std;

int basicOp(char op, int val1, int val2) {
  if (op=='+')
  return  val1+val2;
  if (op=='-')
  return val1-val2;
  if (op=='*')
  return val1*val2;
  if (op=='/')
  return val1/val2; 
}
int main(){
	cout << basicOp('*',2,456) << endl;
	return 0;
}