#include <iostream>

using namespace std;


int main(){

   
    int *ptr;  //Lets add a pointer called ptr
    int num = 4; 
    cout << "The interger input is: " << num << endl; 

    ptr = new int[num];  // we have now initialized our pointer to an integer array of size num(4)
    // by using the keyword "new", we are dynamically allocating memory in the heap. Heap= area of preserved computer memory. 

    cout << "Input" << num << " integers\n";
    for(int i = 0; i < num; i++){
        
        ptr[i] = i+1; 
    }


    return 0; 
}