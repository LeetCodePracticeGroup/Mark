#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
	int i, j;
	int *ans = (int*)malloc(2*sizeof(int));
	for(i = 0; i < numsSize; i++){
		for(j = i+1; j < numsSize; j++){
			if(nums[i]+nums[j] == target){
				ans[0] = i; ans[1] = j; return ans;
			}
		}
	}
	return ans;
}


int main(){
	int test[5] = {1, 2, 3, 4, 5};
	int* ans = twoSum(test, 5, 3);
	printf("ans:[%d, %d]", ans[0], ans[1]);
	//printf("%d", ans);
	//system("pause");
	return 0;
} 
