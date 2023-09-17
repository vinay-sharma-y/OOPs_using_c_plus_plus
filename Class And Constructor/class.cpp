// Classes and Objects
#include <iostream> 
using namespace std;

class car{
    char color[10];
    public:
    int speed;
    public:
    void getData(int distance, int fuel){
        cout << "The car has covered " << distance << " km and has consumed " <<fuel << " litre fuel" << endl;
    }
    void milage(float distance, float fuel);

    void carSpeed(){
        cout<<"The car speed is " << speed << endl;
    }
}audi;

void car::milage(float d, float f){
    float carMilage = d / f;
    cout<<"The car Milage "<<carMilage << endl;
}
int main(){
    car swift;
    // swift.getData(130, 7);
    // audi.getData(130, 25);
    // audi.milage(420, 23);
    swift.speed = 45;
    swift.carSpeed();

    return 0; 
}