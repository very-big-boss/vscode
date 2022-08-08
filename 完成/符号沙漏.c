#include<stdio.h>
#include<math.h>
char a;int x;int v;
void kkk(int n){
    for(int i=0;i<(v-n);i++){
        printf(" ");
    }
    for(int i=0;i<(2*n-1);i++){
        printf("%c",a);
    }printf("\n");
    if(n!=1){
       kkk(n-1);
       for(int i=0;i<(v-n);i++){
            printf(" ");
        }
        for(int i=0;i<(2*n-1);i++){
            printf("%c",a);
        }printf("\n"); 
    }
    
}
int main(void){
    scanf("%d %c",&x,&a);
    int n=pow((x+1)/2,0.5);v=n;
    kkk(n);
    printf("%d\n",x-(2*n*n-1));
    return 0;
}