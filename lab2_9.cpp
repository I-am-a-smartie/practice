#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    
    double constant;
    double side;
    double area;
    
    cout << "Enter the side value\n";
    cin >> side;
    constant = sqrt(3);
    area= (constant/4)*side*side;
    cout << "The area of your triangle is- " << area << "\n";
}
