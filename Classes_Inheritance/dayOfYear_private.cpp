//Class with private members

#include <iostream> 
using namespace std; 

class DayOfYear
{
public: 
  int myVar; 
  void output();  // function declaration. NOT INITIALIZED
  void set(int new_month, int new_day); 
  // Precondition: new_month and new_day form a possible date
  // Postcondition: The date is reset according to the arguements

  int get_month(); 
  // returns the month, 1 for Jan, 2 for Feb. etc. 

  int get_day(); 
  // returns the day of the month

private: //private variables are not accessible DIRECTLY in main
  void check_date(); //checks the date
  int month; 
  int day;
};

int main(){
  DayOfYear today, birthday; // making two objects 

  today.set(11,23); // setting the date for today
  cout << "Today's date is "; 
  today.output(); 


  birthday.set(3,21); 
  cout << "Birthday date is "; 
  birthday.output(); 

  // Condition to check if today is our birthday
  if(today.get_month() == birthday.get_month() && today.get_day() == birthday.get_day())
    cout << "Happy Birthday! \n"; // if matched, it is your birthday
  else
    cout << "It is not your birthday\n"; 
  return 0; 
}

// Function definitions

void DayOfYear::output()  // notice how we are also declaring this function called "output" to be part of the class DayOfYear
{
  // In our output function we are going to display the set month and day
  cout << "month = " << month
    << ", day = " << day << endl; // notice how we are using the variables month and day which are associated with our class. 
}

void DayOfYear::set(int new_month, int new_day) // this will be our set function 
{
  month = new_month; // sets private variable month equal to the passed arguement "new_month"
  day = new_day; 
  check_date(); // Here we are calling check_date function to see if the month and date entered are valid
  // it is also important 

}