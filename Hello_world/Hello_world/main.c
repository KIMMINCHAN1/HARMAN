#define _CRT_SECURE_NO_WARNINGS
#include <string.h>

#include <stdint.h>
#define MAX 20
#include <stdio.h> // 컴파일러에 지정된 폴더에서 찾음

#define APPLE 10          // define은 값을 지정할때 사용
#define NAME "사과"
#define OUTPUT printf("%s %d \n", NAME, APPLE)
#define CALC(x,y) ((x)*(y))
#define NUM 10///////


/*
int main()
{
	printf("hi ! \n");

	return 0;
}


void fun();
int main()
{
	printf("%s %d \n", NAME, APPLE);
	OUTPUT;
	printf("%d \n", CALC(2, 4));
	return 0;
#if NUM < 10
	printf("NUM은 1보다 작다 \n");
#else if NUM >10
	printf("NUM은 1보다 크다 \n");
#else
	printf("NUM은 10이다 \N");
#endif

#ifdef NUM  // 만약 NUM이 정의 되어있다면
	printf("NUM은 %d 입니다 \n"); // 실행
#else // 아니면
	printf("NUM은 정의되어 있지 않습니다  \n");
#endif // if 열은거로 끝냄

	printf("컴파일 날짜 : %s \n", __DATE__); // 마지막으로 컴파일된 날짜로 치환
	printf("컴파일 시간 : %s \n", __TIME__); // 시간
	printf("컴파일 날짜 요일 시간 : %s \n", __TIMESTAMP__); // 날짜, 시간 (치환된 문자열)
	printf("라인 번호 : %d \n", __LINE__); // 라인번호(치환된 정수열)
	fun(); // 사용자 정의 함수
	printf("현재 소스 파일 위치 : %s \n "__FUNCTION__); // 현재 매크로가 호출된 함수명으로 치환
	return 0;
}

void fun()
{
	printf("현재 함수 : %s \n", __FUNCTION__);
}

int main()
{
	int num = 12345;
	float x;
	x = 12.34567;

	printf("%f \n", num); // 폭과 정밀도 지정안함
	printf("%2f \n", num*10); // 정밀도지정(반올림함)
	printf("%8.2f \n", num*100); // 폭과 정밀도 지정
}

int main()
{
	char name[20]; // 이름배열
	int age; // 나이
	char gender; // 성별

	printf("이름, 나이, 성별(M/F)순으로 입력하세요 \n");
	scanf("%s, %d, %c", name, &age, &gender);
	printf("이름 : %s \n", name);
	printf("나이 : %s \n", age);
	printf("성별 : %s \n", gender);


}

int main() {
	char ch;
	int num;
	double x;
	printf("char형의 바이트 크기 : %d \n", sizeof(char));
	printf("short형의 바이트 크기 : %d \n", sizeof(short));
	printf("long형의 바이트 크기 : %d \n", sizeof(long));
	printf("long long형의 바이트 크기 : %d \n", sizeof(long long));
	printf("float형의 바이트 크기 : %d \n", sizeof(float));
	printf("double형의 바이트 크기 : %d \n", sizeof(double));
	printf("long double형의 바이트 크기 : %d \n", sizeof(long double));

	printf("변수 ch 의 바이트 크기 : %d \n", sizeof(ch));
	printf("변수 num 의 바이트 크기 : %d \n", sizeof(num));
	printf("변수 x 의 바이트 크기 : %d \n", sizeof(x));

}

int main() {
	int price;
	price = 100;
	printf("%d \n", price);
}

int main() {
	int amount = 0;
	int price = 0;
	int total_price = 0;
	printf("amount = %d, price =%d \n", amount, price);

	printf("수량?");
	scanf("%d", &amount);

	price = 2000;
	total_price = amount * price;

	printf("합계 : %d 원 \n", total_price);


}

int main() {
	int n = 1;
	int r1 = n << 1;
	int r2 = n << 2;
	int r3 = n << 3;
	int r4 = n << 4;

	printf("결과 1 : %d \n", r1);
	printf("결과 2 : %d \n", r2);
	printf("결과 3 : %d \n", r3);
	printf("결과 4 : %d \n", r4);

}

int main() {
	unsigned short data = 0x5678;
	unsigned short msk1 = 0xf000;
	unsigned short msk2 = 0x0f00;
	unsigned short msk3 = 0x00f0;
	unsigned short msk4 = 0x000f;

	printf("결과 1 = %#.4x \n", data & msk1);
	printf("결과 2 = %#.4x \n", data & msk2);
	printf("결과 3 = %#.4x \n", data & msk3);
	printf("결과 4 = %#.4x \n", data & msk4);   // and 연산자

	printf("결과 1 = %#.4x \n", data | msk1);
	printf("결과 2 = %#.4x \n", data | msk2);
	printf("결과 3 = %#.4x \n", data | msk3);
	printf("결과 4 = %#.4x \n", data | msk4);    // or 연산자

}

int main() {
	int a, b, c;
	double average;

	printf("정수 3개를 입력하시오 : ");
	scanf("%d %d %d", &a, &b, &c);

	average = (double)(a + b + c) / 3;
	printf("평균 : %f \n", average);
}

int main() {
	int num = 0;
	printf("숫자를 입력하세요 ");
	scanf("%d", &num);
	if (num < 5) {
		printf("입력하신 숫자는 5보다 작습니다.\n");
	}
	else if (num == 5)
	{
		printf("입력하신 숫자는 5입니다.\n");
	}
	else
	{
		printf("입력하신 숫자는 5보다 큽니다.\n");
	}
	return 0;
}






%s // 문자열 뿌려줄 때
%d // 출력형태 : 부호있는 10진수 정수
%8d // 8은 문자열에 자릿수 지정
%08d // 0은 앞에 자리가 비었을때 출력

*/


