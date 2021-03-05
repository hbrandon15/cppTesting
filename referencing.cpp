#include <iostream>
using namespace std; 

int main(){
    int num; 
    int *ptr;  //here we are declaring a pointer of int type without any value. 

    // we will now initlize our pointer with the address of num. 
    ptr = &num; // our pointer is now pointing to address of num

    cout << "Address stored in ptr is: " << ptr << endl; 
    *ptr = 7; // with our pointer on the address of our variable num, we set a value at that address to 7. 
    // as a result, the variable at that address (num) will be changed to 7. 

    cout << "Value of num is: " << num << endl; 
    






    return 0;
}