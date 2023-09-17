// Parameterised Constructors
#include <iostream> 
using namespace std;
class add{
    public :
    add(int a, int b){
        cout << (a == b) << endl;
    }
};

int main(){
    add obj(45,45);


    return 0; 
}