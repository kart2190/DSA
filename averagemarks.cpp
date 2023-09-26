#include<iostream>
using namespace std;

int main () {

    // User input
    int physics, chem, maths;

    cin >> physics;
    cin >> chem;
    cin >> maths;

    float average = (physics + chem + maths)/3.0;

    cout << "Average marks "<< average;


}