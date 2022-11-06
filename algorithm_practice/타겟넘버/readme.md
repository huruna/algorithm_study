dfs와 bfs중에 어떤걸로 구현할까 고민을 하다가 dfs가 더 간단하게 할 수 있을 것 같아서 bfs로 하였다.
스택과 재귀함수 중에선 재귀함수를 사용했다.

dfs를 구현하는 방법은 


```C++
#include <string>
#include <vector>

using namespace std;

int answer = 0;
int len, tg;
void dfs (vector<int>& v, int sum, int n){
    if(n == len){
        if(tg == sum){
            answer++;
            return;
        }
        else
            return;
    }
    dfs(v, sum + v[n], n + 1);
    dfs(v, sum - v[n], n + 1);
}


int solution(vector<int> numbers, int target) {
    len = numbers.size();
    tg = target;
    dfs(numbers, 0, 0);
    return answer;
}

```
