
#include <stdio.h>

int main() {
    
    /*
        나이를 저장 하는 변수를 만들고 이를 사용해서 아래와 같이 출력하세요.
     */
    
    int age = 28;
    
    printf("이름 : 김인규 나이 : %d\n", age);
    
    /*
        국어와 수학 점수를 저장 하는 변수를 각각 만들어서 아래와 같이 출력하세요.
     */
    
    int koreanScore = 85;
    int mathScore = 92;
    
    printf("국어 : %d점\n수학 : %d점\n", koreanScore, mathScore);
    
    /*
        두 변수를 더한 결과와 뺀결과를 연산을 통해서 구하고 출력하세요.
     */
    
    int number1 = 539223;
    int number2 = 3215;
    
    int add = number1 + number2;
    int minus = number1 - number2;
    
    printf("더하기 결과 : %d\n", add);
    printf("뺴기 결과 : %d\n", minus);

    /*
        1500원 짜리 과자 5개와 200원 짜리 사탕 13개를 샀을때 가격을 변수와 연산을 통해서 계산 하여 출력하세요.
     */
    
    int sum = (1500 * 5) + (200 * 13);
    
    printf("총합 : %d원\n", sum);
   
    return 0;
}

