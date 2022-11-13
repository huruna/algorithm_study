처음엔 규칙을 찾아내서 풀려고 했는데 찾지 못해서 포기했다.  
알파벳 대문자 A,E,I,O,U 를 alpha에 저장해두고 현재 cur에 i번째 알파벳을 더해주면서 target과 같아질때까지 반복한다.


```C++
#include <string>
#include <vector>

using namespace std;

string alpha = "AEIOU";
int answer = 0;
int count = 0;

void dfs(string cur, string target)
{
    if(cur == target) {
        answer = count;
        return;
    }
    if(cur.length() >= 5 ) return;
    
    for(int i = 0; i < alpha.length(); i++) {
        count++;
        dfs(cur + alpha[i], target);
    }
}

int solution(string word) {
    dfs("", word);
    return answer;
}
```
