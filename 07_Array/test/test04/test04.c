#include <stdio.h>

int main() {
    
    /*
        [2][3] 크기의 배열을 만들어서, 반복문을 이용해서, 모든 곳에 10을 넣고 출력하세요.
     */
    
    int numbers[2][3];
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            numbers[i][j] = 10;
        }
    }
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
    
    /*
       [3][4] 크기의 배열을 만들어서, 아래와 같이 각 배열에 1~4를 저장 하고, 출력하세요.
    */
    
    int numbers2[3][4];
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            numbers2[i][j] = j + 1;
        }
    }
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d ", numbers2[i][j]);
        }
        printf("\n");
    }
    
    /*
       [3][3] 크기의 배열을 만들어서, 첫 배열은 1, 두번째 배열은 2, 세번째 배열은 3 으로 채우고 출력 하세요.
    */
    
    int numbers3[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            numbers3[i][j] = i + 1;
        }
    }
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", numbers3[i][j]);
        }
        printf("\n");
    }
    
    /*
       [5][5] 크기의 배열을 만들어서, 모든 값을 0으로 초기화 하고, 아래와 같이 + 위치에 1을 입력 하고 출력하세요.
    */
    
    int numbers4[5][5];
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            numbers4[i][j] = 0;
        }
    }
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(i == 2 || j == 2) {
                numbers4[i][j] = 1;
            }
            
        }
    }
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", numbers4[i][j]);
        }
        printf("\n");
    }
    
    /*
       [3][3] 크기의 배열을 만들어서, 아래와 같은 형태로 숫자를 차례로 저장하고 출력 하세요.
    */
    
    int numbers5[3][3];
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            numbers5[i][j] = i * 3 + j + 1;
        }
    }
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", numbers5[i][j]);
        }
        printf("\n");
    }
    
    /*
       [3][3] 크기의 배열을 만들어서, 아래와 같은 형태로 숫자를 차례로 저장하고 출력 하세요.
    */
    
    int numbers6[3][3];
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            numbers6[i][j] = (i + 1) + (j * 3);
        }
    }
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", numbers6[i][j]);
        }
        printf("\n");
    }
    
    
}
