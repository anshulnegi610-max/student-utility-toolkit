
#include <iostream>
using namespace std;

void calculator() {
    int a, b;
    char op;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter operator (+ - * /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> b;

    switch(op) {
        case '+': cout << "Result: " << a + b << endl; break;
        case '-': cout << "Result: " << a - b << endl; break;
        case '*': cout << "Result: " << a * b << endl; break;
        case '/':
            if(b != 0) cout << "Result: " << (float)a / b << endl;
            else cout << "Division by zero not allowed" << endl;
            break;
        default: cout << "Invalid operator" << endl;
    }
}

void primeChecker() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n <= 1) {
        cout << "Not a prime number" << endl;
        return;
    }
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            cout << "Not a prime number" << endl;
            return;
        }
    }
    cout << "Prime number" << endl;
}

void fibonacci() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    int a = 0, b = 1;
    cout << "Fibonacci Series: ";
    for(int i = 1; i <= n; i++) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int choice;
    while(true) {
        cout << "\n--- Student Utility Toolkit ---\n";
        cout << "1. Calculator\n";
        cout << "2. Prime Number Checker\n";
        cout << "3. Fibonacci Series\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: calculator(); break;
            case 2: primeChecker(); break;
            case 3: fibonacci(); break;
            case 4: return 0;
            default: cout << "Invalid choice\n";
        }
    }
}
