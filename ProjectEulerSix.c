#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int *arr,i,j,sum1=0,sum2=0,diff=0;
    arr=(int*)malloc(sizeof(int)*200);
    for(i=0;i<100;i=i+1){
        arr[i]=i+1;
    }
    for(j=0;j<i;j=j+1){
        sum1=sum1+arr[j];
    }
    sum1=pow(sum1,2);
    
    for(j=0;j<i;j=j+1){
        arr[j]=pow(arr[j],2);
    }
    for(j=0;j<i;j=j+1){
        sum2=sum2+arr[j];
    }
    

    diff=sum1-sum2;

    printf("%d ", diff);

return 0;
}