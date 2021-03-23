#include <iostream>

using namespace std; 


class Dog
{
  public: 
    string name; 
    string gender; 
    int age; 
    int size; 
    bool healthy; 

};

int main(){
  Dog dogObj; // creating an object of the Dog class called dogObj
  // we will use the dot operator to access members of the class

  dogObj.gender = "Male"; 
  dogObj.age = 2; 
  dogObj.size = 3; 
  dogObj.healthy = false; 

  Dog dog2; // this will be our second dog
  dog2.name = "MrWiggles"; 
  dog2.gender = "Male"; 
  dog2.healthy = false; 

  string healthState; 
  if(dogObj.healthy == false || dog2.healthy == false)
    healthState = "NOT HEALTHY"; 
  else 
    healthState = "IS HEALTHY"; 

  cout << "Dog is a " << dogObj.gender << endl << "Age is " << dogObj.age << " and size " << dogObj.size << endl << "Dog is " << healthState << endl; 
  cout << "Dog2 has name of " << dog2.name << " and has gender of " << dog2.gender;
}