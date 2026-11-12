#include <stdio.h>

int digitSum(int);

int main(int argc, char const *argv[])
{
    printf("%d", digitSum(13452));
    return 0;
}

int digitSum(int num) {
    int sum = 0;
    
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    
    return sum;
}