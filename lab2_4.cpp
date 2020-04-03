#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int days;
    int weeks;
    int year;
    
    cout << "Enter the number of days\n";
    cin >> days;
    weeks = days/7;
    cout << "The number of weeks- " << weeks << "\n";
    year=weeks/52;
    cout << "The number of years- " << year << "\n";
    
}
