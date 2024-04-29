#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    int number;
    cout << "Enter number: ";
    cin >> number;
    int i = 0;
    while (i <= number)
    {
        cout << i << " ";
        i++;
    }
    system("pause");
    return 0;
}
