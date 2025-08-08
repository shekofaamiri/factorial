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