#include <iostream>
#include <vector>
using namespace std;
int A[10001] = { 0, }; //주어진 배열의 최대로 설정
int main() {
    /*배열 생성하는 코드*/
    int N, X;
    cout << "만들고자 하는 배열의 크기 N과 X를 공백을 기준으로 입력하세요" << endl;
    cin >> N >> X;
    if (N > 10000 | X > 10000 | N < 0 | X < 0) {
        cout << "N과 X는 반드시 10000보다 작거나 같은 자연수이어야 합니다!"<<endl;
        return -1;
    }
    cout << "배열에 넣고자 하는 원소를 공백을 기준으로 입력하세요" << endl;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        if (A[i] > 10000 | A[i] < 0) {
            cout << "A의 원소는 반드시 10000보다 작거나 같은 자연수이어야 합니다!"<<endl;
            return -1;
        }
    }
    //배열 생성 완료


    /*선택 정렬하는 코드*/
    for (int i = 0; i < N; i++)
    {
        int j = i;
        for (int k = i + 1; k < N; k++)
            if (A[k] < A[j])
                j = k;
        swap(A[i], A[j]);
    }
    //선택 정렬 완료

    /*이진탐색하는 코드*/
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
    //이진탐색 완료

    /*배열 A에서 X보다 큰 수를 출력하는 코드*/
    if (middle + 1 < N) { //찾은 값보다 큰 값만 출력하므로 배열에서 +1하고 그 값이 배열의 크기보다 작아야함
        for (int i = middle + 1; i < N; i++)
            cout << A[i] << " ";
    }
    else { //주어진 배열에서 더 큰 값이 없다면 에러를 출력한 후 강제 종료
        cout << "Error";
        return -1;
    }
    //출력 완료
    
     return 0;
}