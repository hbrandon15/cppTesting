#include <iostream> 

using namespace std; 



int *sortAsc(int *arr, int n){
  cout << *arr << endl; 
  

  return arr; 
}
int main(){
  int a[4] = {4,2,1,84};
  int *ptr = a; 
  sortAsc(ptr, 4);



  return 0; 
}