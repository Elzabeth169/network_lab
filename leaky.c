#include<stdio.h>
void main(){
    int in,out,bsize,n,bucket=0;
    printf("Enter the bucket size: ");
    scanf("%d",&bsize);
    printf("Enter the no of inputs: ");
    scanf("%d",&n);
    printf("Enter the packet outgoing rate: ");
    scanf("%d",&out);
    while(n!=0){
        printf("Enter the incoming packet size: ");
        scanf("%d",&in);
        if(in<=(bsize-bucket)){
            bucket+=in;
            printf("Bucket status: %d out of %d",bucket,bsize);
        }
        else{
            printf("Dropped packet:%d",in-(bsize-bucket));
            bucket=bsize;
            printf("\nBucket status: %d out of %d",bucket,bsize);
        }
        bucket=bucket-out;
        printf("\nAfter outgoing,bucket status: %d out of %d\n",bucket,bsize);
        n--;
    }
}
