#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a==b && a=c){
        printf("Equilateral");
    }
    else if(a==b || b==c || c==a){
        printf("Issoceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}