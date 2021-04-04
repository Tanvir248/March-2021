#include<stdio.h>
int main(){
        int arr[] ={5, 1 , 48, 22, 44, 12, 3, 9};
        int arraySize =8;
        int i, j, mini =arr[7], maxi =arr[0];
        for ( i = 1; i < arraySize-1; i++)
        {
                if(mini>arr[i]){
                        mini = arr[i];
                }
        }
         printf("Minimum value is : %d\n", mini);
        for ( j = 1; j < arraySize-1; j++)
        {
                if(maxi<arr[j]){
                        maxi = arr[j];
                }
        }
        printf("Maximun Value is : %d\n", maxi);
       return 0;
}