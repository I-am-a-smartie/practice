#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int celsius;
    int fahrenheit;
    
    cout << "Enter celsius value\n";
    cin >> celsius;
    fahrenheit = (1.8*celsius)+32;
    cout << "This is the fahrenheit value" << fahrenheit << "\n";
    
}
