// Fried Class 
// Using private members of another class
#include <iostream> 
using namespace std;

class name{
    private:
         char ch = 'a';
         int n = 34;
    public:
        friend class abh; // Declaraton of friend class
};
class abh{
    public:
    void disp(name obj){
        cout<<obj.ch<<" "<<obj.n<<endl;
    }
};
int main(){
    abh obj;
    name obj2;
    obj.disp(obj2);

    return 0; 
}