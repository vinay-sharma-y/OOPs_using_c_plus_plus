// Destructor 
#include<iostream>
using namespace std;

class hello{
    public:
    // Contructor
    hello(){
        cout << "From Constructor" << endl;
    }
    // Destructor
    ~hello(){
        cout << "From Destructor" << endl;
    }
    // Member function
    void display(){
        cout << "Hello from Member function" << endl;
    }
};
int main(){
    hello obj;
    obj.display();

    return 0;
}