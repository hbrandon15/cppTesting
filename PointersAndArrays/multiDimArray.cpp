#include <iostream>

using namespace std; 

int main(){
    int grid[3][3]; // initializing a 3x3 grid

    // we are now going to populate each element in the array
    for( int i =0; i < 3; i++){
        for( int j =0; j < 3; j++){
            
            grid[i][j] = i+j; // we have populated the current element with i+j 
            cout << "grid[" << i << "][" << j << "]: " << grid[i][j] << endl; // we now print the results of the array everytime it is updated
        }
    }







    return 0; 
}