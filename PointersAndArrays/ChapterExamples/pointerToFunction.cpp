#include <iostream> 

using namespace std; 

 // we will now declare a pointer to a function taking zero arguements (i.e., void)
  void (*fp)();

  // we will now initialize a function 
  void foobar(){
    cout << "Hello from foobar()" << endl;
  }

int main(){
  fp = &foobar; // we are now initializing a function pointer by giving it the address of the function foobar

  // we will now call our pointer

  fp();

 

  return 0; 
}