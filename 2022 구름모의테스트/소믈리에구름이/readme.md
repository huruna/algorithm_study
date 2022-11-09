과도한 for문 사용으로  
시간 초과가 발생할 수도 있을 것 같다...

+) 추가로 다시 만들었음
![image](https://user-images.githubusercontent.com/91876894/200901797-65c607f0-b11a-4291-9054-456437d3db19.png)

위의 식을 이용하여
```C
int main()
{
   int n;
   int answer = 0;
   int curr_wine = 0;
   int* cup = (int*)malloc(sizeof(int) * 2000000);
   scanf("%d", &n);

   for (int i = 1; i <= n; i++) {
      scanf(" %d", &cup[i - 1]);
      curr_wine += cup[i - 1];
   }
   answer = curr_wine - n;  
   
   free(cup);
   return answer;
}
```
