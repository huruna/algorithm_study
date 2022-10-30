처음 문제를 풀었을 때는 시간이 초과되었다. 옆에 써있는 문제 설명을 읽고 애니메이션을 보고 만들었는데 왜 그런가했더니
제한사항을 보니 n이 1이상 10^7 이하였다.
그래서 left~right 범위만 뽑아서 배열에 저장하는 것이 좋다고 판단했다.

배열의 크기 cnt는 right-left+1이다.
4행 4열 크기의 배열과 1차원 배열을 만들어서 2번째 애니메이션을 예로 만들었다.
(row, col)에 들어갈 숫자가 max(row, col)+1이라는 것을 알아냈다
row=i/n, col=i%n 이고 row가 col보다 크다면 answer배열에 row+1을, row가 col과 같거나 작다면 col+1을 넣는다.
right까지 이를 반복하고 끝나면 answer를 반환한다.

이런식으로 left~right만 추출하여 answer 배열에 저장하니 시간초과는 일어나지 않았다.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n, long long left, long long right) {
    int cnt = right - left + 1;
    int* answer = (int*)malloc(sizeof(int)*cnt);
    long long row = 0, col = 0;
    
    for(long long int i = left; i <= right; i++) {
        row = i / n;
        col = i % n;
        if(row > col) {
            answer[i - left] = row + 1;
        }
        else {
            answer[i - left] = col + 1;
        }
    }
    return answer;
}
