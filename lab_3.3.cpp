#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double x;
    double R;
    double y;

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    // розгалуження в повній формі
    if (x <= -8 - R)
        y = R;
    else
        if (x > -8 - R && x <= -8 + R)
            y = R - sqrt(pow(R, 2) - pow((x + 8), 2));
        else
            if (x > -8 + R && x <= -4)
                y = R;
            else
                if (x > -4 && x <= 2)
                    y = R - ((1 + R) / 6) * (x + 4);
                else
                    y = x - 3;

    cout << endl;
    cout << "y = " << y << endl;
    cin.get();
    return 0;
}