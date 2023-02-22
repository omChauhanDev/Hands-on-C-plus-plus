#include <iostream>
#include <cmath>
using namespace std;

// This is the second example of parameterised constructors.
// This program takes inputs of two points from the user and calculate the distance
// between them.

class point
{
    int x, y;

public:
    friend float calculateDis(point o1, point o2);

    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void printPoint(void)
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
};

float calculateDis(point o1, point o2)
{
    float dis;
    dis = pow((o2.x - o1.x), 2) + pow((o2.y - o1.y), 2);
    return sqrtf(dis);
}

int main()
{
    int x1, y1;
    cout << "Enter the x coordinates of first point :- " << endl;
    cin >> x1;
    cout << "Enter the y coordinates of first point :- " << endl;
    cin >> y1;
    point p1(x1, y1);
    cout << "Your first point is ";
    p1.printPoint();
    cout << endl;

    int x2, y2;
    cout << "Enter the x coordinates of second point :- " << endl;
    cin >> x2;
    cout << "Enter the y coordinates of second point :- " << endl;
    cin >> y2;
    point p2(x2, y2);
    cout << "Your secont point is ";
    p2.printPoint();
    cout << endl;

    cout << "Distance between first and second point is " << calculateDis(p1, p2) << endl;

    return 0;
}