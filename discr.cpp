#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

void solveQuadraticEquation() {
    int a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    int d = (b * b) - (4 * a * c);
    double sqrtD = sqrt(d);
    double x1, x2;

    if (d > 0) {
        x1 = (-b + sqrtD) / (2 * a);
        x2 = (-b - sqrtD) / (2 * a);
        cout << "D = " << b * b << " - " << 4 * a * c << " = " << d << "\n";
        cout << "Root D = " << sqrtD << "\n";
        cout << "x1 = " << x1 << " (" << -b << " + " << sqrtD << " / " << (2 * a) << ")\n";
        cout << "x2 = " << x2 << " (" << -b << " - " << sqrtD << " / " << (2 * a) << ")\n\n";
        solveQuadraticEquation();
    } else if (d == 0) {
        x1 = -b / (2 * a);
        cout << "D = " << b * b << " - " << 4 * a * c << " = " << d << "\n";
        cout << "Root D = " << sqrtD << "\n";
        cout << "x1 = " << x1 << " (" << -b << " / " << (2 * a) << ")\n\n";
        solveQuadraticEquation();
    } else {
        cout << "D = " << b * b << " - " << 4 * a * c << " = " << d << "\n";
        cout << "No roots\n\n";
        solveQuadraticEquation();
    }


}

void calculateFactorial() {
    int n;
    cout << "Enter number for factorial: ";
    cin >> n;

    long long factor = 1;
    for (int i = 2; i <= n; ++i) {
        factor *= i;
    }
    cout << "Factorial " << n << " = " << factor << "\n\n";
    calculateFactorial();

}

void combinatorick(){
	long long int n, k;
	cout << "Enter k:\n";
	cin >> k;
	cout << "Enter n:\n";
	cin >> n;
	long long factork = 1;
    for (int i = 2; i <= k; ++i) {
        factork *= i;
    }

	long long factorn = 1;
    for (int i = 2; i <= n; ++i) {
        factorn *= i;
    }

	long long factorkn = 1;
    for (int i = 2; i <= (n - k); ++i) {
        factorkn *= i;
    }

	long long int count_combos = (factorn) / (factork * factorkn);
	cout << "Number of combinations:\n" << count_combos << endl << endl;
	combinatorick();
}

void showMenu() {
    while (true) {
        cout << "\tChoice action:\n\n";
        cout << "1. Find Discriminant and x\n";
        cout << "2. Find Factorial\n";
		cout << "3. Combination formula\n";
		cout << "4. Exit\n";

        int choice;
        cout << "\nEnter number for action: ";
        cin >> choice;

        switch (choice) {
            case 1:
                solveQuadraticEquation();
                break;
            case 2:
                calculateFactorial();
                break;
            case 3:
                cout << "Combination formula: \n\n";
                combinatorick();
				break;
			case 4:
				return;
            default:
                cout << "Wrong enter\n\n";
                showMenu();
        }
    }
}

int main() {
    showMenu();
    return 0;
}
