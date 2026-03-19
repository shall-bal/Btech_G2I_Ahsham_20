#include <stdio.h>
int main() {
    int num, count = 0, n;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num == 0) {
        count = 1;
    } else {
        n = num;
        if (n < 0) 
            n = -n;
        while (n != 0) {
            n = n / 10;
            count++;
        }
    }
    printf("Number of digits in %d = %d\n", num, count);
    return 0;
}
