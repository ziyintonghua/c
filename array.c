#include<stdio.h>
void main(){
        int a[]={1,2,3,45,656,767,45,67,878,67};
        int lenth=sizeof(a)/sizeof(a[0]);
        for(int i=0;i<lenth;i++){
            printf("%d ",a[i]);
        }
        printf("\n");
}
