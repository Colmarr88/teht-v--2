#include <iostream>

using namespace std;

class Hello
{
  public:
 
    void sayHello() {
      cout << "Hello World\n";
    }
};
 
int main()
{
    Hello c;    // Creating an object
    c.sayHello();  // Calling the function
 
    return 0;
}