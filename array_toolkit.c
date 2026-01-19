#include <stdio.h>
#include "array_toolkit.h" // Links to the header

//Helper function implementation
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int insert_arr(int arr[],int *n){
    if (n == NULL) 
    return 0;
    if (*n >= CAPACITY) {
        printf("Array is full. Cannot insert.\n");
        return 0;
    }

    int element, pos;

    printf("Enter the element you want to insert: ");
    scanf("%d",&element);

    printf("Enter the position you want to enter the element (0 to %d) at:  ",*n);
    scanf("%d",&pos);

    if(pos<0 || pos>*n){
        printf("Invalid position!!\n");
        return 0;
    }
    else{
        for(int i=*n;i>pos;i--){
            arr[i]=arr[i-1];
        }
        arr[pos]=element;
        (*n)++;
        return 1;
    }     
}

int delete_arr(int arr[],int *n){
    if(*n==0){
        printf("Underflow! No remaining elements to delete!\n");
        return 0;
    }
    int pos;
    printf("Enter the position you want to delete the element (0 to %d) at:  ",*n-1);
    scanf("%d",&pos);

    if(pos<0 || pos>=*n){
        printf("Invalid position!!\n");
        return 0;
    }
    else{
        for(int i=pos;i<*n-1;i++){
            arr[i]=arr[i+1];
        }
        (*n)--;
        return 1;
    }
}

int linsearch_arr(int arr[],int n){
    int ele,pos;
    printf("Enter the element you want to find: ");
    scanf("%d",&ele);

    for(int i=0;i<n;i++){
        if (arr[i] == ele) {
            printf("\nThe given element was found at index %d\n", i);
            return i;
        }
    }
    printf("\nThe given element was not found in the array.\n");
    return -1;
}

void minmax_arr(int arr[],int n){
    if (n == 0) {
    printf("Array is empty! Cannot find min/max.\n");
    return;
    }
    int min=arr[0], max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
        max=arr[i];
        }
        else if(arr[i]<min){
            min=arr[i];
        }

    }
    printf("\nThe Minimum element value in the current array is: %d\n",min);
    printf("\nThe Maximum element value in the current array is: %d\n",max);

}

void rev_arr(int arr[],int n){
    if (n <= 1){
        printf("Not enough elements to reverse!\n");
        return; 
    }
    int temp,start=0,end=n-1;

    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    printf("The reversed array is: \n");
    for(int i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
}

void bubblesort_arr(int arr[],int n){
    if (n <= 1){
        printf("Not enough elements to sort!\n");
        return; 
    }

    int temp;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("The bubble sorted array is: ");
    for(int i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
}

void rotateleft_arr(int arr[],int n){
    if (n <= 1){ 
        printf("Not enough elements to rotate!\n");
        return; 
    }
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;

    printf("The rotated array is: \n");
    for(int i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
}

void freq_arr(int arr[],int n){
    if (n == 0) {
    printf("Array is empty!\n");
    return;
    }
    if (n == 1) {
    printf("%d element has appeared 1 times!\n", arr[0]);
    return;
    }

    int fr[100], count=0;

    for(int i = 0; i < n; i++) {
        fr[i] = 0;
    }
    
    for(int i=0;i<n;i++){
        if(fr[i]==1){
            continue;
        }

        count = 1;

        for(int j=i+1;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
                fr[j]=1;
            }
        }

        printf("%d element has appeared %d times in the current array!\n",arr[i],count);
    }
}

void remove_dup_arr(int arr[],int *n){
    if (*n == 0) {
    printf("Array is empty!\n");
    return;
    }

    for(int i=0;i<*n;i++){
        for(int j=i+1;j<*n;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<*n-1;k++){
                    arr[k]=arr[k+1];
                }
                (*n)--;

                j--;
            }

        }
    }
    printf("Duplicates removed succesfully!\n");
}

void secondlargest_arr(int arr[],int n){
    if (n == 0){
    printf("Array is empty!\n");
    return;
    }

    int first=arr[0];
    int second=0,temp=0;

    for(int i=1;i<n;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
            temp=1;
        }
        else if(arr[i]<first){
            if(temp==0 || arr[i]>second){
                second=arr[i];
                temp=1;
            }
        }
    }
    if (temp == 0) {
        printf("There is no second largest element (all elements are equal).\n");
    } else {
        printf("The second largest element is: %d\n", second);
    }

}


void push_zeroestoend_arr(int arr[],int *n){
    if (*n == 0){
    printf("Array is empty!\n");
    return;
    }

    int temp=0;

    for(int i=0;i<*n-1;i++){
        for(int j=0;j<*n-i-1;j++){
            if(arr[j]==0 && arr[j+1]!=0){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void max_subarraysum(int arr[],int n){
    if (n == 0) {
        printf("Array is empty!\n");
        return;
    }

    int max_sum=arr[0];
    int current_sum=0;

    for(int i=0;i<n;i++){
        current_sum+=arr[i];
        
        //Kadane's logic
        //if the sum is negative then start with a new subarray. (This is because adding more negative numbers to the summ will only decrease the sum)
        if(current_sum>max_sum){
            max_sum=current_sum;
        }
        if(current_sum<0){
            current_sum=0;
        }
    }
    printf("The Maximum Subarray Sum is: %d\n", max_sum);
    return;
}
