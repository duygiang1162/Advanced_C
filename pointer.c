#include <stdio.h>

void update(int *a,int *b) {
    *a=*a + *b;
    int sum =*a - *b;
    *b = sum;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}