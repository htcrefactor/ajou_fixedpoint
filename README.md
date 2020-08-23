# ajou_fx_team1
아주대학교 2020년 여름방학 실전코딩2 고정 소수점 연산 통합 라이브러리

## 구성원

| 이름 | 학번 | 
| ---- | ---- |
| 고예준 | 201820742 | 
| 김지원 | 201720771 | 
| 조시호 | 201520659 | 
| 최형택 | 201620989 | 
<br>

## 목차

(링크 추가하면 될 것 같아요)

## 1. 기능

### 1-1. _FX_SYSTEM


```
#define _FX_S1615 1
#define _FX_S1516 2

#define _FX_S3231 3
#define _FX_S3132 4

#define _FX_S4716 5 
#define _FX_S2308 6
```

<br>
<br>
<br>

### 1-2. _FX_CALCULATION_TYPE
 

```
#define _FX_DOUBLE 1
#define _FX_LONGLONG 2
```

<br>
<br>
<br>

### 1-3. _FX_CALCULATION_TYPE optional input and output

1. double 인 경우

```
[입력]
숫자 2개를 입력한다. (a,b)

[출력 결과]

fa와 fb의 더하기 연산 실행 결과
fa와 fb의 뺴기 연산 실행 결과
fa와 fb의 곱하기 연산 실행 결과
fa에서 fb 나누는 연산 실행 결과

fa의 sine 연산 실행 결과
(fa^(fb)) power 연산 실행 결과
fa의 sqrt 연산 실행 결과

<fa, fb는 a와 b를 각각 fixed_t로 형변환한 숫자>
```

<br>
<br>

2. long long 인 경우

```
[입력]
숫자 2개를 입력한다. (a,b)


[출력 결과]

fa와 fb의 더하기 연산 실행 결과
fa와 fb의 뺴기 연산 실행 결과
fa와 fb의 곱하기 연산 실행 결과
fa에서 fb 나누는 연산 실행 결과

sine 실행 결과

fa와 fb의 곱하기 함수2 실행 결과
fa와 fb의 나누기 함수2 실행 결과
fa와 fb의 곱하기 함수3 실행 결과
fa와 fb의 나누기 함수3 실행 결과

<fa, fb는 a와 b를 각각 fixed_t로 형변환한 숫자>

```

<br>
<br>
<br>


### 4. _FX_CALCULATION_TYPE optional functions


| 매크로 및 함수 이름 | 기능 |
| ---- | ---- |
| fixed_t double_to_fx(a) | fixed_t 로 표현한 숫자를 double로 형변환한다. |
| double fx_to_double(fa) | double로 표현한 숫자를 fixed_t로 형변환한다. |
| ---- | ---- |
| fixed_t fx_add(fa, fb) | fixed_t로 표현된 두 값을 더해준다.  |
| fixed_t fx_sub(fa, fb) | fixed_t로 표현된 두 값을 빼준다. |
| fixed_t fx_mul1(fa, fb) | fixed_t로 표현된 두 값을 곱해준다. |
| fixed_t fx_div1(fa, fb) | fixed_t로 표현된 두 값을 나눠준다. |
| ---- | ---- |
| [double인 경우 제공되는 함수] | |
| fixed_t fx_sin(fa) | fixed_t로 표현된 값의 sine 을 구해준다.  | 
| fixed_t fx_pow(fa, fb) | fixed_t로 표현된 값의 n승을 구해준다. |
| fixed_t fx_sqrt(fa) | fixed_t로 표현된 값의 제곱근을 구해준다. |
| ---- | ---- |
| [long long 인 경우 제공되는 함수] |  |
| fixed_t fx_mul2(fa, fb)| fixed_t로 표현된 두 값을 곱해준다. |
| fixed_t fx_mul3(fa, fb)| fixed_t로 표현된 두 값을 곱해준다. |
| fixed_t fx_div2(fa, fb) | fixed_t로 표현된 두 값을 나눠준다. | 
| fixed_t fx_div3(fa, fb) | fixed_t로 표현된 두 값을 나눠준다. |

<br>
<br>




## function-specific comparison

표 삽입하고 유효범위 넣으면 좋을 것 같아요!

## execution method
make file & macro 주는법 명시하기