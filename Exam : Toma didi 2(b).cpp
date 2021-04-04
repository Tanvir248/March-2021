#include<stdio.h>
int main(){
    int i, n, rem, inc =0;
    scanf("%d", &n);
    for(i =1; i<=n; i++){
        printf("When i = %d", i);
        rem = i/4;
        printf(". This time reminder = %d ", rem);
        if(rem>=4){
        inc++;
        printf("And Inc++ is %d", inc);
        }
        else{
        inc--;
        printf("And Inc-- is %d. ", inc);
        } 
    }
    printf("Final Value = %d \n", inc);
    return 0;
}