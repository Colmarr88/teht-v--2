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
    Hello c;   
    c.sayHello(); 
 
    return 0;
}