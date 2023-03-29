#include <iostream> 
#include "rectangle.h"

using namespace std;

/*
구현된 프로그램을 참조하여 다음의 조건을 만족하는 프로그램을 구현하시오.
1. 사각형 객체를 저장할 Rectangle 객체 배열 5칸을 생성
2. x, y 좌표와 가로, 세로 길이를 입력 받아서 입력받은 값으로 사각형 객체 생성
3. 사각형 객체를 생성할 때 생성하는 순서에 따라 사각형에 번호를 입력(hint : 파라미터를 추가해야 함)
4. 생성한 사각형 객체 5개 중에서 가장 넓이가 큰 사각형을 찾아서 출력 -> "0번째 사각형이 가장 크고, 그 넓이는 0이다."
*/
/* 추가로 생각해볼 수 있는 문제
1. 서로 겹치지 않는 사각형을 생성하는 방법
2. 두 개의 사각형이 겹치는 부분의 넓이를 구하는 방법
2. 객체를 포인터로 생성하고, 파괴하는 방법
*/

int main() {
    Rectangle r[5];
    int InputX, InputY, InputWidth, InputHeight;
     for (int i = 0; i < 5; i++)// 사용자가 수동으로 입력하는 할때
     {
         cout << i+1 << "번 사각형" << endl;
         cout << "좌표 x: "; cin >> InputX;
         cout << "좌표 Y: "; cin >> InputY;
         cout << "가로 : "; cin >> InputWidth;
         cout << "세로 : "; cin >> InputHeight;
         r[i].InputRectangle(InputX, InputY, InputWidth, InputHeight, i);
         cout << endl;
     }
    /*Rectangle r[5] = {Rectangle(1,1,3,3,1) ,Rectangle(5,7,12,4,2) ,
        Rectangle(5,6,3,10,3) ,Rectangle(4,9,12,44,4) ,Rectangle(3,3,8,7,5) };// 그냥 일괄로 받고 테스트할 때
        */
    int MaxSize = 0, MaxNum = 0;//최고 크기와 최고 번호를 저장하는 변수
    for (int i = 0; i < 5; i++) {
        cout << "---Rectangle Number " << r[i].GetNum() + 1 << "---" << endl;
        cout << r[i] << endl;
        if (MaxSize < r[i].GetArea()) { //기존 사이즈보다 큰 사이즈일 때
            MaxSize = r[i].GetArea(); //사이즈를 저장한다
            MaxNum = r[i].GetNum();//번호를 저장한다
        }
    }

    cout << MaxNum + 1 << "번 사각형이 제일 크고, 그 넓이는 " << MaxSize << "이다" << endl;
    ;
    /*  if (r.GetArea() > s->GetArea())
          cout << "r";
      else
          cout << "s";
      cout << "has the greater area" << endl;*/
}