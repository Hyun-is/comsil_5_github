#include <stdio.h>
#include <stdlib.h>

/* 배열 요소의 최솟값을 구하는 프로그램*/

/* int minof(const int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
    }
    return min;
}

int main (void)
{
    int *input;
    int n;
    
    printf("사람 수: ");
    scanf("%d", &n);
    input = (int *)malloc(n * sizeof(int));
    printf("사람의 키를 입력하시오. \n");
    
    for (int i = 0; i < n; i++)
    {
        printf("height[%d]", i);
        scanf("%d", &input[i]);
    }
    
    printf("최소값은 %d 입니다. \n", minof(input, n));
    free(input);
    
    return 0;
    
    
} */
