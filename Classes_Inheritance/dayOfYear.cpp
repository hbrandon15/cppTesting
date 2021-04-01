#include <iostream> 

using namespace std; 

class DayOfYear{
  public: 
    void output(); // declaring a member function to this class. NOT initalized. 
    int month; 
    int day; 
}; 

void DayOfYear::output(){  // this indicates the function "output" is a member of the DayOfYear class
  cout << "Month " << month << endl; 
  cout << "Day " << day << endl; 
}

int main(){
  DayOfYear birthday, today; // we are now declaring two objects: birthday and today. Both being objects of the DayOfYear class
  birthday.month = 8; // accessing and setting the month variable for the object birthday
  birthday.day = 5; // accessing and setting the day variable for object birthday

  cout << "Your birthday is: " << endl; 
  birthday.output(); // calling the member function "output"

  cout << "Today's date is: " << endl;
  today.month = 12; // accessing and setting month variable for object today
  today.day = 4; // accessing and setting day variable for object today

  today.output(); //since output() is public, it is directly accessible in main()
}