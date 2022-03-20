/**
 * @problem name: Two Sum
 * @problem link: https://leetcode.com/problems/two-sum/
 * @solution status: accepted
 * @solution time complexity: Linear O(n)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date 2022-03-20
 */


#include<stdio.h>
#include<stdlib.h>

#define SIZE 50000

int hashToTable(int key) {
    int r = key % SIZE;
    // if r is negative add SIZE to it and return it
    return r < 0 ? r + SIZE : r;
}

void insertToTable(int* keys, int* values, int key, int value) {
    int index = hashToTable(key);
    while (values[index]) {
        /**
         * if we entered this loop this means that there
         * is an element present in that index in The
         * Hash Table, so we increment the index by one
         */
        index = (index + 1) % SIZE;
    }
    // we insert the elemnt in that index
    keys[index] = key;
    values[index] = value;
}

int searchInHashTable(int* keys, int* values, int key) {
    int index = hashToTable(key);
    while (values[index]) {
        /**
         * if we entered this loop this means that
         * we found an elment in that index
         * so we ckeck if it's the element
         * that we are looking for
         */
        if (keys[index] == key)
        {
            return values[index];
        }
        // else: increment the index and search again
        index = (index + 1) % SIZE;
    }
    /**
     * if the function reached this statement
     * this means target not found
     */
    return 0;
}


int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int keys[SIZE] = { 0 };
    int values[SIZE] = { 0 };

    for (int i = 0; i < numsSize; i++) {
        int remaining = target - nums[i];
        int value = searchInHashTable(keys, values, remaining + 1);
        if (value) {
            int* ret_arr = (int*)malloc(2 * sizeof(int));
            ret_arr[0] = value - 1;
            ret_arr[1] = i;
            return ret_arr;
        }
        // else: means that 'value' is not found so we insert the current elemnt 
        insertToTable(keys, values, nums[i] + 1, i + 1);
    }
    return NULL;
}
