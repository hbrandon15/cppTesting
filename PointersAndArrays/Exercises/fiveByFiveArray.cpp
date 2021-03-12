#include <iostream> 

using namespace std; 

int main(){
  // The goal of this excercise is to print a 5x5 array with the numbers 1-25 
  // E.g., Row 1: 1 2 3 4 5
  // Row 2: 6 7 8 9 10... etc.

  //first I want to declare a grid that is 5x5 

  int grid[5][5]; 
  int counter = 1; //this is going to be the the value inside the array

  for(int i = 0; i < 5; i ++){  // first for loop is for the rows 
    for(int j = 0; j < 5; j++){ // second for loop is for the columns
      grid[i][j] = counter; // here I am assigning an element to the current grid position 
      // for the first iteration [0][0] will hold 1
      counter++; // I now want to add 1 to my counter so that everytime the loop iterates, I will assign 1-25 to my array
      cout << grid[i][j] << " "; // this is how I will see my results of my grid followed by a space for each element
    
    }
    cout << endl; // I added this line so after the first row is populated, I want to seperate the rows in the output
    // simply seperate by going to the next line
  }







  return 0;
}