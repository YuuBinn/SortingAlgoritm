# 정렬 알고리즘(Sorting Algoritm)
## | 분류
1

+ 기본적인 정렬 알고리즘 : 버블 정렬, 선택 정렬, 삽입 정렬 
-> 단순하지만 비효율적이다.
+ 더 효율적인 정렬 알고리즘 : 쉘 정렬, 힙 정렬, 퀵 정렬
-> 복잡하지만 효율적이다.

2

+ 내부 정렬(Internal Sort) : '입력의 크기 <= 주기억 장치의 공간'인 경우 수행되는 정렬이다.
+ 외부 정렬(External Sort) : '입력의 크기 > 주기억 장치의 공간'인 경우 수행되는 정렬으로, 보조기억장치에 있는 입력을 여러 번에 나누어 주기억 장치에 읽어 들인 후, 정렬하여 보조기억장치에 다시 저장하는 과정을 반복한다.
#
 현재까지 모든 부분에 있어서 최상의 성능인 최적 알고리즘은 존재하지 않는다. 

 -> 따라서 상황에 따라 가장 효율적인 정렬 알고리즘을 선택하는 것이 중요하다.



# 정렬 알고리즘의 작동방식

## | 버블 정렬(Bubble Sort)
> 1. 이웃하는 숫자 비교
> 2. 작은 수를 앞쪽으로 이동시킴
> 3. 반복

## | 선택 정렬(Selection Sort)
> 1. 입력 배열 전체에서, 최솟값을 선택
> 2. 배열의 0번 원소와 자리를 바꿈
> 3. 남은 원소 중 최솟값을 선택
> 4. 배열의 1번 원소와 자리를 바꿈
> 5. 같은 방식을 반복
## | 삽입 정렬(Insertion Sort)
> 1. 배열을, 정렬된 부분/정렬되지 않은 부분으로 나눔
> 2. 정렬되지 않은 부분의 가장 왼쪽 원소를, 정렬된 부분 중 적절한 위치에 삽입 
> 3. 반복
## | 쉘 정렬(Shell Sort)
> -> 삽입 정렬을 이용하여, 배열 뒷부분의 작은 숫자를 앞부분으로 빠르게 이동시키는 동시에, 앞부분의 큰 숫자는 뒷부분으로 이동시킨다.
## | 힙 정렬(Heap Sort)
+ 힙 자료 구조를 이용하는 정렬 알고리즘
> -> 각 노드값이 자식 노드값보다 커야 한다는 '힙 조건'을 만족시키는 정렬
## | 퀵 정렬(quick Sort)
+ 분할정복 알고리즘으로, 평균적으로 수행 속도가 매우 빠르다.
> 1. 리스트 중 한 요소를 선택(피봇)
> 2. 피봇을 기준으로 작은 숫자들은 왼쪽, 큰 숫자들은 오른쪽에 위치하도록 분할
> 3. 분할된 왼쪽/오른쪽 리스트에 대하여 위 과정 반복

# 성능 분석 및 비교
## | 성능 비교
이론적으로 성능은 최선, 평균, 최악인 경우가 있다.
+ 최선의 경우 : 정렬된 데이터
+ 평균의 경우 : 랜덤된 데이터
+ 최악의 경우 : 역 정렬된 데이터

각각의 경우에 대한 시간복잡도를 정리하면, 아래와 같다.
![1](https://user-images.githubusercontent.com/101811119/166922775-72e3fc4e-4006-40f7-8d3a-0486f8be6d57.png)

## | 장단점 비교


#
앞서 언급했듯이 상황에 따른 가장 효율적인 정렬 알고리즘을 선택하기 위해서는, 각각의 장단점을 잘 파악하여 적합한 정렬 방법을 사용해야 한다.
