#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int base;
    int height;
    int area;
    
    cout << "Enter the base value\n";
    cin >> base;
    cout << "Enter the height value\n";
    cin >> height;
    area= 0.5*base*height;
    cout << "The area of your triangle is- " << area << "\n";
}
