#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

double result[3][3];

double DegToRad(double num)
{
    return (num * M_PI) / 180;
}

double function1(double x, double y, double z)
{
    return cos(z) * cos(y);
}

double function2(double x, double y, double z)
{
    return -sin(z) * cos(x) + cos(z) * sin(y) * sin(x);
}

double function3(double x, double y, double z)
{
    return sin(z) * sin(x) + cos(z) * sin(y) * cos(x);
}

double function4(double x, double y, double z)
{
    return sin(z) * cos(y);
}

double function5(double x, double y, double z)
{
    return cos(z) * cos(x) + sin(z) * sin(y) * sin(x);
}

double function6(double x, double y, double z)
{
    return -cos(z) * sin(x) + sin(z) * sin(y) * cos(x);
}

double function7(double x, double y, double z)
{
    return -sin(y);
}

double function8(double x, double y, double z)
{
    return cos(y) * sin(x);
}

double function9(double x, double y, double z)
{
    return cos(y) * cos(x);
}

double TrueValue(double x)
{
    if (x == 0)
    {
        return 0;
    }
    else
    {
        return x;
    }
}

int main()
{
    double roll, pitch, yaw;

    cin >> roll >> pitch >> yaw;

    result[0][0] = TrueValue(function1(DegToRad(roll), DegToRad(pitch), DegToRad(yaw)));
    result[0][1] = TrueValue(function2(DegToRad(roll), DegToRad(pitch), DegToRad(yaw)));
    result[0][2] = TrueValue(function3(DegToRad(roll), DegToRad(pitch), DegToRad(yaw)));
    result[1][0] = TrueValue(function4(DegToRad(roll), DegToRad(pitch), DegToRad(yaw)));
    result[1][1] = TrueValue(function5(DegToRad(roll), DegToRad(pitch), DegToRad(yaw)));
    result[1][2] = TrueValue(function6(DegToRad(roll), DegToRad(pitch), DegToRad(yaw)));
    result[2][0] = TrueValue(function7(DegToRad(roll), DegToRad(pitch), DegToRad(yaw)));
    result[2][1] = TrueValue(function8(DegToRad(roll), DegToRad(pitch), DegToRad(yaw)));
    result[2][2] = TrueValue(function9(DegToRad(roll), DegToRad(pitch), DegToRad(yaw)));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << result[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}