#include<stdio.h>

int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n%2==0){
        printf("Even");
    }
    if(n%2!=0){
        printf("Odd ");
    }
    
    return 0;
}
