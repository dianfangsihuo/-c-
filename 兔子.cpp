
#include <stdio.h>

long calculateRabbits(long month) {
    if (month == 1 || month == 2) {
        return 1; // ��һ���º͵ڶ����£���ֻ��1������
    }
    long previous = 1;
    long current = 1;
    long next;
    for (long i = 3; i <= month; i++) {
        next = previous + current;
        previous = current;
        current = next;
    }
    return current;
}

int main() {
    long month;
    scanf("%ld", &month);
    if (month < 1 || month > 44) {
        printf("�����������1��44֮�䡣\n");
        return 1;
    }
    printf("%d\n", calculateRabbits(month));
    return 0;
}
