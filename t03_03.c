#include <stdio.h>  
#include <limits.h> 
#include <float.h>

int main() {
    int n;           
    int num;         
    int min_val = INT_MAX; 
    int max_val = INT_MIN; 
    int first_num = 0;
    int second_num = 0;
    int prev_num = 0;
    
    double max_consecutive_avg = -DBL_MAX;
    
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
        if (i > 0) { 
            double current_avg = (double)(prev_num + num) / 2.0;
            if (current_avg > max_consecutive_avg) {
                max_consecutive_avg = current_avg;
            }
        }
        
        prev_num = num;
    }
    printf("%d\n", min_val);
    printf("%d\n", max_val);
    
    if (n >= 2) {
        double avg_first_two = (double)(first_num + second_num) / 2.0;
        printf("%.2f\n", avg_first_two);
        printf("%.2f\n", max_consecutive_avg);
    } 

    return 0;
}