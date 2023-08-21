#include <iostream>
using namespace std;

main() {
    cout << "What type of math do you want to do?(1 = Addition, 2 = Subtraction, 3 = Multiplication, 4 = Division)" << endl;
    int mathtype;
    cin >> mathtype;
    float num1, num2;
    cout << "Please input the first number" << endl;
    cin >> num1;
    cout << "Please input the second number" << endl;
    cin >> num2;
    float ans;
    if (mathtype == 1) {
        ans = num1 + num2;
        cout << "The sum of " << num1 << " and " << num2 << " is " << ans;
    } else if (mathtype == 2) {
        ans = num1 - num2;
        cout << "The difference of " << num1 << " and " << num2 << " is " << ans;
    } else if (mathtype == 3) {
        ans = num1 * num2;
        cout << "The product of " << num1 << " and " << num2 << " is " << ans;
    }  else if (mathtype == 4) {
        ans = num1 / num2;
        cout << "The quotient of " << num1 << " and " << num2 << " is " << ans;
    }  else {
        cout << "Error, invalid math type";
    }
}