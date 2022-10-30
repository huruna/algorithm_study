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
