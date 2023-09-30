#include <stdio.h>

void update_value(int *a, int *b)
{
    int temp=*a;
    *a=*a+*b;
    if(temp>*b)
        *b=temp-*b;
    else
        *b=*b-temp;
}
int main()
{
    int a,b;
    
    scanf("%d %d", &a, &b);
    update_value(&a,&b);
    printf("%d\n%d",a,b);

    return 0;
}