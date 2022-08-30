#include<stdio.h>
#include<math.h>
_Bool ab(int n){
    if(n==1)return 0;
    for(int i=2;i<=sqrt(n);i++)if(n%i==0)return 0;
    return 1;
}
int main(void){
    for(int i=1;i<=100;i++)if(ab(i)==1)printf("%d\n",i);
    return 0;
}