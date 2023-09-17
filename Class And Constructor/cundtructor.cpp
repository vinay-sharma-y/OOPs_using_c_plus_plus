#include<iostream>
using namespace std;
class consDemo{
    public: //Always Public
    consDemo(){ //default constructor
        cout << "I am from Cunstructor" << endl;
    }
};
int main(){
    consDemo obj;

    return 0;
}