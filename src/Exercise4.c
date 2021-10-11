/*
4.	Receive an array of n integers, n is even. 
Sort the first half in increasing order and second half decreasing order
Ex:
 ____________________________________
| Input:  8 7 9 2 1 5 2 0            |
| Output: 2 7 8 9 5 2 1 0            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int n = argc;
	int test_array[n],i;
	for(i=0; i<n;i++){
		test_array[i] = atoi(argv[i+1]);
	}
	//Your codes here
	int arr1[n/2];
	int arr2[n/2];
	int j;
	int c;
	for(i = 0; i < n; i++)
	{
		if(i <= n/2 -1)
		{
			arr1[i] = test_array[i];
		}
		else
		{
			arr2[i - n/2] = test_array[i];
		}
	}
	for(i = 0; i < n/2; i++)
	{
		for(j = i; j < n/2; j++)
		{
			if(arr1[i] > arr1[j])
			{
				c = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = c;
			}
		}
	}
	for(i = 0; i < n/2; i++)
	{
		for(j = i; j < n/2; j++)
		{
			if(arr2[i] < arr2[j])
			{
				c = arr2[i];
				arr2[i] = arr2[j];
				arr2[j] = c;
			}
		}
	}
	for(i = 0; i < n; i++)
	{
		if(i <= n/2 -1)
		{
			printf("%d ", arr1[i]);
		}
		else
		{
			printf("%d ", arr2[i - n/2]);
		}
	}
	return 0;
}
