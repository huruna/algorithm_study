A로만 이루어진 temp 문자열을 만든다.
??를 찾는 알파벳이라고 할 때, A->?? 로 가는 것이 빠른지 Z->?? 로 가는 것이 빠른지 비교한다.

temp와 name이 같아질 때까지 반복한다.

나와있는 예제들로 답이 나오나 확인해봤는데 뭔가 방법이 틀린 것 같다.
구글링해서 코드 여러개를 봐도 이해가 안된다.......

```C++
#include <string>
#include <vector>

using namespace std;

int solution(string name) {
    int answer = 0, i = 0;
    int length = name.length();
    string temp(length, 'A');
    
    while(true) {
        answer += min(name[i] - 'A', 'Z' + 1 - name[i]);
        temp[i] = name[i];
        
        if(temp == name) break;
        
         // 1. 왼쪽 이동 횟수
        int left_index = i;
        int left_cnt = 0;
        
        while(temp[left_index] == name[left_index]) {
            left_index--;
            left_cnt++;
            
            // 범위를 벗어나는 경우
            if(left_index == -1) {
                left_index = length - 1;
            }
        }
        
        // 2. 오른쪽 이동 횟수
        int right_index = i;
        int right_cnt = 0;
        
        while(temp[right_index] == name[right_index]) {
            right_index++;
            right_cnt++;
            
            // 범위를 벗어나는 경우
            if(right_index == length) {
                right_index = 0;
            }      
        }
    
        // 3. 왼쪽, 오른쪽 중 횟수가 최소인 방향을 선택
        if(left_cnt < right_cnt) {
            answer += left_cnt;
            i = left_index;
        }
        else {// 오른쪽이 최소일경우
            answer += right_cnt;
            i = right_index;
        }
    }
    return answer;
}
```
