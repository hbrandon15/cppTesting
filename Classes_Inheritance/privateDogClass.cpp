#include <iostream>
using namespace std; 
class Dog
{
  private: // these attributes of the class are NOT available in other functions and classes
    char name[25];
    string gender; 
    int age; 
    int size; 
    bool healthy; 

};

int main(){
  Dog dogObj; // making object of Dog class
  dogObj.name; // We are now trying to access data members in the Dog class that are PRIVATE
  // Therefore this will result in an error. 
}