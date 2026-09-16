#include <stdio.h>

void array(){
    float chalalalala[99] = {0}, seila, divisor;
    int n;
    printf("digite quantos numeros vc ira digitar \n");
    printf("? : ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%f", &chalalalala[i]);
    }
    for (int l = 0; l < n; l++)
    {
        seila = chalalalala[l] + divisor;
    }
    divisor = seila / n;
    printf("o resultado e : %.3f \n", divisor);
}
int main(){
    array();
}