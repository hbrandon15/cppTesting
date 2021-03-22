#include <iostream> 

using namespace std; 

void withdraw(double* balance, double amount){
  
  if(amount < *balance){
    //perform withdraw  
    *balance = *balance - amount;
  }
  else{
    cout << "You are broke. You don't have enough money. Go away." << endl; 
  }



}

void deposit(double* balance, double amount){
  // perform deposit
  // no special checks are needed. 
  cout << "You have initiated a deposit of " << amount << endl; 
  cout << "Depositing funds..." << endl; 
  *balance = *balance + amount; 
  cout << "New balance is: " << *balance;


}
int main(){
  
  double balance = 1500;
  double *ptr = &balance;
 
  withdraw(ptr, 500);
  cout << "Value of pointer is "<<*ptr << endl; cout << "Value of balance is: " << balance << endl; // notice how both values are the same. 
  deposit(ptr, 2000);










  return 0; 
}