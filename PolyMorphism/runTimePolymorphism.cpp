// Polymorphism compileTime
// Function Overriding
#include <iostream>
using namespace std;

class a{
    public:
    void display(){
        cout << "I am from Super(Parent)Class" << endl;
    }
};
class b: public a{
    public:
    void display(){
        cout << "I am from base(Child)Class" << endl;
    }
};

int main(){
    a obj;
    obj.display(); // Depending on the object
    b obj2;
    obj2.display();


    return 0; 
}