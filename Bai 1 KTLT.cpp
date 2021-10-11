#include<stdio.h>

int A(int n)
{
	if(n <= 0) return -1;
	if(n < 5) return n;
	else{
		return (A(n - 4) + A(n - 3) + A(n - 2) + A(n - 1));
	}
}

int total(int n)
{
	int total = 0;
	for(int i = 1; i <= n; i++){
		total += A(i);
	}
	return total;
}

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Tong %d phan tu cua day so la: %d", n, total(n));
	
	return 0;
}
