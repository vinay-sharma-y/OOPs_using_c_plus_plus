// Multiple Inheritence
// C inherits a and b both:)
#include <iostream>
using namespace std;

class a
{
public:
    a()
    {
        cout << "From Constructor a" << endl;
    }
};
class b 
{
public:
    b()
    {
        cout << "From Constructor b" << endl;
    }
};
class c : public a,public b
{
public:
    c()
    {
        cout << "From Constructor c" << endl;
    }
};

int main()
{
    c obj;

    return 0;
}