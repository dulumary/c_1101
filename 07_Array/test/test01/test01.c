#include <stdio.h>
#include <math.h>

int main() {

    int numbers[8] = {3, 8, 9, 4, 2, 1, 7, 5};
    /*
        배열의 4번째 값을 6으로 바꾸세요.
     */
    
    numbers[3] = 6;
    
    /*
       배열에 값을 순서로 출력하세요.
    */
    
    for(int i = 0 ; i < 8; i++) {
        printf("%d ", numbers[i]);
    }
    
    printf("\n");
    
    /*
        배열에 값이 반대 순서로 출력하세요.
     */
    
    for(int i = 7 ; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }
    
    printf("\n");
    
    /*
       배열에 짝수번째 위치에 있는 값들을 출력 하세요.
    */
    
    for(int i = 0 ; i < 8; i++) {
        if((i + 1) % 2 == 0) {
            printf("%d ", numbers[i]);
        }
    }
    
    printf("\n");
    
    /*
        배열에 값중 4가 들어 있는 index를 출력하세요.
     */
    
    for(int i = 0 ; i < 8; i++) {
        if(numbers[i] == 7) {
            printf("4가 들어 있는 index는 %d 입니다.\n", i);
            break;
        }
    }

    
    /*
        배열에 값중 가장 큰값을 출력 하세요.
     */
    
    int max = 0;
    for(int i = 0 ; i < 8; i++) {
        if(max < numbers[i]) {
            max = numbers[i];
        }
    }
    
    /*
        배열에 값중 가장 작은 값의 index를 출력 하세요.
     */
    
    printf("가장 큰 값은 %d 입니다.\n", max);
    
    int minIndex = 0;
    int min = numbers[0];
    for(int i = 1; i < 8; i++) {
        if(min > numbers[i]) {
            min = numbers[i];
            minIndex = i;
        }
    }
    
    printf("최소값의 인덱스는 %d 입니다.\n", minIndex);
    
    /*
       배열에 모든 수의 합을 출력 하세요.
    */
    
    int sum = 0;
    for(int i = 0 ; i < 8; i++) {
        sum += numbers[i];
    }
    
    printf("값의 합은 %d 입니다.\n", sum);
 
    
}
