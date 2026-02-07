#include <iostream>
using namespace std;

int main() {

    while (true) {
        char choice;
        float num1, num2;

        cout << "\nChoose option (+, -, *, / or q to quit): ";
        cin >> choice;

        if (choice == 'q') {
            cout << "Calculator closed.";
            break;
        }

        
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        switch (choice) {
            case '+':
                cout << "Result = " << num1 + num2;
                break;

            case '-':
                cout << "Result = " << num1 - num2;
                break;

            case '*':
                cout << "result = " << num1 * num2;
                break;

            case '/':
                if (num2 != 0)
                    cout << "Result = " << num1 / num2;
                else
                    cout << "Cannot divide by zero";
                break;

            default:
                cout << "Invalid choice";
        }
    }

    return 0;
}
