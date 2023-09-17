#include<iostream>
using namespace std;
// Class teacher
class teacher{ // Parent class  
    public:
    // Constructor
    teacher(){
        cout << "I am a teacher! " << endl;
    }
    string collegeName = "You Tube";
};
// Class mathsTeacher
class mathsTeacher: public teacher{ //Inheriting teacher class (Child class)
    public:
    mathsTeacher(){
        cout<< "Hey, I am a mathsteacher! " << endl;
    }
};
int main(){
    mathsTeacher obj;
    cout << "College Name" << obj.collegeName << endl; // Object of child class can access the variables of parant class
    

    return 0;
}