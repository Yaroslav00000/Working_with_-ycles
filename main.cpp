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
    int sum = 0;
    while (i <= end) {
        sum += i;
        i++;
    }
    cout << sum << " ";
    cout << endl << endl;
    system("pause");
    return 0;
}
