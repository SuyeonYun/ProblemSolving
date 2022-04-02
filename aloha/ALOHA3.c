#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
////별찍기-3
//
//int main() {
//	int N;
//	scanf("%d", &N);
//	for (int i = N; i >0; i--) {
//		for (int j = 0; j < i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//
////별찍기-1
//
//int main() {
//	int N;
//	scanf("%d", &N);
//	for (int i = 0; i <N; i++) {
//		for (int j = 0; j < i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//
//별찍기 -2
//int main() {
//	int N;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++) {
//		for (int j = N - i-1; j > 0; j--) {
//			printf(" ");
//		}
//		for (int k = 0; k < i+1; k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//
////별찍기 -5
//int main() {
//	int N;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++) {
//		for (int j = N - i - 1; j >0; j--) {
//			printf(" ");
//		}
//		for (int k=1; k <= i*2+1; k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//
//구간 합 구하기
//int list[100000]; int sum[100000];
//int main() {
//	int N; int M; int i; int j;
//	scanf("%d %d", &N, & M);
//	for (int k = 0; k < N; k++) {
//		scanf("%d", &list[k]);
//		sum[k+1] = sum[k]+list[k];
//	}
//	for (int l = 0; l < M; l++) {
//		scanf("%d %d", &i, &j);
//		printf("%d\n", sum[j] - sum[i-1]);
//	}
//}
//
//평균은 넘겠지
//int Exp(int score[], int N) {
//	int sum = 0; int expectation = 0;
//	for (int i = 0; i < N; i++) {
//		sum += score[i];
//	}
//	expectation = (int) sum / N;
//	return(expectation);
//}
//int score[1000];
//int main() {
//	int C; int N; 
//	scanf("%d", &C);
//	for (int i = 0; i < C; i++) {
//		scanf("%d", &N);
//		for (int j = 0; j < N; j++) {
//			scanf("%d", &score[j]);
//		}
//		int student = 0;
//		for (int k = 0; k < N; k++) {
//			if (Exp(score, N) < score[k])
//				student += 1;
//		}
//		float rate = (float)student / N * 100;
//		printf("%.3f%%\n",rate);
//	}
//
//}
//
//수열
//int list[100000]; int sum[100000];
//int main() {
//	int N; int K;
//	scanf("%d %d", &N, &K);
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &list[i]);
//	}
//	for (int j = 0; j < N-K; j++) {
//		for (int e = 0; e < K; e++) {
//				sum[j] += list[j + e];
//		}
//	}
//	int max = sum[0];
//	for (int m = 0; m < N; m++) {
//		if (max < sum[m]) {
//			max = sum[m];
//		}
//	}
//	printf("%d", max);
//}
//
//
//2중 for문 안쓴 수열 코드
//int list[100000]; int sum[100000];
//int main() {
//	int N; int K;
//	scanf("%d %d", &N, &K);
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &list[i]);
//		sum[i + 1] = sum[i] + list[i];
//	} 
//	int Max[100000] = { 0, };
//	for (int j = 0; j < N-K+1; j++) {
//		Max[j] = sum[j + K] - sum[j];
//	}
//	int max =  Max[0];
//	for (int m = 0; m < N-K+1; m++) {
//		if (max < Max[m]) {
//			max = Max[m];
//		}
//	}
//	printf("%d", max);
//}

//NBA 농구
int main() {
	int N; int team; int min, sec; int start; int end;
	int first_time = 0, second_time = 0; 
	scanf("%d", &N);
	int count = 0, before = 0; 
	for (int i = 0; i < N; i++) {
		scanf("%d %d : %d", &team, &min, &sec);
		before = count;
		if (team == 1) {
			++count;
		}
		else {
			--count;
		}
		if (before == 0){
			start = min * 60 + sec;
		}
		if (count == 0) {
			end = min * 60 + sec;
			if (before > 0) {
				first_time += end - start;
			}
			else if (before < 0) {
				second_time += end - start;
			}
		}
	}

	end = 48 * 60;
	if (count > 0) {
		first_time += end - start;
	}
	else if (count < 0) {
		second_time += end - start;
	}
	printf("%02d:%02d\n", first_time / 60, first_time % 60);
	printf("%02d:%02d\n", second_time / 60, second_time % 60);
 }
 
