#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int r[100];
void countingSort(int n,int arr[100]) {int i;
     for(int i=0;i<n;i++){
         int n;
        n=arr[i];
        
        r[n]=r[n]+1;;
        
    }
    for(i=0;i<100;i++){
     printf("%d ",r[i]);
 }}
int main()
{     int i,n;
      int arr[1000000];
      scanf("%d",&n);
 
 for(i=0;i<n;i++){
     scanf("%d",&arr[i]);
 }
 countingSort(n,arr);
 return 0;
    
    
