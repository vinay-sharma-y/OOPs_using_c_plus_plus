#include<iostream>
using namespace std;
int main(){
    cout << "Hello Cpp" << endl;
    int num1, num2;
    int sum = 0;
    cout << "Enter your two numbers: " << endl;
    cin >> num1 >> num2;
    sum = num1 + num2;
    cout << "Sum : " << sum <<"Average : "<<sum/2.0 << endl;

    return 0;
}