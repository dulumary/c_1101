#include <stdio.h>

int main() {
    
    /*
        아래 는 5명 학생의 10과목 시험 성적을 정리 해놓은 것이다.
     */
    
    int scores[5][10] = {
        {89, 93, 91, 93, 92, 78, 90, 90, 93, 90},
        {91, 82, 72, 98, 92, 87, 77, 87, 74, 88},
        {98, 93, 94, 91, 97, 94, 91, 96, 98, 90},
        {65, 63, 57, 87, 88, 92, 78, 85, 100, 68},
        {45, 50, 48, 63, 67, 58, 40, 66, 47, 64}
    };
    
    /*
        각 학생의 평균을 각각 구해서 출력 하세요.
     */
    
    for(int i = 0; i < 5; i++) {
        int sum = 0;
        for(int j = 0; j < 10; j++) {
            sum += scores[i][j];
        }
        printf("%d번째 학생의 평균은 %.1f입니다. \n", i + 1, sum / 10.0);
    }
    
    /*
        각 학생의 최고 점수를 구해서 출력 하세요.
     */
    
    for(int i = 0; i < 5; i++) {
        int max = scores[i][0];
        for(int j = 1; j < 10; j++) {
            if(max < scores[i][j]) {
                max = scores[i][j];
            }
        }
        printf("%d번째 학생의 최고점은 %d입니다. \n", i + 1, max);
    }
    
    /*
        평균이 가장 높은 학생의 평균점수와 몇번째 학생인지 출력하세요.
     */
    
    float maxAverage = 0;
    int maxIndex = 0;
    for(int i = 0; i < 5; i++) {
        int sum = 0;
        for(int j = 0; j < 10; j++) {
            sum += scores[i][j];
        }
        
        float average = sum / 10.0;
        if(maxAverage < average) {
            maxIndex = i;
            maxAverage = average;
        }
    }
    
    printf("평균이 가장 높은 학생은 %d번째 학생이고, 평균은 %.1f입니다. \n", maxIndex + 1, maxAverage);
    
    /*
        index 4번째 과목의 최고 성적의 학생이 몇번째 학생인지 출력 하세요.
     */
    
    int max = 0;
    maxIndex = 0;
    for(int i = 0; i < 5; i++) {
        if(max < scores[i][3]) {
            max = scores[i][3];
            maxIndex = i;
        }
    }
    
    printf("4번째 과목의 최고 성적자는 %d번째 학생이고, 점수는 %d이다\n", maxIndex + 1, max);
    

    /*
        시험과목 index 3 ~ 7 의 평균이 가장 높은 학생의 index를 구하여 출력하세요.
     */
    
    maxAverage = 0;
    maxIndex = 0;
    for(int i = 0; i < 5; i++) {
        int sum = 0;
        for(int j = 3; j <= 7; j++) {
            sum += scores[i][j];
        }
        
        float average = sum / 5.0;
        if(maxAverage < average) {
            maxIndex = i;
            maxAverage = average;
        }
    }
    
    printf("평균이 가장 높은 학생은 %d번째 학생이고, 평균은 %.1f입니다. \n", maxIndex + 1, maxAverage);

}
