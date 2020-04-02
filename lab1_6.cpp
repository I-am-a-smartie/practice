#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int radius = 0;
    //int diameter = 0;
    int circumference;
    int area;
    
    cout << "Enter radius value\n";
    cin >> radius;
    cout << "This is the diametre value" << radius*2 << "\n";
    circumference = 2*3.14*radius;
    cout << "This is the circumference value" << circumference << "\n";
    area = radius*radius*3.14;
    cout << "Area of circle is-" << area << "\n";
    return 0;
}
