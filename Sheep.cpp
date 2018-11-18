//https://www.codewars.com/kata/54edbc7200b811e956000556

//Consider an array of sheep where some sheep may be missing from their place. We need a function that counts the number of sheep present in the array (true means present).

include "stdafx.h"
#include <iostream>
using namespace std; 

int count_sheep(vector<bool> arr) 
{
int k=0;
  for (int i=0; i<arr.size();i++)
  {
  if (arr[i]==true)
  k=k+1;
  }
  return k;
}
int main(){
 Cout « count_sheep([true,  true,  true,  false, true,  true,  true,  true, true , false, false, true,  true]) « endl;
 return 0;
}