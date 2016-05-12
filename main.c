//
//  main.c
//  C Programming
//
//  Created by Samarth Paboowal on 12/05/16.
//  Copyright © 2016 Samarth Paboowal. All rights reserved.
//

#include <stdio.h>

int main() {
    
    int numbers[10] = {1,2,3,4,5,6,7,8,9,10},mid,high,low,num;
    low = 0;
    high = 9;
    
    printf("Give the number that you want to search: ");
    scanf("%d", &num);
    
    while(low <= high){
        mid = (low + high) / 2;
        if (num < numbers[mid]) {
            high = mid;
        }
        else if (num > numbers[mid]){
            low = mid + 1;
        }
        else{
            printf("Number found at location %d \n", mid);
            return 0;
        }
    }
    printf("Number not in the list!\n");
    return 0;
}
