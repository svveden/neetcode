/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    int *returnArray = (int *) malloc(2 * sizeof(int));
    int added = 0;
    for(int i = 0; i < numbersSize; i++){
        if(numbers[i] <= target){
            for(int j = i+1; j < numbersSize; j++){
                added = numbers[i]+numbers[j];
                if(added == target){
                    returnArray[0] = i+1;
                    returnArray[1] = j+1;
                    *returnSize = 2;
                    return returnArray;
                }
            }
        } 
    }
    *returnSize = 0;
    return NULL;
}
