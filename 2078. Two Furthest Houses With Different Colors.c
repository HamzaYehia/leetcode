int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

int maxDistance(int* colors, int colorsSize) {
    int maxDistance = 0;

    for (int i = 0; i < colorsSize; i++) {
        for (int j = colorsSize - 1; j > 0; j--) {
            if (colors[i] != colors[j]) {
                maxDistance = max(maxDistance, j - i);
                break;
            }
        }
    }

    return maxDistance;
}