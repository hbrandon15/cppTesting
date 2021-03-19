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
  *balance = *balance + amount; 

}
int main(){
  
  double balance = 1500;
  double *ptr = &balance;
 
  withdraw(ptr, 500);
  cout << *ptr << endl; cout << balance; // notice how both values are the same. 
  deposit()









  return 0; 
}