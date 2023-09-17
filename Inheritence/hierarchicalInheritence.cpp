// Hierarchical Inheritence
// c and b both inherits a:)
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
class b: public a
{
public:
    b()
    {
        cout << "From Constructor b" << endl;
    }
};
class c : public a
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