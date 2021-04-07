#include <iostream>
#include "DrinkTypes.h"
#include <iomanip>
#include <cstring>
using namespace std;

Drink::Drink(){                                      //Parent Class default constructor

}

ostream& operator<<(ostream& os, const  Drink& d)			//output operator overload definition
{
  d.GetDescription();
  cout<<endl;
  return os;
}

                                                      //Universal Drink Function Definitions
const char * Drink::GetBeverageName()const{
  return beverage_name;
}

const char * Drink::GetCarbonation()const{
  if(carbonated==false)
    return "not carbonated";
  else
    return "carbonated";
}



//Getters to pull drink information
const char * Juice::GetFruit()const{
  return fruit_base;
}

const char * Beer:: GetAlcoholPercentage()const{
  return alcohol_percentage;
}


//Functions to output drink information
void Juice::GetDescription()const{
    cout<< GetBeverageName()<<", "<< GetCarbonation()<<", made from "<< GetFruit()<<". ";
}

void Beer::GetDescription()const{
  cout<<GetBeverageName()<<", "<< GetCarbonation()<<", "<< GetAlcoholPercentage()<<". ";
}

void Soda::GetDescription()const{
  cout<< GetBeverageName()<<", "<<GetCarbonation()<<". ";
}

//Derived class constructors
Juice::Juice(char * beverage, bool carb,char * fruit){
  beverage_name=beverage;
  fruit_base=fruit;
  carbonated = carb;

}

Beer::Beer(char * beverage, bool carb, char * alcohol){

  beverage_name=beverage;
  alcohol_percentage=alcohol;
  carbonated = carb;

}

Soda::Soda(char * beverage, bool carb){
  beverage_name = beverage;
 carbonated = carb;

}

void Drink::GetDescription()const			//virtual function definition left blank
{
}
