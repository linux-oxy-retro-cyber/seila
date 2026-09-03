#include <stdio.h>
// criar main

int main() {
    printf("digite um numero para ver seu antecessor e sucessor : ");
    int n, at, ss;
    scanf("%d", &n);
    at = n - 1;
    ss= n + 1;
    printf(" o antecessor e : %d eo sucessor e : %d\n", at, ss);
return 0;
}