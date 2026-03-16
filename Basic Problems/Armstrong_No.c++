#include <iostream>
using namespace std;
int main() {
    int n, original, rem;
    int res = 0;
    cout << "Enter number: ";
    cin >> n;
    original = n;
    while(n != 0) {
        rem = n % 10;
        result += rem * rem * rem;
        n /= 10;
    }
    if(res == original)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";
    return 0;
}
