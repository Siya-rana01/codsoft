#include <iostream>
using namespace std;

int main() {
    char c;
    float n1, n2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> c;
    cout << "Enter two operands: ";
    cin >> n1 >> n2;

    switch(c) {
        case '+':
            cout << n1 << " + " << n2 << " = " << n1 + n2;
            break;
        case '-':
            cout << n1 << " - " << n2 << " = " << n1 - n2;
            break;
        case '*':
            cout << n1 << " * " << n2 << " = " << n1 * n2;
            break;
        case '/':
            if (n2 != 0)
                cout << n1 << " / " << n2 << " = " << n1 / n2;
            else
                cout << "Error! Division by zero.";
            break;
        default:
            cout << " Operator is not correct";
            break;
    }

    return 0;
}
