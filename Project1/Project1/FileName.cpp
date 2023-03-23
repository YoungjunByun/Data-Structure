#include <iostream>
#include <vector>
using namespace std;
int A[10001] = { 0, }; //�־��� �迭�� �ִ�� ����
int main() {
    /*�迭 �����ϴ� �ڵ�*/
    int N, X;
    cout << "������� �ϴ� �迭�� ũ�� N�� X�� ������ �������� �Է��ϼ���" << endl;
    cin >> N >> X;
    if (N > 10000 | X > 10000 | N < 0 | X < 0) {
        cout << "N�� X�� �ݵ�� 10000���� �۰ų� ���� �ڿ����̾�� �մϴ�!"<<endl;
        return -1;
    }
    cout << "�迭�� �ְ��� �ϴ� ���Ҹ� ������ �������� �Է��ϼ���" << endl;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        if (A[i] > 10000 | A[i] < 0) {
            cout << "A�� ���Ҵ� �ݵ�� 10000���� �۰ų� ���� �ڿ����̾�� �մϴ�!"<<endl;
            return -1;
        }
    }
    //�迭 ���� �Ϸ�


    /*���� �����ϴ� �ڵ�*/
    for (int i = 0; i < N; i++)
    {
        int j = i;
        for (int k = i + 1; k < N; k++)
            if (A[k] < A[j])
                j = k;
        swap(A[i], A[j]);
    }
    //���� ���� �Ϸ�

    /*����Ž���ϴ� �ڵ�*/
    int left = 0;
    int right = N - 1; 
    int middle = (left + right) / 2;
    while (left <= right) {
        middle = (left + right) / 2; 
        if (X < A[middle])
            right = middle - 1;
        else if (X > A[middle])
            left = middle + 1;
        else
            break;
    }
    //����Ž�� �Ϸ�

    /*�迭 A���� X���� ū ���� ����ϴ� �ڵ�*/
    if (middle + 1 < N) { //ã�� ������ ū ���� ����ϹǷ� �迭���� +1�ϰ� �� ���� �迭�� ũ�⺸�� �۾ƾ���
        for (int i = middle + 1; i < N; i++)
            cout << A[i] << " ";
    }
    else { //�־��� �迭���� �� ū ���� ���ٸ� ������ ����� �� ���� ����
        cout << "Error";
        return -1;
    }
    //��� �Ϸ�
    
     return 0;
}