#include<stdio.h>
#include<string.h>
struct product
{
    int productId[5];
    char productName[100];
    int price[5];
    double productWeight[5];
};

int main(){
  product obj[3];
  int i,j;
  for(i =0; i<3; i++){
      printf("Product ID :");
      scanf("%d", &obj[i].productId[i]);
        printf("Product Name:");
      scanf("%c", obj[i].productName[i]);
        printf("Product Price:");
      scanf("%d", &obj[i].price[i]);
      printf("Product Weight : ");
      scanf("%lf", &obj[i].productWeight[i]);
  }
  printf("Enter your Product id: ");
  int n;
  scanf("%d", &n);
  for(j=0; j<3; j++){
  if(n == obj[j].productId[i]){
      printf("Product ID :");
      printf("%d\n", obj[j].productId[i]);
       printf("Product Name:");
      printf("%c\n", obj[j].productName[i]);
      printf("Product Price:");
      printf("%d\n", obj[j].price[i]);
      printf("Product Weight : ");
      printf("%lf\n", obj[j].productWeight[i]);
  }
  }
}