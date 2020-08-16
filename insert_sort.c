#include<stdio.h>

void insert_sort(int *a,int n){
  
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
          int temp=a[i];
          int j=i-1;
          while(j>=0 && temp<a[j]){
            a[j+1]=a[j];
            j--;
            
          }
          a[j+1]=temp;
        }
    }

}

int main(){
    int a[5]={2,3,4,5,1};
    int i=0;
    for(i=0;i<5;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
    printf("进行冒泡排序:\n");
    bubble_sort(a,5);
    for(i=0;i<5;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }

  return 0;
}
