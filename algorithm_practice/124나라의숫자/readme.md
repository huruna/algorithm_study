1부터 21까지 1,2,4로 변환하다보니 규칙이 보였다. 3개씩 묶어서 반복이 되지만 0,1,2를 사용하는 3진법이 아니라 0대신에 1,2,4를 사용한다고 생각하였다.
그래서 3으로 나누었을때 나누어떨어지면 answer="4"+answer;를 하고 몫은 -1을 한다.
나머지가 1이면 +1, 나머지가 2이면 +2를 한다.

1) 만약 처음 n이 15라면 15%3==0이므로 answer="4", n=4가 된다.
2) n%3==1이므로 answer="1"+"4", n=1이 된다.
3) n%3==1이므로 answer="1"+"14",n=0이 돼서 while문이 멈추고 answer="114"를 반환한다.

```C++
#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = ""; 
    while (n > 0) {
        if (n % 3 == 0) {
            answer = "4" + answer;
            n = n / 3 - 1;
        }
        else if (n % 3 == 1) {
            answer = "1" + answer;
            n = n / 3;
        }
        else {
            answer = "2" + answer;
            n = n / 3;
        }
    }
    return answer;
}
```