//구간 합 구하기5 -> 시간초과
//int arr[100][100];
//int main() {
//	int N; int M;  
//	int x1, x2, y1, y2;
//	scanf("%d %d", &N, &M);
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	while (M--) {
//		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//		int sum = 0;
//		for (int p = x1-1; p < x2; p++) {
//			for (int q = y1-1; q < y2; q++) {
//				sum += arr[p][q];
//			}
//		}
//		printf("%d\n", sum);
//	}
//}
// 
//구간 합 구하기5 --> 이 코드는 사각형으로 더하지 않음
//int sum[100][100];
//int main() {
//	int n; int m; int a;
//	int x1, x2, y1, y2;
//	scanf("%d %d", &n, &m);
//	scanf("%d", &a);
//	sum[0][0] = a;
//	for (int i = 0; i < n*n-1; i++) {
//		scanf("%d", &a);
//		sum[(i+1) / 4][(i+1) % 4] = a + sum[i / 4][i % 4];
//	}
//	while (m--) {
//		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//		if (x1 == x2 && y1 == y2) {
//			if (y1 == 1)
//				printf("%d\n", sum[x2-1][y2-1]- sum[x1-2][n-1]);
//			else
//				printf("%d\n", sum[x2 - 1][y2 - 1] - sum[x1 - 1][y1 - 2]);
//		}
//		else if (x1 == 1 && y1 == 1) {
//			printf("%d\n", sum[x2 - 1][y2 - 1]);
//		}
//		else
//			printf("%d\n", sum[x2 - 1][y2 - 1] - sum[x1 - 1][y1 - 1]);
//	}
//}
 
//구간 합 구하기5 --> 행 별로 합을 만들어서 구하기
//int row_sum[100][100];
//int main() {
//	int N; int M; int a;
//	int x1, x2, y1, y2;
//	scanf("%d %d", &N, &M);
//	for (int i = 1; i < N; i++) {
//		for (int j = 1; j < N; j++) {
//			scanf("%d", &a);
//
//		}
//	}
//
//	while (M--) {
//		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//
//	}
// 
 
 
 
 
//Maximum subarray
//관우씨 아이디어 활용 - 알고리즘(Dynamic Progrmming)
//int main() {
//	int T; int N;
//	scanf("%d", &T);
//	while (T--) {
//		scanf("%d", &N);
//		int list[1000] = { 0, };
//		int sum[1000] = { 0, };
//		for (int i = 0; i < N; i++) {
//			scanf("%d", &list[i]);
//			sum[0] = list[0];
//		}
//		for (int k = 0; k < N; k++){
//			if (sum[k] + list[k + 1] > list[k + 1]) {
//				sum[k + 1] = sum[k] + list[k + 1];
//			}
//			else {
//				sum[k + 1] = list[k + 1];
//			}
//		}
//		int max = sum[0];
//		for (int j = 0; j < N; j++) {
//			if (max < sum[j]) {
//				max = sum[j];
//			}
//		}
//		printf("%d\n", max);
//	}
// }
 
 
// maximum subarray
// // 내 아이디어 - 막노동(Brutal force) 

//int main() {
//	int T; int N;
//	scanf("%d", &T);
//	while(T--) {
//		scanf("%d", &N);
//		int list[1000] = { 0, };
//		int sum[1000] = { 0, };
//		int a;
//		for (int j = 0; j < N; j++) {
//			scanf("%d", &list[j]);
//			sum[j + 1] = list[j] + sum[j];
//		}
//		int max = sum[1];
//		for (int k = 1; k <= N; k++) {
//			for (int m = 0; m < N - k + 1; m++) {
//				a = sum[m + k] - sum[m];
//				if (a > max)
//					max = a;
//			}
//		}
//		printf("%d\n", max);
//	}
//}