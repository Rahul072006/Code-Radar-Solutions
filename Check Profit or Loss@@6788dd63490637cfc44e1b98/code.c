#include<stdio.h>
int main(){
    int cp;
    int sp;
    scanf("%d",&cp);
    scanf("%d",&sp);
    if(cp>sp){
        printf("Loss");
    }
    else if(cp<sp){
        printf("Profit");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0 ;
}