#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 5> arr;
    int sum = 0;

    cout << "Enter 5 numbers:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of all numbers = " << sum << endl;

    return 0;
}