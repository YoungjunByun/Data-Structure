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
    Rectangle r[5];
    int InputX, InputY, InputWidth, InputHeight;
     for (int i = 0; i < 5; i++)// ����ڰ� �������� �Է��ϴ� �Ҷ�
     {
         cout << i+1 << "�� �簢��" << endl;
         cout << "��ǥ x: "; cin >> InputX;
         cout << "��ǥ Y: "; cin >> InputY;
         cout << "���� : "; cin >> InputWidth;
         cout << "���� : "; cin >> InputHeight;
         r[i].InputRectangle(InputX, InputY, InputWidth, InputHeight, i);
         cout << endl;
     }
    /*Rectangle r[5] = {Rectangle(1,1,3,3,1) ,Rectangle(5,7,12,4,2) ,
        Rectangle(5,6,3,10,3) ,Rectangle(4,9,12,44,4) ,Rectangle(3,3,8,7,5) };// �׳� �ϰ��� �ް� �׽�Ʈ�� ��
        */
    int MaxSize = 0, MaxNum = 0;//�ְ� ũ��� �ְ� ��ȣ�� �����ϴ� ����
    for (int i = 0; i < 5; i++) {
        cout << "---Rectangle Number " << r[i].GetNum() + 1 << "---" << endl;
        cout << r[i] << endl;
        if (MaxSize < r[i].GetArea()) { //���� ������� ū �������� ��
            MaxSize = r[i].GetArea(); //����� �����Ѵ�
            MaxNum = r[i].GetNum();//��ȣ�� �����Ѵ�
        }
    }

    cout << MaxNum + 1 << "�� �簢���� ���� ũ��, �� ���̴� " << MaxSize << "�̴�" << endl;
    ;
    /*  if (r.GetArea() > s->GetArea())
          cout << "r";
      else
          cout << "s";
      cout << "has the greater area" << endl;*/
}