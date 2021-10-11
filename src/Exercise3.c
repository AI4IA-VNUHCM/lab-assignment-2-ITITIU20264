/*
3. Write a function to represent a given integer as product of prime numbers
Ex:
______________________________________
| Input: 24                          |
| Output: 2 * 2 * 2 * 3              |
|____________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	//Your codes here
	int arr[22] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 33, 37, 41, 43, 47, 49, 53, 57, 59, 61, 67, 71};
	int count = 0;
	while((testcase != 1) && (count <= 19))
	{
		while(testcase % arr[count] == 0)
		{
			if(testcase / arr[count] != 1)
			{
				printf("%d * ", arr[count]);
			}	
			else
			{
				printf("%d", arr[count]);
			}
			testcase /= arr[count];
		}
		count++;
	}
	return 0;
}