/*
int main()
{
	int i, j;
	for (i = 0; i < 5; i++)

	{
		for (j = 0; j <= i; j++)
			printf("*");
			printf("\n");
	}
	for (i = 3; i >= 0; i--) {
		for(j=0;j<=i;j++)
			printf("*");
		printf("\n");
	}


	return 0;
}


주소 연산자(&) : 변수의 이름앞에 사용 해당 변수의 주소값을 반환(번지 연산자)
참조 연산자(*) : 포인터의 이름이나 주소앞에 사용, 포인터가 가리키는 주소에 저장된 값을 반환

데이터형 *변수형; 데이터형 *변수명;
int *ptr; // ptr이 가리키는 놈이 int형임 // 4byte
long *ptr1; // 4byte

int *ptr = 0; // 가능
int *ptr = NULL ; // 권장되는 초기화 방법
*/

/*
int main() {
	int *pi;
	double *pd;
	char *pc;
	printf("int형의 포인터 크기 : %d \n", sizeof(pi));
	printf("int형의 포인터 크기 : %d \n", sizeof(pd));
	printf("int형의 포인터 크기 : %d \n", sizeof(pc));
} // 전부 8byte가 나옴 - why ? 64bit 운영체제라서

int main() {
	int a;
	a = 2;
	printf("%p \n", &a);
	return 0;
}

*/

/*
int main() {
	int *p; // 포인터 변수
	int a; // 지역변수
	p = &a;
	 // a = 3;
	*p = 3;

	printf("a의 값 %d \n", a);
	printf("p의 값 %d \n", *p);
}

int main() {
	int a, b; //현재 상태는 쓰레기 값
	int *ptr;	// 포인터 변수선언은 했으나 초기화가 안된상태
	ptr = &a;	// 포인터변수에 a 주소값 넣어줌
	*ptr = 2;	// 포인터변수가 바라보는곳(a)에 2를 저장
	ptr = &b;	// 포인터변수가 바라보는 곳을 변경 a-> b
	*ptr = 3;	// 포인터변수가 바라보는 곳(b)에 3을 저장
	printf("a의 값 : %d \n", a);
	printf("b의 값 : %d \n", b);
}
*/

/*
*/
//int main() {
//	int a;
//	int *pa;
//	pa = &a;
//	printf("pa의 값 : %p \n", pa);
//	printf("(pa+1)의 값 : %p \n", pa + 1);
//}

//int swap_value(int i);
//int main() {
//	int i = 0;
//	printf("호출 이전 i값: %d \n", i);
//	swap_value(i);
//	printf("호출 이후 i값: %d \n", i);
//}
//int swap_value(int i) {
//	i = 3;
//	return 0;
//}

