#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double R;
    double x;
    double y;

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    if ((y >= -x - 2 * R && y <= 0 && x <= 0 && x >= -2 * R) || (y >= sqrt(R * R - x * x) && y <= 2 * R && x >= 0 && x <= 2 * R))
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}