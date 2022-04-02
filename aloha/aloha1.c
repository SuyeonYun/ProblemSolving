#include <stdio.h>


int main(void)
{
		int a, b, c;
	
		printf("a = ");
		scanf("%d", &a);
		printf("b =  ");
		scanf( "%d", &b);
		printf("c = ");
		scanf("%d", &c);
	
		if (a == 2) {
			if (b % 3 == 0) {
				if (c != 5) {
					printf("%d %d %d", a, b, c);
				}
				else {
					printf("0");
				}
			}
			else {
				printf("1");
			}
		}
		else {
			printf("2");
		}
		return 0;
	}

