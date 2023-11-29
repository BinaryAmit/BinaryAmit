#include<stdio.h>

int main(){
    int arr[] = {4,5,6,65,4,26,64,6,56,};
    printf("%d \n",arr[3]);         //65
    printf("%d \n",arr[0]);         //4
    printf("%d \n",&arr[0]);        //2686732
    printf("%d \n",arr);            //2686732
    printf("%d \n",&arr[1]);        //2686736 (add by size of int or datatype we use)
    printf("%d \n",arr+1);          //2686736
    printf("%d \n",&arr[2]);        //2686740
    printf("%d \n\n\n\n\n",arr+2);  //2686740



    printf("%d \n",*(&arr[0]));        //4
    printf("%d \n",arr[0]);            //4
    printf("%d \n",*(arr));            //4
    printf("%d \n",*(&arr[1]));        //5 
    printf("%d \n",*(arr+1));          //5
    
    
    
     return 0;
}
