#include <stdio.h>
int prime(int a);

int main() {

    int x;
    int n;
    printf("Enter a positive integer: \n");
    scanf("%d", &n);
    x=prime(n);
    //printf("%d",x);
     if (x == 1) {
        printf("FALSE");
    }
    else {
        printf("TRUE");
    }

       return 0;
}




int prime(int a){
    int i, flag = 0;
    for (i = 2; i <= a / 2; ++i) {

        // condition for non-prime
        if (a % i == 0) {
            flag = 1;
            break;
        }
    }
   // printf("%d",flag);
    return flag;
}
