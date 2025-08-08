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