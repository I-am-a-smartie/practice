#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    //Write a C++ program to enter length and breadth of a rectangle and find perimeter.
    int length = 0;
    int breadth = 0;
    int area;
    
    cout << "Enter length value\n";
    cin >> length;
    cout << "Enter breadth value\n";
    cin >> breadth;
    area = (length*breadth);
    cout << "Area of rectangle is-" << area << "\n";
    return 0;
}
