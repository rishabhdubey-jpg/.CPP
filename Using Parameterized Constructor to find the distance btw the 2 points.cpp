// Using Parameterized Constructor to find the distance btw the 2 points.

#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;
    friend void distBtwPoints(Point, Point);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};

void distBtwPoints(Point o1, Point o2)
{
    float dist;
    dist = sqrt(pow((o2.x - o1.x), 2) + pow((o2.y - o1.y), 2));
    cout << dist << endl;
}

int main()
{
    Point p(1, 0);
    p.displayPoint();

    Point q(70, 0);
    q.displayPoint();

    cout << "The distance between these 2 points is: ";
    distBtwPoints(p, q);

    return 0;
}