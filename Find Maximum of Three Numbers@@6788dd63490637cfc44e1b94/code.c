#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    scanf("%d",a);
    scanf("%d",b);
    scanf("%d",c);
    if(a>b &&a>c){
        printf("%d",a);
    }
    else if(b>c && b>a){
        printf("%d",b);
    }else(c>a && c>b){
        printf("%d",c);
    }
    return 0;
}