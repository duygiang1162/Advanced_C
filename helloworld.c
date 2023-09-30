#include <stdio.h>
#define MAX_LEN 256

int main() {
    char ch[MAX_LEN], s[MAX_LEN], sen[MAX_LEN];

    scanf("%[^\n]%*c", ch);
    scanf("%[^\n]%*c", s);
    scanf("%[^\n]%*c", sen);

    printf("%s\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}
