#include <iostream>
using namespace std;

struct Point
{
  float x;
  float y;
};

// area of triangle
void area_triangle(Point p1, Point p2, Point p3)
{
  float area = (((p1.x - p2.x)*(p2.y - p3.y)) - ((p2.x - p3.x)*(p1.y - p2.y)));

  if (area == 0)
    cout << "all points are collinear!" << endl;
  else
    cout << "all 3 points are not collinear!" << endl;

}

int main()
{

  Point p1, p2, p3;

  cout << "enter point p1.x : ";
  cin >> p1.x;
  cout << endl;
  cout << "enter point p1.y : ";
  cin >> p1.y;
  cout << endl;

  cout << "enter point p2.x : ";
  cin >> p2.x;
  cout << endl;
  cout << "enter point p2.y : ";
  cin >> p2.y;
  cout << endl;

  cout << "enter point p3.x : ";
  cin >> p3.x;
  cout << endl;
  cout << "enter point p3.y : ";
  cin >> p3.y;
  cout << endl;

  area_triangle(p1, p2, p3);

}
