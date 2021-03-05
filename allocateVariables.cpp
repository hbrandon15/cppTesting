#include <iostream>

using namespace std;


int main(){

   
    int *ptr;  //Lets add a pointer called ptr
    int num = 4; 
    cout << "The interger input is: " << num << endl; 

    ptr = new int[num];  // we have now initialized our pointer to an integer array of size num(4)
    // by using the keyword "new", we are dynamically allocating memory in the heap. Heap= area of preserved computer memory. 

    cout << "Input" << num << " integers\n";

    // Initializing the array
    for(int i = 0; i < num; i++){
        
        ptr[i] = i+1; // This line will print 1,2,3,4 to the array if no user input
        cin >> ptr[i]; // This will overwrite the line above with the input the user wants
    }

    // Printing the array
    cout << "Elements entered by you are\n"; 
    for(int i = 0; i < num; i ++){
        cout << ptr[i] << endl; // We are going to print to the screen the output of the array. 
    }

    // We are now finished with our code and the use of our array. 
    // Since we allocated the memory for the array and no longer need it
    // We need to deallocate the memory like so

    delete[] ptr; 
    return 0; 


    return 0; 
}