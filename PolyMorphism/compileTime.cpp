// Polymorphism compileTime
// Function Overloading
// Many Functions of same name but Performance accordingly calling the functions
#include <iostream> 
using namespace std;

class add{
    public:
    int sum(int x, int y){
        return x + y;
    }
    int sum(int x, int y, int z){
        return x + y + z;
    }
};


int main(){ 
    cout<<"Hello world!"<<endl;
    add obj;
    cout << "Output: " << obj.sum(34, 566) << endl;
    cout << "Other Output: " << obj.sum(34, 566, 23) << endl;
    return 0; 
}