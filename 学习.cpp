//题目描述
//Z同学为了实现暑假去云南旅游的梦想，决定以后每天只消费1元，每花k元就可以再得到1元，一开始Z同学有M元，问最多可以坚持多少天。
//
//输入
//输入2个整数M, k，(2 <= k <= M <= 1000)。
//
//输出
//输出一个整数，表示M元可以消费的天数。
//
//样例输入 Copy
//4 3
//样例输出 Copy
//5
#include<stdio.h>
int main()
{
	int M, K,D=0;
	scanf("%d%d", &M, &K);
	int Z = M;
	int xiaofei = 0;
	while (Z > 0)
	{
		Z--;
		D++;
		xiaofei++;
		if (xiaofei==K)
		{
			Z++;
			xiaofei = 0;
		}
	}
	printf("%d", D);
	return 0;
}