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

## 기능

### 1. _FX_SYSTEM


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

### 2. _FX_CALCULATION_TYPE
 

```
#define _FX_DOUBLE 1
#define _FX_LONGLONG 2
```

<br>
<br>
<br>

### 3. _FX_CALCULATION_TYPE option 별 기능
1. double 인 경우

```
[제공 기능]
더하기 실행 결과
뺴기 실행 결과
곱하기 실행 결과
나누기 실행 결과

sine 실행 결과
power 실행 결과
sqrt 실행 결과
```

<br>
<br>

2. long long 인 경우

```
[제공 기능]
더하기 실행 결과
뺴기 실행 결과
곱하기 실행 결과
나누기 실행 결과

sine 실행 결과

곱하기 함수2 실행 결과
나누기 함수2 실행 결과
곱하기 함수3 실행 결과
나누기 함수3 실행 결과
```

<br>
<br>
<br>

### 4. _FX_SYSTEM option 별 기능

(1) _FX_S1615

| 매크로 및 함수 이름 | 기능 |
| ---- | ---- |
| FX_S1615_ADD(a,b) | fx_s1615로 표현된 두 값을 더해준다.  |
| FX_S1615_SUB(a,b) | fx_s1615로 표현된 두 값을 빼준다. |
| FX_S1615_MUL(a,b) | fx_s1615로 표현된 두 값을 곱해준다. |
| FX_S1615_DIV(a,b) | fx_s1615로 표현된 두 값을 나눠준다. |
| ---- | ---- |
| fx_s1615 sine_fx_s1615_int(fx_s1615 a) | fx_s1615로 표현된 값의 sine 을 구해준다.  |
| fx_s1615 sqrt_fx_s1615_int(fx_s1615 a) | fx_s1615로 표현된 값의 제곱근을 구해준다. |
| fx_s1615 power_fx_s1615_int(fx_s1615 a, double n) | fx_s1615로 표현된 값의 n승을 구해준다. |
| ---- | ---- |
| FX_1615_LONGLONG_MUL1(a,b) | fx_s1615로 표현된 값을 long long으로 cast 해준 수를 곱한 후, 15만큼 right shifting 해주어 곱셈을 수행한다. 속도는 가장 느리나 정밀도가 가장 높다. 또한 오버플로가 발생하지 않는다. |
| FX_1615_LONGLONG_MUL2(a,b) | fx_s1615로 표현된 값을 곱해주고 15만큼 right shifting해주어 곱셈을 수행한다. 속도는 빠르고 소수부 정밀도 손실 또한 없다. 하지만 정수부가 크면 오버플로의 가능성이 있으므로 절대값이 10 이하인 값의 연산에만 사용할 것을 권장 |
| FX_1615_LONGLONG_MUL3(a,b) | fx_s1615로 표현된 값인 a를 8만큼 right shifting 해주고, b를 7만큼 right shifiting 해준 후, 두 값을 곱해주어 곱셈을 수행한다. 소수부 정밀도에서 약간의 손실이 있으나 준수한 속도를 가지는 함수이다.  |
| ---- | ---- |
| FX_1615_LONGLONG_DIV01(a,b) | fx_s1615로 표현된 값을 long long으로 cast 해주고, a와 b를 각각 15만큼 right shfiting 하고 a 와 b를 나눠준 후, 15만큼 left shifting 해주어 나눗셈을 수행한다. 소수부가 대부분 손실 되므로 정수부가 큰 연산에 적합하다. | 
| FX_1615_LONGLONG_DIV02(a,b) | fx_s1615로 표현된 값을 long long으로 cast 해주고, a를 15만큼 left shfiting 하고 b와 나눠주어 나눗셈을 수행한다. 연산을 수행해도 손실되는 값이 거의 없어 정밀도가 높다. 32bit 시스템에선 가장 빠르나 64bit 시스템에선 느리다는 단점이 있다. |
| FX_1615_LONGLONG_DIV03(a,b) | fx_s1615로 표현된 값인 a를 5만큼 left shifting 해주고, b를 6만큼 right shfiting 하고 나눠준 후, 4만큼 left shifting 해주어 나눗셈을 수행한다. 약간의 정밀도 손해를 감수하되 시스템에 상관 없이 항상 준수한 속도의 연산을 수행한다. |

