#include<iostream>
#include "rectangle.h"

using namespace std;
Rectangle::Rectangle() {}

Rectangle::Rectangle(int x = 0, int y = 0, int h = 0, int w = 0, int n = 0)//기본 생성자
{
    xLow = x; yLow = y; height = h; width = w, num = n;
}
void Rectangle::InputRectangle(int x = 0, int y = 0, int h = 0, int w = 0, int n = 0)
{//기본 생성자외 생성 후 입력받고 값을 넣기 위해 만들었는데 입력을 배열로 쭉 받고 생성자 안에 한번에 넣어도 되긴합니다
    xLow = x; yLow = y; height = h; width = w, num = n;
}

Rectangle::~Rectangle()
{
    cout << "delete" << endl;
}

int Rectangle::GetX() { return xLow; }
int Rectangle::GetY() { return yLow; }
int Rectangle::GetHeight() { return height; }
int Rectangle::GetWidth() { return width; }
int Rectangle::GetArea() { return width * height; }
int Rectangle::GetNum() { return num; }//추가한 부분 번호를 반환함

ostream& operator <<(ostream& os, Rectangle& r)
{
    os << "Position is: " << r.xLow << " ";
    os << r.yLow << endl;
    os << "Height is: " << r.height << endl;
    os << "Width is: " << r.width << endl;
    return os;
}