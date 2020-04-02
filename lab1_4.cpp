#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    //Write a C++ program to enter length and breadth of a rectangle and find perimeter.
    int length = 0;
    int breadth = 0;
    int perimeter;
    
    cout << "Enter length value\n";
    cin >> length;
    cout << "Enter breadth value\n";
    cin >> breadth;
    perimeter = 2*(length+breadth);
    cout << "Perimeter of rectangle is-" << perimeter << "\n";
    return 0;
}
