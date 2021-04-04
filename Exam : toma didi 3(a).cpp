#include<stdio.h>
int main(){
    int M, N, i, sum=0;
    scanf("%d%d",&M, &N);
    for ( i = M; i < N; i++)
    {
        if(i%5 !=0){
            sum +=i;
        }
    }
    printf("Sum is : %d\n", sum);
    return 0;
}