#include <iostream>

using namespace std; 

void printPascalTr(int size){
  int i, j;

  int grid[size][size];

  for(i = 0; i < size; i++){

    for(j = 0; j < size; j++){
      if(j == 0){
        grid[i][j] = 1; 
      }
      else if(i == 1 && j == 1){
        grid[i][j] = 1;
      }
      else if(i >= 2 && j == 1){
        grid[i][j] = i;
      }
      else{
        grid[i][j] = 0;
      }
      cout << grid[i][j] << " ";

    }
    cout << endl; 
  }


}
int main(){

  printPascalTr(5);




  return 0; 
}