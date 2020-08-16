#include<stdio.h>

void bubble_sort(int *a,int n){
  int i,j;
  int temp;
  for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        
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


}

