그리디 알고리즘 문제가 너무 어려운 것 같다... 이틀이나 걸리다니..  
풀고 나서 코드는 쉬워 보이는데 생각하기까지 시간이 너무 오래 걸린다.  
접해보지 못한 문제라 그런 것 같다.  

for문으로 앞의 숫자와 뒤의 숫자를 비교하여 앞의 숫자가 더 작을 경우 number에서 삭제하고 count를 1 증가시켰다.  
앞의 숫자가 뒤의 숫자보다 작은게 없는 경우(ex: "4321")를 고려하지 않아서 테스트케이스 12번에서 오류가 발생하였다.  
count가 k와 다른 경우(숫자를 덜 삭제한 경우)에는 남은 개수만큼 삭제한다.

```C++  
#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) 
{
    int count = 0;
    for(int i = 1; i <= k; i++) {      
        for(int j = 0; j < number.size() - 1; j++) {
           if(number[j] < number[j + 1]) {
                number.erase(j, 1);
                count++;
                break;
           }
        }   
    }
    if(count != k) {
        number.erase(number.size() - (k - count), k - count);
    }
    return number;
}
```
