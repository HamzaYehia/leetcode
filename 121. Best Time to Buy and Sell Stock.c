#define MAX_INT 2147483647

int maxProfit(int* arr, int pricesSize) {
    int minPrice = MAX_INT,
        maxProfit = 0;

    for (int i = 0; i < pricesSize; i++) {
        
        if (arr[i] < minPrice) {
            minPrice = arr[i];
        }

        if ((arr[i] - minPrice) > maxProfit) {
            maxProfit = arr[i] - minPrice;
        }
    }
    
    return maxProfit;
}