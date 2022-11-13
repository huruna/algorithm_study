W=8, H=12 인 테스트를 봤을 때, 빨간 네모의 가로 길이는 8/4=2, 세로 길이는 12/4=3 임을 알 수 있다.  
여기서 4는 W와 H의 최대공약수이다.  
잘라진 네모의 개수는 (W/최대공약수 - H/최대공약수 - 1) * 최대공약수 즉 (W-H-최대공약수)이다.  
테스트 케이스가 하나밖에 없어서 다른 사람들이 올려놓은 테스트 케이스를 보고 시험해 볼 수 있었다.  
마지막엔 테스트 케이스 12~17이 계속 틀려서 나같은 사람들이 질문한 것을 봤는데  
자료형을 고려하지 않아서였다...  

<img src = "https://user-images.githubusercontent.com/91876894/201524801-4427101e-45b3-41fa-9621-0296d9d432be.png" width="30%" height="30%">

```C++
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
```
