#include <bits/stdc++.h>

using namespace std;

int main()
{
    float initial_x, next_x, initial_y, next_y, time_diff;

    cin >> initial_x >> next_x >> initial_y >> next_y >> time_diff;

    float x_dif = next_x - initial_x;
    float y_dif = next_y - initial_y;

    float y_velocity = y_dif / time_diff;
    float x_velocity = x_dif / time_diff;

    float timeToZero = next_y / y_velocity;

    float result = x_velocity * abs(timeToZero) + next_x;

    cout << fixed << setprecision(2) << "Ball x's position on y: 0.00 cm is " << result << " cm" << endl;

    float konsisi1 = x_velocity * abs(next_y / y_velocity) + next_x;
    float konsisi2 = x_velocity * abs((-50 - next_y) / y_velocity) + next_x;

    if (konsisi1 <= 500 && konsisi2 >= 300)
    {
        cout << "Ball is moving towards goal post" << endl;
    }
    else
    {
        cout << "Ball is not moving towards goal post" << endl;
    }

    return 0;
}