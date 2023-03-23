#include <iostream>
#include <vector>
using namespace std;
int A[10001][10001] = {0,}; //충분히 큰 크기의 2차원 배열 설정
int B[10001][10001] = {0,}; //충분히 큰 크기의 2차원 배열 설정
int main() {
    /*배열 생성하는 코드*/
    int R1, C1, R2, C2;

    /*배열 A 생성 코드*/  
    cout << "만들고자 하는 행렬 A의 행 크기와 열 크기를 공백을 기준으로 입력하세요" << endl;
    cin >> R1 >> C1;
    if (R1 > 10 | R1 < 1 | C1 > 10 | C1 < 1) {
        cout << "반드시 행렬 A의 행 크기와 열 크기는 각각 1~10이어야 합니다." << endl;
        return -1;
    }
    cout << "행렬 A에 넣을 원소들을 공백을 기준으로 입력하세요(입력하신 행의 크기와 열의 크기를 고려하여 데이터를 입력하시오)" << endl;
    cout << "가령, 3x3 행렬의 경우 아래와 같이 입력하시오. \n2    3    4\n2    3    4\n2    3    4" << endl;
    for(int i = 0; i < R1; i++)
        for (int j = 0; j < C1; j++) {
            cin >> A[i][j];
            if (A[i][j] < -100 | A[i][j] > 100) {
                cout << "반드시 행렬의 원소는 -100~100 사이여야 합니다." << endl;
                return -1;
            }       
        }
    //배열 A 생성 완료

    /*배열 B 생성 코드*/
    cout << "만들고자 하는 행렬 B의 행 크기와 열 크기를 공백을 기준으로 입력하세요" << endl;
    cin >> R2 >> C2;
    if (R2 > 10 | R2 < 1 | C2 > 10 | C2 < 1) {
        cout << "반드시 행렬 B의 행 크기와 열 크기는 각각 1~10이어야 합니다." << endl;
        return -1;
    }
    cout << "행렬 B에 넣을 원소들을 공백을 기준으로 입력하세요(입력하신 행의 크기와 열의 크기를 고려하여 데이터를 입력하시오)" << endl;
    cout << "가령, 3x3 행렬의 경우 아래와 같이 입력하시오. \n2    3    4\n2    3    4\n2    3    4" << endl;
    for (int i = 0; i < R1; i++)
        for (int j = 0; j < C1; j++) {
            cin >> B[i][j];
            if (B[i][j] < -100 | B[i][j] > 100) {
                cout << "반드시 행렬의 원소는 -100~100 사이여야 합니다." << endl;
                return -1;
            }
        }
    cout << "\n\n\n" << endl;
    //배열 B 생성 완료
 
     if (R1 != R2 | C1 != C2) {
            cout << "계산 오류" << endl;
            return -1;
      }//A와 B의 행의 수와 열의 수가 각각 같을 때만 연산이 되도록 설정
     else {
          for (int i = 0; i < R1; i++) {
                for (int j = 0; j < C1; j++) {
                    int temp = A[i][j] + B[i][j];
                    cout << temp << "  ";
                }
                cout << " " << endl;
            }//A+B의 행렬 연산
          cout << "\n\n\n\n\n" << endl;
          for (int i = 0; i < R1; i++) {
                for (int j = 0; j < C1; j++) {
                    int temp = A[i][j] - B[i][j];
                    cout << temp<<"  ";
                }
                cout << " " << endl;
            }//A-B의 행렬 연산
    }

    return 0;
}
