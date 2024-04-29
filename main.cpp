#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    int number_start, number_end, i;
    cout << "Enter number start: ";
    cin >> number_start;
    cout << "Enter number end: ";
    cin >> number_end;
    int start = min(number_start, number_end);
    int end = max(number_start, number_end);

    i = start;
    while (i <= end) {
        cout << i << " ";
        i++;
    }
    cout << endl << endl;
    i = start;
    while (i <= end) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
        i++;
    }
    cout << endl << endl;
    i = start;
    while (i <= end) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
        i++;
    }
    cout << endl << endl;
    i = start;
    while (i <= end) {
        if (i % 7 == 0) {
            cout << i << " ";
        }
        i++;
    }
    cout << endl << endl;
    system("pause");
    return 0;
}
