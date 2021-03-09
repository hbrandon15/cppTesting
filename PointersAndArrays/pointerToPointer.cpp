#include <iostream>

using namespace std; 


int main(){

    int x = 1; 
    int *ptr1; // this is our first pointer
    int **ptr2; // this is our second pointer

    ptr1 = &x; // ptr1 is equal to the ADDRESS of x
    ptr2 = &ptr1; // ptr2 is equal to the ADDRESS of ptr1
    
    cout << "Value of x is: " << x << endl; // this will result in 1

    // let's see what the value is at pointer 1
    cout << "The value being pointed to by ptr1 is: " << *ptr1 << endl;  // This should be equal to 1 since it is the address of x (which x=1)

    // if we want to see the address of ptr1, will will just print ptr1 (without *)
    cout << "Address of pointer 1 is: " << ptr1 << endl; 

    // let's see the address being pointed to by pointer 2
    cout << "The address being pointed to by ptr2 is: " << *ptr2 << endl; 

    // You should notice that both the address of pointer 1 and address of pointer 2 are the same. 
    
    // Let's print the value being pointed by ptr2
    cout << "The value being pointed to by ptr2 is: " << **ptr2 << endl; 

    // if you want to print the value of the pointer, you print the declaration of the pointer e.g., *ptr1, **ptr2
    // if you want to print the address of the pointer, you print the declaration of the pointer minus one * e.g., ptr1, *ptr2






    return 0; 
}