#include <stdio.h>

int main(){
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a>b ){
        printf("%d",a);
    }
     if(b>a ){
        printf("%d",b);
    }
    if(a=b){
        printf("%d",0);
    }
    

    return 0;
}