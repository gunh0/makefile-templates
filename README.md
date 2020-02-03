## Make

**make**는 소프트웨어 개발을 위해 유닉스 계열 운영 체제에서 주로 사용되는 프로그램 빌드 도구이다.

여러 파일들끼리의 의존성과 각 파일에 필요한 명령을 정의함으로써 프로그램을 컴파일할 수 있으며 최종 프로그램을 만들 수 있는 과정을 서술할 수 있는 표준적인 문법을 가지고 있다.

위의 구조로 기술된 파일(주로 Makefile이라는 파일명)을 `make`가 해석하여 프로그램 빌드를 수행하게 된다.



## Makefile

make을 실행하기 전에 프로젝트의 목록 및 컴파일 및 링크 규칙을 만들어야 한다.

이것은 보통 Makefile을 사용한다. 이 파일에 규칙을 입력하여 파일로 만든다.

### 규칙

```
TARGET ...: PREREQUISITES ...
	RECIPE
	...
```

또 다른 형식은

```
TARGETS: PREREQUISITES ; RECIPE
	RECIPE
	...
```

- TARGET

  실행 파일, object 파일, 라이브러리 등 목적 규칙을 정의한다. RECIPE에서 실행된 결과로 만들어 진다. RECIPE 여러개의 명령줄을 사용할 수가 있어 복잡한 기능도 수행이 가능하다. 생성파일이나 install 같은 기능적 블럭도 가능하다.

- PREREQUISITES

  TARGET을 만들 때, 의존성(연관관계)를 규정한다. 이 부분에 나열된 파일 중 수정된 파일이 있으면 TARGET을 다시 만든다.

- RECIPE

  TARGET을 만들기 위한 실행 파일이다. 이 실행 규칙에 따라 TARGET이 생성 된다. 주로 cc나 리눅스 명령어를 사용한다. 이 명령 줄은 여러 줄이 가능하다. 주의 할 것은 RECIPE 부분의 앞 공간은 키보드 Tab ↹을 사용해야 한다. Space키로 공간을 넣으면 안 된다.

```
     foo.o : foo.c defs.h       # module for twiddling the frobs
             cc -c -g foo.c
```

foo.c나 defs.h가 변경 되면 `cc -c -g foo.c`명령을 실행해 foo.o을 만든다.



### Reference

- https://www.gnu.org/software/make/manual/make.html

