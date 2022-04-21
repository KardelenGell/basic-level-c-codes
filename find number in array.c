#pragma warning(disable:4996)
#include <stdio.h> 

int binarySearch(int array[], int l, int r, int x) 
{ 
    if (r >= l)
	{ 
        int mid = l + (r - l) / 2; 
  
            if (array[mid] == x) 
            return mid; 
  
            if (array[mid] > x) 
            return binarySearch(array, l, mid - 1, x); 
  
         return binarySearch(array, mid + 1, r, x); 
    } 

    return -1; 
} 
  
int main(void)
{
	int array[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(array) / sizeof(array[0]);
	int x = 10;
	int result = binarySearch(array, 0, n - 1, x);

	    if (result == -1)
		     printf("Element is not present in array.\n\n");
    	else
	         printf("Element is present at index %d.\n\n", result);
	
	
	system("pause");
	return 0;
} 
