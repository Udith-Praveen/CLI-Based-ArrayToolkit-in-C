#ifndef ARRAY_TOOLKIT_H
#define ARRAY_TOOLKIT_H

#include <stdio.h>


//Constants
#define CAPACITY 100

//Function Prototypes
int insert_arr(int arr[], int *n);
int delete_arr(int arr[], int *n);
int linsearch_arr(int arr[], int n);
void minmax_arr(int arr[], int n);
void rev_arr(int arr[], int n);
void bubblesort_arr(int arr[], int n);
void rotateleft_arr(int arr[], int n);
void freq_arr(int arr[], int n);
void remove_dup_arr(int arr[], int *n);
void secondlargest_arr(int arr[], int n);
void push_zeroestoend_arr(int arr[], int *n);
void max_subarraysum(int arr[], int n);

//Utility
void clear_input_buffer();

#endif