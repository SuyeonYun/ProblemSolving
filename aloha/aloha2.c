//a,b�� 0,0 �� �Է¹ޱ� ������ ����ؼ� a+b ����ϱ� 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a; int b;
	while (1) {
		scanf_s("%d %d", &a, &b);
		if (a == 0 && b == 0)
			break;
		else
			printf("%d + %d = %d", a, b, a+b);
	}
	return 0;
}

//���丮�� ���
#include <stdio.h>

int main() {
	int a; int i; int b = 1;
	scanf_s("%d", & a);
	for (i = a; i > 1; i--) {
		b *= i;
	}
printf("%d", b);
}

//�Է¹��� ������ ������ ����ϱ�
#include <stdio.h>
int main() {
	int N;
	scanf_s("%d", &N);
	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", N, i, N * i);
	}return 0;
}

//�迭�� �������� null �̹Ƿ� �׻� �� ĭ �� ������ ��!
#include <stdio.h>
 
int main() {
	char str1[6] = { 'a','l','o','h','a','\n'};
	char str2[6] = { 'a','l','o','h','a' };
	char str3[5] = { 'a','l','o','h','a' };
	printf("%s", str3);
}

//Ȧ���� ����鿡�� ���� �Ϳ����� �������� �ް� ��� ����ϱ�
#include <stdio.h>
 
int main() {
	int num; 
	scanf_s("%d", &num);
	int N[101] = { 0, };
	int count_0 = 0; 
	int count_1 = 0;
	for (int i = 0; i<num; i++) {
		scanf_s("%d", &N[i]);
		if (N[i] == 0)
			count_0 += 1;
		else if (N[i] == 1)
			count_1 += 1;
	}
	if (count_0 > count_1)
		printf("Junhee is not cute!");
	else if (count_0 < count_1)
		printf("Junhee is cute!");
}

//30�� �� ���� ���� ���� 2�� ã��
#include<stdio.h>
 
int main() {
	int num[31]; 
	int student; 
	int i;
	for (i = 0; i < 28; i++) {
		scanf_s("%d", &student);
		num[student] = 1;
	}
	for (int j = 0; j < 31; j++) {
		if (num[j] != 1)
			printf("%d\n", j);
	}
	return 0;
}

//�ﰢ�� ���� ã��
#include <stdio.h>

int main() {
	int a; int b; int c;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	if (a == 60 && b == 60 && c == 60)
		printf("Equilateral");
	else if (a + b + c == 180) {
		if (a == b || b == c || c == a)
			printf("Isosceles");
		else
			printf("Scalene");
	}
	else
		printf("Error");
}

//�ִ������� �ּҰ����
#include <stdio.h>

int main() {
	int a; int b; int max; int min;
	scanf_s("%d %d", &a, &b);
	if (a < b) {
		for (int i=1; i < a+1; i++) {
			if (a % i == 0 && b % i == 0) {
				max = i;
			}
		}
	}
	else {
		for (int j=1; j < a+1; j++) {
			if (a % j == 0 && b % j == 0) {
				max = j;
			}
		}
	}

	min = (a / max) * (b / max) * max;
	printf("%d\n", max);
	printf("%d\n", min);

}

//���� ���� ���ڰ� � �ִ��� ���

#include <stdio.h>
int arr[10];
int count(int num) {
	if (num < 10) {
		arr[num]++;
	}
	else {
		arr[num % 10]++;
		return count(num / 10); //����Լ� Ȱ��
	}
}
int main() {
	int A; int B; int C;
	scanf_s("%d", &A);
	scanf_s("%d", &B);
	scanf_s("%d", &C);
	int number = A * B * C;
	count(number);

	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
}

//��������
#include <stdio.h>

int N; int i; int max; int j;
int Pi[1000]; int list[1000];

int main() {
	scanf("%d", &N);

	for (int m = 0; m < N ; m++) {
		scanf("%d", &Pi[m]);
	}
	int k = Pi[0];
	for (i = 1; i < N ; i++) {
		if (Pi[i - 1] < Pi[i]) {
			if (i == N - 1) {
				list[j++] = Pi[N - 1] - k;
				break;
			}
			continue;
		}
		else {
			list[j++] = Pi[i - 1] - k;
			k = Pi[i];
		}
	}
	for (int n = 0; n < 1000; n++) {
		if (max < list[n]) {
			max = list[n];
		}
	}
	printf("%d", max);
}	