#include<stdio.h>
int main()
{
	long a, b,r;
	scanf("%lld%lld", &a, &b);
	int bn = b; int an = a;
	while (bn !=0)
	{
		r = an % bn;
		an = bn;
		bn = r;
	}
	int min;
	min = (a * b) / an;
	printf("%lld %lld", an, min);
	return 0;
}