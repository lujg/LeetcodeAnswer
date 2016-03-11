/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int *indices = (int*)malloc(2*sizeof(int));
	int tmp;
    for(int i=0; i<numsSize-1; i++){//though it passes, it's too slow.
		tmp = target - nums[i];
		for(int j=i+1; j<numsSize; j++){
			if(nums[j]==tmp){
				indices[0] = i;
                indices[1] = j;
                return indices;
			}
		}
        /*for(int j=i+1; j<numsSize; j++){//though it passes, it's too slow.
            if(nums[i]+nums[j]==target){
                indices[0] = i;
                indices[1] = j;
                return indices;
            }*/
        }
    }
    return indices;
}