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
