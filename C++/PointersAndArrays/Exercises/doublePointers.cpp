#include <iostream>

using namespace std; 


void printBoard(int **board,int x, int y) {
    for (int i = 0; i < x; ++i) {   // for each row
        for (int j = 0; j < y; ++j) { // for each column
            board[i][j] = 1;
            cout << board[i][j]<<" ";
        }
        cout<<endl;
    }
}

void makeBoard(int x,int y) {
    int **board;  // this is our second pointer

    board = new int*[x]; // We have initialized our pointer to a new integer pointer array of size X

    for (int i = 0; i < x; ++i) {
        board[i] = new int[y]; // basically we are putting one array into another and making a multidim array
        // after making our constructed array, we can now print the board which will then populate the board. 
    }

    printBoard(board,x,y);

}

int main(){

  makeBoard(5,4);
  return 0;
}