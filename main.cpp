#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    int number;
    int sum = 0;
    while (true) {
        cout << "Enter number(Entering zero will end the program): ";
        cin >> number;
        if (number == 0) {
            break;
        }
        sum += number;
    }
    cout << sum << " ";
    cout << endl << endl;
    system("pause");
    return 0;
}
