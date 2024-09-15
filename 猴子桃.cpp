#include<stdio.h>
#include<math.h>
int main()
{
	int n, t = 1;
	scanf("%d", &n);
	for (int i = 1; i < n; i++)
	{
		t = (t + 1) * 2;
	}
	printf("%d", t);
	return 0;
}