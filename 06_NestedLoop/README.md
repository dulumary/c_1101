# 6. 중첩 반복문    

## 반복에 반복
> 매일 학교를 가서 6교시 까지 수업을 듣는다.   
> 벤치프레스를 30번 3세트 반복한다.

* **6교시 까지 한교시씩 반복**하는 작은 반복이 있고, **매일 학교를 가는** 큰반 복이 있다. 
* **벤치프레스를 30개** 하는 작은 반복과 이를 **3번 반복** 하는 큰 반복이 있다. 
* 이렇게 작은 반복을 크게 포용 하는 큰 반복이 존재하는 형태를 반복에 대한 반복 **"중첩 반복문"** 이라고 한다.  
* 위 문장중 하나를 C언어로 번역 하면 아래와 같다. 

```
벤치프레스를 30번 3세트 반복한다

벤치 프레스 3세트 반복 {
	벤치 프레스 30번 반복
}
            ▼
벤치 프레스 3세트 반복 {
	for(int j = 0; j < 30; j++) {
		liftBarbell();
	}
}
            ▼
for(int i = 0; i < 3; i++)  {
	for(int j = 0; j < 30; j++) {
		liftBarbell();
	}
}
```

* 중첩 반복문을 계획 할때는 작은 반복문을 먼저 완성해서 설계하고, 이를 감싸는 큰반복문을 완성한다. 
* 작은 반복문은 큰 반복문과 연관성을 배제하고, 독립적으로 생각하고 짜는 것이 좋다. 
* 큰 반복문은 작은 반복문을 하나의 기능으로 생각하고, 작은 반복문의 내부 구조 보다는 기능에만 집중하고 이를 반복한고 생각하고 짠다. 
* 중첩 반복문에 변수를 i, j, k 를 순서대로 사용하는게 통상적인 사용법이다.

[예제 보기](ex/ex01.c)  
 [문제 풀기](test/README.md)