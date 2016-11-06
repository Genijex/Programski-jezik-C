#include<stdio.h>

void prikazi(int niz[], int n){
	int i;

	printf("NIZ:\n");
	for (i = 0; i < n; i++) {
		printf("%d ", niz[i]);
	}
	printf("\n");
}

int main() {
	int niz[] = {1, 2, 3, 4, 5, 6};
	int n = 6;

	prikazi(niz, n);
}