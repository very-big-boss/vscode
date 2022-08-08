#include<iostream>
using namespace std;
int main(void){
    int i,a[100]={0};
    for(i=0;;i++){
        cin>>a[i];
        if(cin.get()=='\n')break;
    }if(i<2)cout<<"false"<<endl;
    for(int j=2;j<=i;j++)
    for(int k=j-1;k>=0;k--)
    for(int l=k-1;l>=0;l--)
        if(a[j]+a[k]+a[l]==0)cout<<l+1<<","<<k+1<<","<<j+1<<endl;
    return 0;
}