#include<stdio.h>
int x,a[100000]={0},sum=0;
void sss(int o){
    if(o<=x-1){
        int z=a[o];
        if(z>sum)sum=z;
        for(int i=o+1;i<=x-1;i++){
            z+=a[i];
            if(z>sum)sum=z;
        }
        sss(o+1);
    }
    else{
        printf("%d\n",sum);
        return;
    }
}
int main(void){
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
    sss(0);
    return 0;
}