//int swap_value(int *ptr_i);
//int main() {
//	int i = 0;
//	printf("i변수의 주소값 : %p \n\n\n", &i);
//		printf("호출 이전 i값: %d \n", i);
//		swap_value(&i);
//		printf("호출 이후 i값: %d \n", i);
//}
//int swap_value(int *ptr_i) {
//	printf("----swaq_value함수 안에서 ----\n");
//	printf("ptr_i의 값 : %p \n", ptr_i);
//	printf("ptr_i가 가리키는 값 : % d \n", *ptr_i);
//	*ptr_i = 3;
//	printf("----swaq_value함수 끝 ----\n");
//	return 0;
//
//}

// 배열 : 같은 데이터형들의 유한 집합
// 구성요소 각각을 = element
// 구성요소의 위치(차례) = index
// 시작은 0부터, index값은 0을 포함하여 양의 정수값을 가진다
// 배열은 연속된 메모리에 할당된다

//int main() {
//	int arr[5]; // 크기가 5인 배열 선언
//	int byte_size = 0; // 배열의 바이트 크기를 저장할 변수
//	int size = 0; // 배열의 크기를 저장할 변수
//	int i;
//
//	byte_size = sizeof(arr); // 배열의 바이트 크기
//	printf("배열의 바이트크기 : %d \n", byte_size);
//	size = sizeof(arr) / sizeof(arr[0]); // 배열의 크기(원소의 갯수)
//	printf("배열의 크기 : %d \n", size);
//}

//int main() {
//	int arr[5] = { 1,2,3,4,5 };
//	arr[0] = 3;
//	arr[2] = 5;
//	printf("array 3번째 원소 : %d\n", arr[2]);
//}
//
//int main() {
//	int arr[10] ;
//	int i = 5;
//
//	arr[i] = 3;
//	arr[i+1] = 5;
//	arr[i + 3] = 7;
//
//	printf("array 6번째 원소 : %d\n", arr[i]);
//	printf("array 7번째 원소 : %d\n", arr[i+1]);
//	printf("array 9번째 원소 : %d\n", arr[i+3]);
//}

//#define ARR_SIZE 5
//int add(int a, int b) {
//	return a + b;
//}
//int main() {
//	int arr[ARR_SIZE] = { 0,1,3 };
//	int i;
//	arr[0] = 5;
//	arr[1] = arr[0] + 10;
//	arr[2] = add(arr[0],arr[1]);
//	printf("정수를 두개 입력하시오 :");
//	scanf("%d %d", &arr[3], &arr[4]);
//	for (i = 0; i < ARR_SIZE; i++) {
//		printf("%d \n", arr[i]);
//	}
//	
//	printf("\n");
//	return 0;
//
//}


//int main() {
//	int arr[4] = { 3,5,7,9 };
//	printf("arr배열의 첫번째 요소의 주소값 : %p\t 요소값 : %d\n",&arr[0],arr[0]);
//	printf("arr배열의 두번째 요소의 주소값 : %p\t 요소값 : %d\n", &arr[1], arr[1]);
//	printf("arr배열의 세번째 요소의 주소값 : %p\t 요소값 : %d\n", &arr[2], arr[2]);
//	printf("arr배열의 네번째 요소의 주소값 : %p\t 요소값 : %d\n", &arr[3], arr[3]);
//}
//
//int main() {
//	int arr2[3][3] = {
//		{1,4,6},{8,5,2},{7,9,3}
//	};
//	int i;
//	for (i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%d행 %d열 : %d ", i, j, arr2[i][j]);
//			if (j < 3)printf(" | ");
//			if (j == 2)printf("\n");
//		}
//	}
//}

//int main() {
//	int arr[5] = { 1,2,3,4,5 };
//	int *parr;
//	int i;
//	parr = &arr[0];
//	for (i = 0; i < 5; i++) {
//		printf("arr[%d]의 주소값 : %p", i, &arr[i]);
//		printf("(arr + %d)의 주소값 : %p", i, (parr+i));
//
//		if (&arr[i] == (parr + i)) {
//			printf("\t");
//			printf("일치한다  \n");
//		}
//		else {
//			printf("\t");
//			printf("불일치한다 \n");
//		}
//	}
//}
//
//int main() {
//	int arr[5] = { 1,2,3,4,5 };
//	int *parr;
//	int i;
//	parr = &arr[0];
//	printf("arr[3] = %d\n *(parr+3) =%d\n", arr[3], *(parr + 3));
//}
//
//int main() {
//	int arr[5] = { 1,2,3,4,5 };
//
//	printf("arr의 정체 : %p\n", arr);
//	printf("arr[0]의 주소값 : %p\n", &arr[0]);
//}
//
//
//int main() {
//	int arr[3] = { 1,2,3 };
//	int *parr;
//	parr = arr;
//	printf("arr[1] : %d\n", arr[1]);
//	printf("parr[1] : %d\n", parr[1]);
//
//}
//
//int main() {
//	int a;
//	int *pa;
//	int **ppa;
//	pa = &a;
//	ppa = &pa;
//}

