#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a=b=c){
        printf("Equilateral");
    }
    else if(a=b!=c){
        printf("Issoceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}