문제는 무슨 얘긴지 알겠는데 구현하기가 쉽지 않다..  
구글링 해봤는데 코드가 이해가 안된다.  
bfs로 목적지까지 가는 것은 알겠는데 solution 부분이 이해가 가지 않아서  
다시 풀어봐야할 것 같다.  

```C++
#include <string>
#include <vector>

using namespace std;
vector<int> v[200];

int bfs(int to, int now, int count){
    for(int i = 0; i < v[now].size(); i++){
        if(v[now][i] != to){
            count = bfs(now, v[now][i], count+1);
        }
    }
    return count;
}

int solution(int n, vector<vector<int>> wires) {
    int answer = -1;
    return answer;
}
```
