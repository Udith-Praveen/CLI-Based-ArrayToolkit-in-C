#include <stdio.h>
#include "array_toolkit.h"
/*
 * Author: Udith Praveen
 * Description: Main entry point for the Array Toolkit CLI.
 * Demonstrates modular C design and pointer arithmetic.
 */

int main(){
    int n, arr[CAPACITY],reply;
    char ans;
    int check=0;

    //Array setup according to the user
    while(1){
    printf("\nEnter the number of elements in the array\n");

    if (scanf("%d", &n) != 1){
    printf("Invalid input! Please enter a number.\n");
    clear_input_buffer();
    continue;
    }

    if(n >= 0 && n <= CAPACITY)
    break;

    if(n<0){
        printf("This value cannot be negative!\n");
        continue;
    }
    
    if(n>CAPACITY){
        printf("\nThe maximum allowed elements is 100, Kindly enter accordingly.\n");
        continue;
    }
    }  


    printf("Enter %d elements: \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    while(1){
        //Menu driven
        printf("\nCurrent array: \n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        printf("Use array toolkit? (y/n): ");
        scanf(" %c",&ans);

        if(ans=='n'||ans=='N'){
            printf("\nSee you again later! ");
            break;
        }
        else if(ans=='y'||ans=='Y'){
            printf("What would you like to do with the array?\n");
            printf("Enter the numerical value of the thing you would like to do:\n");
            printf("1.Enter an element at a given position\n");
            printf("2.Delete an element at a given position\n");
            printf("3.Linearly search for a given element\n");
            printf("4.Find the Minimum and Maximum element values in the current array\n");
            printf("5.Reverse the current array and display it\n");
            printf("6.Bubble sort the current array.\n");
            printf("7.Rotate the array left by one position\n");
            printf("8.Count the frequency of each element in the array.\n");
            printf("9.Remove the duplicate elements within the current array\n");
            printf("10.Find the second largest element in the current array.\n");
            printf("11.Push all the zeroes within the current array to the end of the array.\n");
            printf("12.Find the maximum subarray sum in the current array.\n");
            scanf("%d",&reply);

            switch(reply){
                case 1:
                check=insert_arr(arr,&n);
                if(check==1)
                printf("\nExecution succesful !!\n");
                else if(check==0)
                printf("\nOperation Unsuccessful\n");
                break;

                case 2:
                check=delete_arr(arr,&n);
                if(check==1)
                printf("\nExecution succesful !!\n");
                else if(check==0)
                printf("\nOperation Unsuccessful\n");
                break;

                case 3:
                linsearch_arr(arr,n);
                break;

                case 4:
                minmax_arr(arr,n);
                break;

                case 5:
                rev_arr(arr,n);
                break;

                case 6:
                bubblesort_arr(arr,n);
                break;

                case 7:
                rotateleft_arr(arr,n);
                break;

                case 8:
                freq_arr(arr,n);
                break;

                case 9:
                remove_dup_arr(arr,&n);
                break;

                case 10:
                secondlargest_arr(arr,n);
                break;

                case 11:
                push_zeroestoend_arr(arr,&n);
                break;

                case 12:
                max_subarraysum(arr,n);
                break;

                default:
                    printf("\nPlease enter only the given numerical options to perform your prefered operation!\n");
                    clear_input_buffer();
                    break;
                
            }
            
        }
        else{
            printf("Please enter either 'Y' for Yes or 'N' for No\n");
        }
    }
}

