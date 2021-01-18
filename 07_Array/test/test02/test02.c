#include <stdio.h>
#include <math.h>

int main() {
    
    /*
        index 와 값을 차례로 입력 받아서, 아래 배열에 해당하는 index에 값을 바꾸고 출력 하세요.
        int numbers[5] = {3, 5, 2, 10, 39}
     */
    
    int numbers[5] = {3, 5, 2, 10, 39};
    
    int number = 0;
    int index = 0;
    printf("변경한 index와 값을 입력하세요 : ");
    scanf("%d %d", &index, &number);
    
    numbers[index] = number;
    
    for(int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
        
    printf("\n");
    
    /*
        아래와 같이 O 와 X로 채점 결과가 저장된 배열이 있다.
        100점 만점 기준으로 몇점을 맞았는지 출력하세요.

        char scores[10] = {'X','O', 'O', 'X', 'X', 'O', 'O', 'O', 'O', 'X'};
     */
    
    char scores[10] = {'X','O', 'O', 'X', 'X', 'O', 'O', 'O', 'O', 'X'};
    
    int totalScore = 0;
    
    for(int i = 0; i < 10; i++) {
        if(scores[i] == 'O') {
            totalScore += 10;
        }
    }
    
    printf("체점 결과는 %d점 입니다. \n", totalScore);
   
    /*
        아래 배열은 각각 월, 화, 수, 목, 금, 토, 일 7일간의 아르바이트를 한 시간을 나타낸다.
        int works[7] = {3, 5, 5, 3, 5, 3, 5}
     
        시급 기준이 아래와 같을때 7일 동안 일한 총 임금의 값을 출력하세요.
     
        평일 시급 : 8500원
        주말(토,일) 시급 : 9500원
       
     */
    
    int works[7] = {3, 5, 5, 3, 5, 3, 5};
    
    int totalPay = 0;
    for(int i = 0; i < 5; i++) {
        totalPay += 8500 * works[i];
    }
    
    for(int i = 5; i < 7; i++) {
        totalPay += 9500 * works[i];
    }
    
    printf("일주일간 총 임금은 %d원 입니다.\n", totalPay);
    
    /*
        반복문을 이용해서 A~Z 를 배열에 저장해서 출력 하고, 'V' 가 몇번째 알파벳인지 출력 하세요.
    */
       
    int alphabets[26] = {0, };
       
    for(int i = 0; i < 26; i++) {
        alphabets[i] = 'A' + i;
    }
   
    int vIndex = 0;
    for(int i = 0; i < 26; i++) {
        printf("%c ", alphabets[i]);
       
        if(alphabets[i] == 'V') {
            vIndex = i + 1;
        }
    }
   
    printf("\nV 는 %d번째 입니다.\n", vIndex);

    
    /*
        길이가 5인 int 배열을 만든다.
        수를 무한 루프로 입력 받으면서, 입력 받은 수가 짝수 일때만, 배열에 저장한다.
        배열이 가득차면 입력을 중단하고, 저장된 수들을 출력한다.
     */
    
    int numbers2[5] = {0,};
    
    int i = 0;
    while(i != 5) {
        int number = 0;
        printf("수를 입력하세요 : ");
        scanf("%d", &number);
        
        if(number % 2 == 0) {
            numbers2[i] = number;
            i++;
        }
    }
    
    for(int i = 0; i < 5; i++) {
        printf("%d ", numbers2[i]);
    }
    
    printf("\n");



}
