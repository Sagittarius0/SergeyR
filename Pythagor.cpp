//https://www.codewars.com/kata/5951d30ce99cf2467e000013
/*Given an array of 3 integers a, b and c, determine if they form a pythagorean triple.
A pythagorean triple is formed when:
c2 = a2 + b2
where c is the largest value of a, b, c.
For example: a = 3, b = 4, c = 5 forms a pythagorean triple, because 52 = 32 + 42
Return Values
1 if a, b and c form a pythagorean triple
0 if a, b and c do not form a pythagorean triple*/


include "stdafx.h"
#include <iostream>
using namespace std;


bool PythagoreanTriple(const int a, const int b, const int c)
{
 if(c*c==a*a+b*b)
  return 1;
  else 
  return 0;
}
int main()
{
  int x,y,z;
  cin >> x;
  cin >> y;
  cin >>z;
  cout << PythagoreanTriple(x,y,z) << endl;
  return 0;
 }