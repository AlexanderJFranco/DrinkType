#include <iostream>
#include "DrinkTypes.h"
#include <iomanip>
#include <cstring>
using namespace std;

//Simple driver file, modify and examine as you see fit

int main(){
Drink ** Drinks = new Drink * [3];

Drinks[0]= new Soda((char*) "Pepsi", true);         //char * -> string is deprecated so strings are immediately casted to char *
Drinks[1]= new Juice((char*) "Orange Juice",false, (char*)"Oranges");
Drinks[2] = new Beer((char*) "Budlight", true, (char*)"5%");

for(int i=0; i<3;i++){
  cout<<*Drinks[i];
}

  return 0;
}
