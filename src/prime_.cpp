#include <cstdio>

int main(){
  int n,i;
  int flag=0;
 
  printf("整数を入力してください");
  scanf("%d",&n);
 
  for (i=2;i<n;i++){
    if (n%i==0){
      flag=1;
    }
  }
  if (flag==1){
    printf("%dは素数ではありません\n",n);
  }
  if (flag==0){
    printf("%dは素数です\n",n);
  }
}