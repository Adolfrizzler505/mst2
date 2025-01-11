#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     int n, toSearch;
    scanf("%d", &n);
    
    int arr[n];
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &toSearch);
    
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == toSearch)
           {
               printf("%d", i);
               
              return 0;
           }
    }
    
   printf("-1\n");

   return 0;
 
}