#include<iostream>
#include "rectangle.h"

using namespace std;
Rectangle::Rectangle() {}

Rectangle::Rectangle(int x = 0, int y = 0, int h = 0, int w = 0, int n = 0)//�⺻ ������
{
    xLow = x; yLow = y; height = h; width = w, num = n;
}
void Rectangle::InputRectangle(int x = 0, int y = 0, int h = 0, int w = 0, int n = 0)
{//�⺻ �����ڿ� ���� �� �Է¹ް� ���� �ֱ� ���� ������µ� �Է��� �迭�� �� �ް� ������ �ȿ� �ѹ��� �־ �Ǳ��մϴ�
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
int Rectangle::GetNum() { return num; }//�߰��� �κ� ��ȣ�� ��ȯ��

ostream& operator <<(ostream& os, Rectangle& r)
{
    os << "Position is: " << r.xLow << " ";
    os << r.yLow << endl;
    os << "Height is: " << r.height << endl;
    os << "Width is: " << r.width << endl;
    return os;
}