#include <iostream> 
#include "rectangle.h"

using namespace std;

/*
������ ���α׷��� �����Ͽ� ������ ������ �����ϴ� ���α׷��� �����Ͻÿ�.
1. �簢�� ��ü�� ������ Rectangle ��ü �迭 5ĭ�� ����
2. x, y ��ǥ�� ����, ���� ���̸� �Է� �޾Ƽ� �Է¹��� ������ �簢�� ��ü ����
3. �簢�� ��ü�� ������ �� �����ϴ� ������ ���� �簢���� ��ȣ�� �Է�(hint : �Ķ���͸� �߰��ؾ� ��)
4. ������ �簢�� ��ü 5�� �߿��� ���� ���̰� ū �簢���� ã�Ƽ� ��� -> "0��° �簢���� ���� ũ��, �� ���̴� 0�̴�."
*/

/* �߰��� �����غ� �� �ִ� ����
1. ���� ��ġ�� �ʴ� �簢���� �����ϴ� ���
2. �� ���� �簢���� ��ġ�� �κ��� ���̸� ���ϴ� ���
2. ��ü�� �����ͷ� �����ϰ�, �ı��ϴ� ���
*/

int main() {
    int temp[5][5] = {0,};
    int max;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 <<"�� �簢��" << endl;
        cout << "��ǥ x : ";
        cin >> temp[i][1]; //xLow ����
        cout << "��ǥ y : ";
        cin >> temp[i][2];//yLow ����
        cout << "���� : ";
        cin >> temp[i][3]; //height ����
        cout << "���� : ";
        cin >> temp[i][4]; //width ����
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

    cout << max + 1 << "�� �簢���� ���� ũ��, �� ���̴� " << arr[max].GetArea() << "�̴�.";
    
}