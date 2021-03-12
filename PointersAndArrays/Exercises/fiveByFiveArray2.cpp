#include <iostream>

using namespace std; 


int main(){
   int grid[5][5]; 
   
   for(int i = 0; i < 5; i++){
       for(int j = 0; j < 5; j++){
           if((i == 0 && j == 0) || (i == 1 && j == 1) || (i == 2 && j == 2) || (i == 3 && j == 3) || (i == 4 && j == 4)){
               grid[i][j] = 1; 
           }
           else
             grid[i][j] = 0;
           cout << grid[i][j] << " ";  
       }
       cout << endl; 
   }




  return 0; 
}