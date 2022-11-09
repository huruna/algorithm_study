#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
int main() {
	int n;
	int answer = 0;
	int* cup = (int*)malloc(sizeof(int) * 2000000);
	scanf(" %d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d ", &cup[i - 1]);
	}
	int j;
	int cnt = -1;
	int max = cup[0];
	int max_idx = 0;
	while (cnt != n - 1) {
		for (j = 0; j < n; j++) {
			if (max < cup[j]) {
				max = cup[j];
				max_idx = j;
			}
		}
		for (j = 0; j < n; j++) {
			if (j != max_idx)
				cup[j] += 1;
		}
		answer++;
		cnt = 0;
		for (j = 0; j < n - 1; j++) {
			if (cup[j] == cup[j + 1])
				cnt++;
		}
	}
	free(cup);
	printf("%d", answer);
	return answer;
}