<br>
<br>

(2) _FX_S1516

| 매크로 및 함수 이름 | 기능 |
| ---- | ---- |
| FX_S1615_ADD(a,b) | fx_s1615로 표현된 두 값을 더해준다.  |
| FX_S1615_SUB(a,b) | fx_s1615로 표현된 두 값을 빼준다. |
| FX_S1615_MUL(a,b) | fx_s1615로 표현된 두 값을 곱해준다. |
| FX_S1615_DIV(a,b) | fx_s1615로 표현된 두 값을 나눠준다. |
| ---- | ---- |
| fx_s1615 sine_fx_s1615_int(fx_s1615 a) | fx_s1615로 표현된 값의 sine 을 구해준다.  |
| fx_s1615 sqrt_fx_s1615_int(fx_s1615 a) | fx_s1615로 표현된 값의 제곱근을 구해준다. |
| fx_s1615 power_fx_s1615_int(fx_s1615 a, double n) | fx_s1615로 표현된 값의 n승을 구해준다. |
| ---- | ---- |
| FX_1615_LONGLONG_MUL1(a,b) | fx_s1615로 표현된 값을 long long으로 cast 해준 수를 곱한 후, 15만큼 right shifting 해주어 곱셈을 수행한다. 속도는 가장 느리나 정밀도가 가장 높다. 또한 오버플로가 발생하지 않는다. |
| FX_1615_LONGLONG_MUL2(a,b) | fx_s1615로 표현된 값을 곱해주고 15만큼 right shifting해주어 곱셈을 수행한다. 속도는 빠르고 소수부 정밀도 손실 또한 없다. 하지만 정수부가 크면 오버플로의 가능성이 있으므로 절대값이 10 이하인 값의 연산에만 사용할 것을 권장 |
| FX_1615_LONGLONG_MUL3(a,b) | fx_s1615로 표현된 값인 a를 8만큼 right shifting 해주고, b를 7만큼 right shifiting 해준 후, 두 값을 곱해주어 곱셈을 수행한다. 소수부 정밀도에서 약간의 손실이 있으나 준수한 속도를 가지는 함수이다.  |
| ---- | ---- |
| FX_1615_LONGLONG_DIV01(a,b) | fx_s1615로 표현된 값을 long long으로 cast 해주고, a와 b를 각각 15만큼 right shfiting 하고 a 와 b를 나눠준 후, 15만큼 left shifting 해주어 나눗셈을 수행한다. 소수부가 대부분 손실 되므로 정수부가 큰 연산에 적합하다. | 
| FX_1615_LONGLONG_DIV02(a,b) | fx_s1615로 표현된 값을 long long으로 cast 해주고, a를 15만큼 left shfiting 하고 b와 나눠주어 나눗셈을 수행한다. 연산을 수행해도 손실되는 값이 거의 없어 정밀도가 높다. 32bit 시스템에선 가장 빠르나 64bit 시스템에선 느리다는 단점이 있다. |
| FX_1615_LONGLONG_DIV03(a,b) | fx_s1615로 표현된 값인 a를 5만큼 left shifting 해주고, b를 6만큼 right shfiting 하고 나눠준 후, 4만큼 left shifting 해주어 나눗셈을 수행한다. 약간의 정밀도 손해를 감수하되 시스템에 상관 없이 항상 준수한 속도의 연산을 수행한다. |

<br>
<br>

(3) _FX_S3231

<br>
<br>
(4) _FX_S3132

(5) _FX_S4716

(6) _FX_S2308

## 기능 별 비교

표 삽입하고 유효범위 넣으면 좋을 것 같아요!

## 실행 방법
make file & macro 주는법 명시하기