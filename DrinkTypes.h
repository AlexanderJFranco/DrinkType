#include<iostream>
using namespace std;

class Drink{                                              //Parent Drink Class
friend ostream& operator<<(ostream& os,const  Drink& s);	//Output overload for printing drinks to screen

public:
Drink();
virtual void GetDescription() const;
const char * GetBeverageName() const;
const char * GetCarbonation()const ;

protected:                                                  //Variables made protected so they remain within scope of children class
  char * beverage_name;
  bool carbonated;
};

class Juice: public Drink{                                //Child Class Declarations
public:
  Juice( char * beverage, bool carb,char * fruit);
  void GetDescription()const;
  const char * GetFruit()const;

  private:
  char * fruit_base;
};

class Beer: public Drink{
public:
  Beer(char * beverage, bool carb,char * alcohol);
  void GetDescription()const;
  const char * GetAlcoholPercentage()const;
  private:
  char * alcohol_percentage;
};

class Soda: public Drink{
public:
  Soda( char * beverage, bool carb);
  void GetDescription()const;
};
