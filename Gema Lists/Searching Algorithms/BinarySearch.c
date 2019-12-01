#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Complexity : O(logN)
void bSearch(int *p, int n, int element) {
	int start = 0;
	int end = n - 1;
	int mid;
	while(start != end) {
		mid = (start + end) / 2;
		if(*(p+mid) < element) { //go right
			start = mid + 1;
		} else if(*(p+mid) > element) { //go left
			end = mid - 1;
		} else { //we found the element
			printf("We found!\n");
			return;
		}
	}
	//We don't found the element
	printf("We don't found...\n");
}
int main() {
	int n, element;
	scanf("%d", &n);
	int *v = (int *) malloc(sizeof(int) * n);
	for(int i = 0; i < n; i++) {
		scanf("%d", v+i);
	}
	scanf("%d", &element);
	//before binary search, we need sort the array.
	//assume the vector is ordered in this case.
	bSearch(v, n, element);
	return 0;
}