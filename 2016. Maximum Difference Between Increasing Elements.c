#define MAX_INT 2147483647

int maximumDifference(int* nums, int numsSize) {
    int minElement = MAX_INT,
        maxDifference = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < minElement) {
            minElement = nums[i];
        }

        if (nums[i] - minElement > maxDifference) {
            maxDifference = nums[i] - minElement;
        }
    }

    return (maxDifference > 0) ? maxDifference : -1;
}