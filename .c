void findPairs(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            printf("Pair found: (%d, %d)\n", arr[left], arr[right]);
            left++;
            right--;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
}
