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
    int temp[5][5] = {0,};
    int max;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 <<"번 사각형" << endl;
        cout << "좌표 x : ";
        cin >> temp[i][1]; //xLow 저장
        cout << "좌표 y : ";
        cin >> temp[i][2];//yLow 저장
        cout << "가로 : ";
        cin >> temp[i][3]; //height 저장
        cout << "세로 : ";
        cin >> temp[i][4]; //width 저장
    }
    Rectangle arr[5] = {Rectangle(1, temp[0][1], temp[0][2], temp[0][3], temp[0][4]), 
                        Rectangle(2, temp[1][1], temp[1][2], temp[1][3], temp[1][4]), 
                        Rectangle(3, temp[2][1], temp[2][2], temp[2][3], temp[2][4]), 
                        Rectangle(4, temp[3][1], temp[3][2], temp[3][3], temp[3][4]), 
                        Rectangle(5, temp[4][1], temp[4][2], temp[4][3], temp[4][4])};

    for (int i = 0; i < 5; i++) {
            cout << "---Rectangle Number " << i << "---" << endl;
            cout << "Position is: " << "[" <<  temp[i][1] << ", " << temp[i][2] << "]\n\n" << endl;
            cout << "Width is: " << temp[i][3] << endl;
            cout << "Height is: " << temp[i][4] <<"\n\n" << endl;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = i; j < 5; j++) {
            if (arr[i].GetArea() <= arr[j].GetArea())
                max = j;
            else
                max = i;
        }
    }

    cout << max + 1 << "번 사각형이 가장 크고, 그 넓이는 " << arr[max].GetArea() << "이다.";
    
}