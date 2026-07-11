#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int val;
    scanf("%d",&val);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]<val){
            for(int j=i;j<n-1;j++){
                a[j]=a[j+1];
            }
            n--;
            i--;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}
