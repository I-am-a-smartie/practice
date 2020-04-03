#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int ang1;
    int ang2;
    int ang3;
    
    cout << "Enter the first angle value\n";
    cin >> ang1;
    cout << "Enter the second angle value\n";
    cin >> ang2;
    ang3= 180-(ang1+ang2);
    cout << "The third angle value is- " << ang3 << "\n";
}
