#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if(c=='R'){
        printf("Stop");
    }
    else if(c=='G'){
        printf("Go");
    }
    else if(c=='Y'){
        printf("Yellow");
    }
    else{
        printf("Invalid input");
    }
}