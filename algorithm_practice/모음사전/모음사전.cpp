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
