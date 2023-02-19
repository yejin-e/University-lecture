# Project-1
- main.cpp를 통해 class 생성하기
- class는 class.cpp 파일에 제작

## 조건
- 상속과 가상함수 사용  
- Point, Line, Circle → class로 구성  
- 멤버변수는 모두 private  

### class간 관계
- Point 클래스 ← has-a 관계 → Line, Circle 클래스
- Line, Circle 클래스 공통점은 부모 클래스(Shape 클래스)에 구성
- Shape 클래스 ← is-a 관계 → Line, Circle 클래스

### Line, Circle 클래스
- 속성 : 시작점, 끝점(좌상단점, 우하단점 좌표)
- 원은 사각형의 내접원으로 그릴 수 있음
- 동작 1 → 생성자 : 시작점, 끝점 좌표를 인자로 받아 속성에 저장
- 동작 2 → Draw(…)
    - Line class 는 속성(시작점, 끝점) 출력, 직선 그린다 출력
    - Circle class 는 속성(시작점, 끝점) 출력, 원 그린다 출력

### Draw(...) 함수
- 자식들의 Draw(...) 함수 내용(일부 동일 + 일부 다른 일) → 동일 한 내용을 부모에서 처리, 다른 내용은 자식에서 처리
