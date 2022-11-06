여는괄호 (,[,{ 일 때는 스택에 추가하고 닫는괄호 ),],} 일 때는 스택의 top과 짝이 맞는 괄호라면 없애주면 된다.
스택이 전부 비워지고 flag가 true라면 answer를 1증가한다.

```C++
#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    for (int i = 0; i < s.length(); i++) {
        stack<char> st;
        bool flag = false;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                flag = true;
                st.push(s[i]);
            }
            else {
                if (s[i] == ')' && st.top() == '(')
                    st.pop();
                else if (s[i] == ']' && st.top() == '[')
                    st.pop();
                else if (s[i] == '}' && st.top() == '{')
                    st.pop();
            }
        }
        if (st.empty() && flag) answer++;

        char br = s.front();
        s.erase(s.begin());
        s.push_back(br);
    }
    return answer;
}
```
