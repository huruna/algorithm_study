dfs와 bfs중에 어떤걸로 구현할까 고민을 하다가 dfs가 더 간단하게 할 수 있을 것 같아서 fs로 하였다.

tg와 answer를 전역변수로 선언한다.
numbers 벡터의 인덱스값(n)과 numbers.size()가 같으면 numbers의 모든 숫자를 사용했다는 뜻이므로
return한다.
이때 numbers 벡터에 있는 모든 숫자를 다 사용했다면(total==tg) answer에 1을 더한다.
numbers 벡터의 다음 숫자를 더하거나 빼는 경우로 나누어서 호출한다.


```C++
#include <string>
#include <vector>

using namespace std;

int answer = 0;
int tg = 0;

void dfs (vector<int> numbers, int total, int n){
    if(n == numbers.size()){
        if(total == tg){
            answer++;
        }
        return;
    }
    dfs(numbers, total + numbers[n], n + 1);
    dfs(numbers, total - numbers[n], n + 1);
}

int solution(vector<int> numbers, int target) {
    tg = target;
    dfs(numbers, 0, 0);
    return answer;
}
```
