#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int n;
    cin >> n;
    double a;
    cout.precision(4);
    cout.setf(ios::fixed);
    for (int i = 0; i < n; i++) {
        cin >> a;
        cout << sqrt(a) << endl;
    }
    return 0;
}
