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
    int GetNum();//사각형 번호 반환
    int GetX();
    int GetY();
    void InputRectangle(int, int, int, int, int);//추가한 부분 생성자 이후 값을 넣기위해
    friend ostream& operator <<(ostream& os, Rectangle& r);

private:
    int xLow, yLow, height, width, num;//num 변수 추가
};


#endif

