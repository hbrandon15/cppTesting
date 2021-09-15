#include <iostream>

using namespace std; 


int main(){
   int grid[5][5]; 
   
   for(int i = 0; i < 5; i++){ // loop for the rows

       for(int j = 0; j < 5; j++){ // loop for the columns

           if((i == 0 && j == 0) || (i == 1 && j == 1) || (i == 2 && j == 2) || (i == 3 && j == 3) || (i == 4 && j == 4)){ // setting the diagonal equal to 0
               grid[i][j] = 0; 
               
           }
           else if((i > 0 && j == 0) || ( i > 1 && j == 1) || (i > 2 && j == 2) || (i > 3 && j == 3)){ // setting below diagonal to -1
             grid[i][j] = -1;
             
           }
           else
             grid[i][j] = 1; // setting the rest equal to 1
           cout << grid[i][j] << " ";  // printing my grid
       }
       cout << endl; 
   }




  return 0; 
}