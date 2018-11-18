//https://www.codewars.com/kata/583710ccaa6717322c000105

//This kata is about multiplying a given number by eight if it is an even number and by nine otherwise.

include "stdafx.h"
#include <iostream>
using namespace std; 

int simpleMultiplication(int a){
    if (a%2==0)
    a=a*8;
    else 
    a=a*9;
    return a;
}
int main(){
	cout << simpleMultiplication(19) << endl;
	return 0;
}