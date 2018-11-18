//https://www.codewars.com/kata/5a3fe3dde1ce0e8ed6000097
/*Introduction :
The first century spans from the year 1 up to and including the year 100, The second - from the year 101 up to and including the year 200, etc.
Task :
Given a year, return the century it is in.*/

#include<iostream>
using namespace std;

int centuryFromYear(int year) 
{
int v;
if (year%100 !=0)
v=(year/100)+1;
else
v=(year/100);
return v ;
}
int main(){
	cout << centuryFromYear(1999) << endl;
	return 0;
}