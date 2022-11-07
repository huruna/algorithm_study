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
    // 숫자를 덜 삭제한 경우에 뒤에서 남은 개수만큼 삭제한다.
    if(count != k) {
        number.erase(number.size() - (k - count), k - count);
    }
    return number;
}
