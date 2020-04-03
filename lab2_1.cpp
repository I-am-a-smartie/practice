#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int cm = 0;
    //int diameter = 0;
    int km;
    int m;
    
    cout << "Enter centimetre value\n";
    cin >> cm;
    m = cm/100;
    cout << "This is the metre value" << m << "\n";
    km = m/1000;
    cout << "This is the kilometre value" << km << "\n";
}
