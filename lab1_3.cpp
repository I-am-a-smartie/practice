int main(int argc, const char * argv[]) {
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    int difference = 0;
    int product = 0;
    float quotient = 0;
    cout << "Enter the first number- \n";
    cin >> num1;
    cout << "Enter the second number- \n";
    cin >> num2;
    sum = num1 + num2;
    cout << "Sum of your numbers is-" << sum << "\n";
    difference = num1 - num2;
    cout << "Difference of your numbers is-" << difference << "\n";
    product = num1 * num2;
    cout << "Product of your numbers is-" << product << "\n";
    quotient = num1 / num2;
    cout << "Quotient of your numbers is-" << quotient << "\n";
    return 0;
}
