#include <iostream>
using namespace std;
class Point
{
private:
    int x, y;

public:
    Point();
    Point(int a,int b);
    void set_x(int);
    void set_y(int);
    int get_x();
    int get_y();
    void print();
};
 Point::Point() {}
Point::Point (int a, int b)
{
    x = a;
    y = b;
}
void Point::set_x(int a) {
    x=a;
}
void Point::set_y(int b){
    y=b;
}
int Point::get_x()
{
    return x;
}
int Point::get_y()
{
    return y;
}
void Point::print()
{
    cout << x << y << endl;
}
int main()
{
    Point p;
    p.set_x(3);
    p.set_y(4);

    cout << "x: " << p.get_x() << endl;
    cout << "y: " << p.get_y() << endl;

    return 0;
}