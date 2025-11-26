#include <stdio.h>

int findPosition(int nums[], int n, int T) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == T) {
            return mid; // T already exists
        } else if (nums[mid] < T) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    // left is the position to insert T
    return left;
}

int main() {
    int Q;
    scanf("%d", &Q);

    while (Q--) {
        int N, T;
        scanf("%d %d", &N, &T);
        int nums[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &nums[i]);
        }

        int pos = findPosition(nums, N, T);
        printf("%d", pos);
    }

    return 0;
}

