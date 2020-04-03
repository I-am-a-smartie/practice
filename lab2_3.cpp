#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int celsius;
    int fahrenheit;
    
    cout << "Enter fahrenheit value\n";
    cin >> fahrenheit;
    celsius = (fahrenheit-32)*0.55;
    cout << "This is the celsius value" << celsius << "\n";
    
}
