#include <iostream>

using namespace std;

int gcd(long long width, long long height){
    int small, large;
    if(width > height) { 
        large = width; 
        small = height;
    } else{
        large = height;
        small = width;
    }
    int tmp = large % small;
    
    while(tmp > 0){
        large = small;
        small = tmp;
        tmp = large % small;
    }
    return small;
}

long long solution(int w, int h) {
    long long answer = 0;
    answer = (long long)w * (long long)h - (w + h - gcd(w, h));
    return answer;
}
