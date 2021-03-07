#include <iostream>

using namespace std; 

int main(){
    int arr[4]; // we will first declare an array called arr with a size of 4. 

    int *ptr; // here we will declare a pointer ptr. 

    ptr = arr; // now we are pointing to the first element in the array (arr[0])

    *ptr = 3; // now we are setting the value of the first element of the array (arr[0]) equal to 3

    ptr++; // we are now moving the pointer across the array by one. Now we are at arr[1]

    // Now lets set arr[1] equal to 5
    *ptr =5; 

    //rather than updating the array as we have been before, we can directly update the array using &arr
    ptr = &arr[3]; // our pointer is now pointing at the address of the third index of the array
    // we will now store a value at that address
    *ptr = 10; 

    ptr = arr; //now moving array pointer back to arr[0]

    *(ptr+2) = 8; // another way to move the pointer along the array, we are able to go from arr[0] to arr[2] and assign teh value 8

    // now lets print out the array results
    for (int i = 0; i < 4; i++){
        cout << "The value at arr["<<i<<"] is: " << arr[i] << endl; 
    }






    return 0; 
}