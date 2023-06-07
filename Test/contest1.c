#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_N 100000

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[MAX_N + 1];
        int n;
        scanf("%s %d", s, &n);

        int len = strlen(s);
        int i;
        for (i = 0; i < len; ++i) {
            if (s[i] == '+') {
                n -= (1 << (len - i - 1));
            } else if (s[i] == '-') {
                n += (1 << (len - i - 1));
            }
        }

        if (n % 4 == 0 && n>0) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}