//int main() {
//	int arr[2][3];
//	printf("arr[0] : %p\n", arr[0]);
//	printf("&arr[0][0] : %p\n", &arr[0][0]);
//	printf("arr[1] : %p\n", arr[1]);
//	printf("&arr[1][0] : %p\n", &arr[1][0]);
//
//}

//int main() {
//	int arr[2][3] = {
//		{1,2,3},{4,5,6}
//	};
//	printf("전체크기 : %d\n", sizeof(arr));
//	printf("총 열의 개수 : %d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
//	printf("총 행의 개수 : %d\n", sizeof(arr) / sizeof(arr[0]));
//	}

//typedef struct human {            //이 자체가 int, double과 같은 데이터형임
//	int age;
//	int height;
//	int weight;
//} human_info;
//
//int main()                           //C파일은 main함수가 반드시 하나가 있어야하고 프로그램을 실행시키면 가장 먼저 찾는 함수임
//{
//	// struct human info;   //info라는 변수를 구조체데이터형으로 선언
//	human_info.age = 99;
//	human_info.height = 185;
//
//	int i;
//	i = 0;
//	/*info.age = 99;
//	info.height = 185;
//	info.weight = 80;*/
//
//	printf("info에 대한 정보 \n");
//	printf("나이      : %d \n", info.age);
//	printf("키      : %d \n", info.height);
//	printf("몸무게   : %d \n", info.weight);
// }

	//struct contact{            //이 자체가 int, double과 같은 데이터형임
	//	char name[20];
	//	char phone[20];
	//	int ringtone;
	//};

	//int main() {
	//	struct contact ct = { "김민찬", "01012345678", 0 };
	//	struct contact ct1 = { 0 }, ct2 = { 0 };
	//	ct.ringtone = 5;
	//	strcpy(ct.phone, "01000000000");
	//	printf("이름 : %s\n", ct.name);
	//	printf("번호 : %s\n", ct.phone);
	//	printf("벨소리 : %d\n", ct.ringtone);

	//	printf("이름? : ");
	//	scanf("%s", ct2.name);
	//	printf("번호? : ");
	//	scanf("%s", ct2.phone);
	//	printf("벨소리? : ");
	//	scanf("%d", ct2.ringtone);
	//	printf("이름 : %s\n", ct.name);
	//	printf("번호 : %s\n", ct.phone);
	//	printf("벨소리 : %d\n", ct.ringtone);

	//}

	//struct test {
	//	int a, b;
	//};
	//int main() {
	//	struct test st;
	//	struct test *ptr; // struct test형을 가리키는 포인터 변수이다.(구조체가 아니다)
	//	ptr = &st;
	//	(*ptr).a = 1;   // 같은 식
	//	ptr->a = 3;		// 같은 식
	//	(*ptr).b = 2;
	//}

	struct test {
		int a;
	};
	int main() {
		struct test t;
		struct test *pt = &t;
		(*pt).a = 0;
		printf("t.a : %d\n", t.a);
		pt->a = 1;
		printf("t.a : %d", t.a);
	}

	// 구조체 변수끼리 직접 관계연산자로 비교 불가
	// if(ct1==ct2) <<불가
	// if(strcmp(ct.name, ct2.name)==0)


	char buf[100];
	int main(int argc, char *argv[])
	{
		int start = 0x09000000;
		int length = 500;

		char c = 'A';
		int i = 1;
		float a = 2.0;
		double d = 3.14;
		void *p = malloc(100);

		*(double *)p = d;

		printf("c=%8c [0x08x] \n", c, &c);
		printf("c=%8d [0x08x] \n", i, &i);
		printf("c=%8f [0x08x] \n", a, &a);
		printf("c=%8f [0x08x] \n", d, &d);
		printf("c=%8f [0x08x] \n", *(double*)p, p);

	}

	void MemoryDump(int start, int length)
	{
		void *vp = (void *)start;
	}

	