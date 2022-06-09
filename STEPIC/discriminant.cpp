#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a ,b, c;
    cin >> a >> b >> c;
    double x1,x2,d,d2;
    d = (b * b) - (4 * a * c);
    d2 = sqrt(d);

    if (d2 >= 0) {
    x1 = (-b + d2) / (2 * a);
    x2 = (-b - d2) / (2 * a);
    cout << (x1) << " " << (x2) << endl;
    } else {
        cout << "No real roots";
    }
    return 0;
}

