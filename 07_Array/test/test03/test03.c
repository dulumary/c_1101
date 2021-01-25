#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    /*
        두개의 index를 입력 받아서, 해당하는 index의 값을 서로 교체 해서 배열을 출력하세요.
        int numbers[5] = {3, 5, 2, 10, 39};
     */
    
    int index1 = 0;
    int index2 = 0;
    
    int numbers[5] = {3, 5, 2, 10, 39};
    
    printf("두개의 index를 입력 하세요 : ");
    scanf("%d %d", &index1, &index2);
    
    int tmp = numbers[index1];
    numbers[index1] = numbers[index2];
    numbers[index2] = tmp;
    
    for(int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    
    printf("\n");
    
    /*
        1 ~ 10 까지 차례로 저장된 배열을 만들고, 순서를 뒤 섞어서 그 결과를 출력 하세요.
        hint) rand() 함수를 이용해서, 0번째 index의 값과 rand() 번째 index의 값의 서로 교체 하면 된다.
     */
    
    int oneToTen[10];
    
    for(int i = 0; i < 10; i++) {
        oneToTen[i] = i + 1;
    }
    
    srand((unsigned int) time(NULL));
        
    for (int i = 0; i < 100; i++) {
        int randomNumber = rand() % 10;
        int tmp = oneToTen[0];
        oneToTen[0] =  oneToTen[randomNumber];
        oneToTen[randomNumber] = tmp;
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%d ", oneToTen[i]);
    }
    
    printf("\n");
    
    /*
        아래 배열에 1 ~ 9 의 숫자들이 들어는데 하나의 수가 빠져 있다.
        빠진 수를 찾아서 출력하세요.
     
        int numbers2[8] = {4, 6, 3, 8, 2, 9, 1, 5};
     */
    
    int numbers2[8] = {4, 6, 3, 8, 2, 9, 1, 5};
    int frequency[11] = {0, };
    
    for(int i = 0; i < 10; i++) {
        int number = numbers2[i];
        frequency[number] = 1;
    }
    
    for(int i = 1; i <= 10; i++) {
        if(frequency[i] == 0) {
            printf("없는 수는 %d 입니다 \n", i);
            break;
        }
    }
    
    /*
        1 ~ 5 범위 안에 숫자가 배열에 중복되어 저장 되어 있다.
        1 ~ 5 까지의 숫자가 각각 몇개 저장 되어 있는지 출력 하세요.
        int numbers3[10] = {5, 3, 2, 1, 2, 4, 3, 3, 2, 1};
     */
    
    int numbers3[10] = {5, 3, 2, 1, 2, 4, 3, 3, 2, 1};
    int frequency2[6] = {0, };
    
    for(int i = 0; i < 10; i++) {
        int number = numbers3[i];
        frequency2[number]++;
    }
    
    for(int i = 1; i <= 5; i++) {
        printf("%d : %d개\n", i, frequency2[i]);
    }
    
    
}
