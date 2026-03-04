#include <stdio.h>
#include <limits.h>
int main() {
    int n;
    int num;
    int min_val = INT_MAX;
    int max_val = INT_MIN;
    
    int first_num = 0;
    int second_num = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num); 
        if (i == 0) {
            first_num = num;
        } else if (i == 1) {
            second_num = num;
        }
        
        if (num < min_val) {
            min_val = num;
        }
        
        if (num > max_val) {
            max_val = num;
        }
    }
    printf("%d\n", min_val);
    printf("%d\n", max_val);
    if (n >= 2) {
        double average = (double)(first_num + second_num) / 2.0;
        printf("%.2f\n", average);
    } 

    return 0;
}