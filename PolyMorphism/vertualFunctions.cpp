#include <iostream> 
using namespace std;

class base{
    public:
    virtual void print(){
        cout << "I am from Base class" << endl;
    }
    void show(){
        cout << "I am from Base class" << endl;
    }
};
class derived: public base{
    public:
    void print(){
        cout << "I am from Derived class" << endl;
    }
    void show()
    {
        cout << "I am from Derived class" << endl;
    }
};
int main(){
    base *bptr;
    derived d;
    bptr = &d;
    bptr->print();
    bptr->show();

    return 0; 
}