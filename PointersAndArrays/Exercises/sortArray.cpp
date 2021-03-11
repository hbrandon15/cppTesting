#include <iostream> 
#include <stdio.h>
using namespace std; 



int *sortAsc(int *arr, int n){
  int i, j; 
  for (i = 0; i < n; i++){
    for(j = i + 1; j < n; j++){
      if (*(arr + j) < *(arr + i)){ // basically, if the second index value is bigger than
      // the first... we are trying to sort in ascending (e.g., 1,2,3,4)
      // therefore, we will need to swap the values in the indices
        int temp = *(arr + j);  // temp is going to hold onto our smaller value
        *(arr + j) = *(arr + i); //We now perform the swap
        *(arr + i) = temp;  // we now put our smaller value FIRST
      }
    }
    
  }
  for(i = 0; i < n; i++){ // printing the final result
      cout << *arr << endl; 
      arr++;
    }
  return arr; 
}
int main(){
  int a[4] = {4,2,1,84};
  int *ptr = a; 
  sortAsc(ptr, 4);
 


  return 0; 
}