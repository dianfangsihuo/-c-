#include<stdio.h>
int main()
{
	int n,m,h;
	scanf("%d", &n);
	for (m = 1;; m = m * 10)
	{
		if (n / m == 0)
			break;
	}
	h = m / 10;
	for (h=m/10;h!=0;h=h / 10)
	{
		printf("%d ", (n / h) % 10);
	}
	return 0;
}
