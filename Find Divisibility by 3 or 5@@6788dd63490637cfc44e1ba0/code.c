#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%5==0 && n%3==0){
        printf("Diviisble by Both");
    }
    else if(n%3==0){
        printf("Diviisble by 3");
    }
    else if(n%5==0){
        printf("Diviisble by ");
    }
    else {
        printf("Not Diviisble");
    }
}