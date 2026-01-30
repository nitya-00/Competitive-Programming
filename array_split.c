#include <stdio.h>

#define MAXN 500000

int main() {
    int n;
    scanf("%d", &n);
    
    long long a[MAXN];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    
    // Step 1: Calculate total sum of the array
    long long total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += a[i];
    }
    
    // Step 2: Check if total_sum is divisible by 3
    if (total_sum % 3 != 0) {
        printf("0\n");
        return 0;
    }
    
    long long target = total_sum / 3;
    long long suffix_count = 0;
    long long cumulative_sum = 0;
    long long result = 0;
    long long suffix_sums[MAXN] = {0};
    
    // Step 3: Calculate suffix counts
    for (int i = n - 1; i >= 0; i--) {
        cumulative_sum += a[i];
        if (cumulative_sum == target) {
            suffix_sums[i] = 1;
        }
    }
    
    // Accumulate suffix counts for faster lookup
    for (int i = n - 2; i >= 0; i--) {
        suffix_sums[i] += suffix_sums[i + 1];
    }
    
    // Step 4: Traverse the array and count valid splits
    cumulative_sum = 0;
    for (int i = 0; i < n - 2; i++) {
        cumulative_sum += a[i];
        if (cumulative_sum == target) {
            result += suffix_sums[i + 2];
        }
    }
    
    printf("%lld\n", result);
    return 0;
}
