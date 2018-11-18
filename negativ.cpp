//https://www.codewars.com/kata/55685cd7ad70877c23000102
//In this simple assignment you are given a number and have to make it negative. But maybe the number is already negative?

#include<iostream>
using namespace std;

int makeNegative(int num)
{
if (num > 0)
num=num*(-1);
if (num < 0)
num=num;
if (num == 0)
num=0;
  return num;
}
int main(){
	cout << makeNegative(12) << endl;
	return 0;
}