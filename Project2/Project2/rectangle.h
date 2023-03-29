#ifndef RECTANGLE_H
#define RECTANGLE_H

using namespace std;

class Rectangle {
public:
    Rectangle();
    Rectangle(int, int, int, int, int);
    ~Rectangle();
    int GetHeight();
    int GetWidth();
    int GetArea();
    int GetNum();//�簢�� ��ȣ ��ȯ
    int GetX();
    int GetY();
    void InputRectangle(int, int, int, int, int);//�߰��� �κ� ������ ���� ���� �ֱ�����
    friend ostream& operator <<(ostream& os, Rectangle& r);

private:
    int xLow, yLow, height, width, num;//num ���� �߰�
};


#endif

