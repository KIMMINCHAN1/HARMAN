#define _CRT_SECURE_NO_WARNINGS
#include <string.h>

#include <stdint.h>
#define MAX 20
#include <stdio.h> // �����Ϸ��� ������ �������� ã��

#define APPLE 10          // define�� ���� �����Ҷ� ���
#define NAME "���"
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
	printf("NUM�� 1���� �۴� \n");
#else if NUM >10
	printf("NUM�� 1���� ũ�� \n");
#else
	printf("NUM�� 10�̴� \N");
#endif

#ifdef NUM  // ���� NUM�� ���� �Ǿ��ִٸ�
	printf("NUM�� %d �Դϴ� \n"); // ����
#else // �ƴϸ�
	printf("NUM�� ���ǵǾ� ���� �ʽ��ϴ�  \n");
#endif // if �����ŷ� ����

	printf("������ ��¥ : %s \n", __DATE__); // ���������� �����ϵ� ��¥�� ġȯ
	printf("������ �ð� : %s \n", __TIME__); // �ð�
	printf("������ ��¥ ���� �ð� : %s \n", __TIMESTAMP__); // ��¥, �ð� (ġȯ�� ���ڿ�)
	printf("���� ��ȣ : %d \n", __LINE__); // ���ι�ȣ(ġȯ�� ������)
	fun(); // ����� ���� �Լ�
	printf("���� �ҽ� ���� ��ġ : %s \n "__FUNCTION__); // ���� ��ũ�ΰ� ȣ��� �Լ������� ġȯ
	return 0;
}

void fun()
{
	printf("���� �Լ� : %s \n", __FUNCTION__);
}

int main()
{
	int num = 12345;
	float x;
	x = 12.34567;

	printf("%f \n", num); // ���� ���е� ��������
	printf("%2f \n", num*10); // ���е�����(�ݿø���)
	printf("%8.2f \n", num*100); // ���� ���е� ����
}

int main()
{
	char name[20]; // �̸��迭
	int age; // ����
	char gender; // ����

	printf("�̸�, ����, ����(M/F)������ �Է��ϼ��� \n");
	scanf("%s, %d, %c", name, &age, &gender);
	printf("�̸� : %s \n", name);
	printf("���� : %s \n", age);
	printf("���� : %s \n", gender);


}

int main() {
	char ch;
	int num;
	double x;
	printf("char���� ����Ʈ ũ�� : %d \n", sizeof(char));
	printf("short���� ����Ʈ ũ�� : %d \n", sizeof(short));
	printf("long���� ����Ʈ ũ�� : %d \n", sizeof(long));
	printf("long long���� ����Ʈ ũ�� : %d \n", sizeof(long long));
	printf("float���� ����Ʈ ũ�� : %d \n", sizeof(float));
	printf("double���� ����Ʈ ũ�� : %d \n", sizeof(double));
	printf("long double���� ����Ʈ ũ�� : %d \n", sizeof(long double));

	printf("���� ch �� ����Ʈ ũ�� : %d \n", sizeof(ch));
	printf("���� num �� ����Ʈ ũ�� : %d \n", sizeof(num));
	printf("���� x �� ����Ʈ ũ�� : %d \n", sizeof(x));

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

	printf("����?");
	scanf("%d", &amount);

	price = 2000;
	total_price = amount * price;

	printf("�հ� : %d �� \n", total_price);


}

int main() {
	int n = 1;
	int r1 = n << 1;
	int r2 = n << 2;
	int r3 = n << 3;
	int r4 = n << 4;

	printf("��� 1 : %d \n", r1);
	printf("��� 2 : %d \n", r2);
	printf("��� 3 : %d \n", r3);
	printf("��� 4 : %d \n", r4);

}

int main() {
	unsigned short data = 0x5678;
	unsigned short msk1 = 0xf000;
	unsigned short msk2 = 0x0f00;
	unsigned short msk3 = 0x00f0;
	unsigned short msk4 = 0x000f;

	printf("��� 1 = %#.4x \n", data & msk1);
	printf("��� 2 = %#.4x \n", data & msk2);
	printf("��� 3 = %#.4x \n", data & msk3);
	printf("��� 4 = %#.4x \n", data & msk4);   // and ������

	printf("��� 1 = %#.4x \n", data | msk1);
	printf("��� 2 = %#.4x \n", data | msk2);
	printf("��� 3 = %#.4x \n", data | msk3);
	printf("��� 4 = %#.4x \n", data | msk4);    // or ������

}

int main() {
	int a, b, c;
	double average;

	printf("���� 3���� �Է��Ͻÿ� : ");
	scanf("%d %d %d", &a, &b, &c);

	average = (double)(a + b + c) / 3;
	printf("��� : %f \n", average);
}

int main() {
	int num = 0;
	printf("���ڸ� �Է��ϼ��� ");
	scanf("%d", &num);
	if (num < 5) {
		printf("�Է��Ͻ� ���ڴ� 5���� �۽��ϴ�.\n");
	}
	else if (num == 5)
	{
		printf("�Է��Ͻ� ���ڴ� 5�Դϴ�.\n");
	}
	else
	{
		printf("�Է��Ͻ� ���ڴ� 5���� Ů�ϴ�.\n");
	}
	return 0;
}






%s // ���ڿ� �ѷ��� ��
%d // ������� : ��ȣ�ִ� 10���� ����
%8d // 8�� ���ڿ��� �ڸ��� ����
%08d // 0�� �տ� �ڸ��� ������� ���

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


�ּ� ������(&) : ������ �̸��տ� ��� �ش� ������ �ּҰ��� ��ȯ(���� ������)
���� ������(*) : �������� �̸��̳� �ּҾտ� ���, �����Ͱ� ����Ű�� �ּҿ� ����� ���� ��ȯ

�������� *������; �������� *������;
int *ptr; // ptr�� ����Ű�� ���� int���� // 4byte
long *ptr1; // 4byte

int *ptr = 0; // ����
int *ptr = NULL ; // ����Ǵ� �ʱ�ȭ ���
*/

/*
int main() {
	int *pi;
	double *pd;
	char *pc;
	printf("int���� ������ ũ�� : %d \n", sizeof(pi));
	printf("int���� ������ ũ�� : %d \n", sizeof(pd));
	printf("int���� ������ ũ�� : %d \n", sizeof(pc));
} // ���� 8byte�� ���� - why ? 64bit �ü����

int main() {
	int a;
	a = 2;
	printf("%p \n", &a);
	return 0;
}

*/

/*
int main() {
	int *p; // ������ ����
	int a; // ��������
	p = &a;
	 // a = 3;
	*p = 3;

	printf("a�� �� %d \n", a);
	printf("p�� �� %d \n", *p);
}

int main() {
	int a, b; //���� ���´� ������ ��
	int *ptr;	// ������ ���������� ������ �ʱ�ȭ�� �ȵȻ���
	ptr = &a;	// �����ͺ����� a �ּҰ� �־���
	*ptr = 2;	// �����ͺ����� �ٶ󺸴°�(a)�� 2�� ����
	ptr = &b;	// �����ͺ����� �ٶ󺸴� ���� ���� a-> b
	*ptr = 3;	// �����ͺ����� �ٶ󺸴� ��(b)�� 3�� ����
	printf("a�� �� : %d \n", a);
	printf("b�� �� : %d \n", b);
}
*/

/*
*/
//int main() {
//	int a;
//	int *pa;
//	pa = &a;
//	printf("pa�� �� : %p \n", pa);
//	printf("(pa+1)�� �� : %p \n", pa + 1);
//}

//int swap_value(int i);
//int main() {
//	int i = 0;
//	printf("ȣ�� ���� i��: %d \n", i);
//	swap_value(i);
//	printf("ȣ�� ���� i��: %d \n", i);
//}
//int swap_value(int i) {
//	i = 3;
//	return 0;
//}

//int swap_value(int *ptr_i);
//int main() {
//	int i = 0;
//	printf("i������ �ּҰ� : %p \n\n\n", &i);
//		printf("ȣ�� ���� i��: %d \n", i);
//		swap_value(&i);
//		printf("ȣ�� ���� i��: %d \n", i);
//}
//int swap_value(int *ptr_i) {
//	printf("----swaq_value�Լ� �ȿ��� ----\n");
//	printf("ptr_i�� �� : %p \n", ptr_i);
//	printf("ptr_i�� ����Ű�� �� : % d \n", *ptr_i);
//	*ptr_i = 3;
//	printf("----swaq_value�Լ� �� ----\n");
//	return 0;
//
//}

// �迭 : ���� ������������ ���� ����
// ������� ������ = element
// ��������� ��ġ(����) = index
// ������ 0����, index���� 0�� �����Ͽ� ���� �������� ������
// �迭�� ���ӵ� �޸𸮿� �Ҵ�ȴ�

//int main() {
//	int arr[5]; // ũ�Ⱑ 5�� �迭 ����
//	int byte_size = 0; // �迭�� ����Ʈ ũ�⸦ ������ ����
//	int size = 0; // �迭�� ũ�⸦ ������ ����
//	int i;
//
//	byte_size = sizeof(arr); // �迭�� ����Ʈ ũ��
//	printf("�迭�� ����Ʈũ�� : %d \n", byte_size);
//	size = sizeof(arr) / sizeof(arr[0]); // �迭�� ũ��(������ ����)
//	printf("�迭�� ũ�� : %d \n", size);
//}

//int main() {
//	int arr[5] = { 1,2,3,4,5 };
//	arr[0] = 3;
//	arr[2] = 5;
//	printf("array 3��° ���� : %d\n", arr[2]);
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
//	printf("array 6��° ���� : %d\n", arr[i]);
//	printf("array 7��° ���� : %d\n", arr[i+1]);
//	printf("array 9��° ���� : %d\n", arr[i+3]);
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
//	printf("������ �ΰ� �Է��Ͻÿ� :");
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
//	printf("arr�迭�� ù��° ����� �ּҰ� : %p\t ��Ұ� : %d\n",&arr[0],arr[0]);
//	printf("arr�迭�� �ι�° ����� �ּҰ� : %p\t ��Ұ� : %d\n", &arr[1], arr[1]);
//	printf("arr�迭�� ����° ����� �ּҰ� : %p\t ��Ұ� : %d\n", &arr[2], arr[2]);
//	printf("arr�迭�� �׹�° ����� �ּҰ� : %p\t ��Ұ� : %d\n", &arr[3], arr[3]);
//}
//
//int main() {
//	int arr2[3][3] = {
//		{1,4,6},{8,5,2},{7,9,3}
//	};
//	int i;
//	for (i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%d�� %d�� : %d ", i, j, arr2[i][j]);
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
//		printf("arr[%d]�� �ּҰ� : %p", i, &arr[i]);
//		printf("(arr + %d)�� �ּҰ� : %p", i, (parr+i));
//
//		if (&arr[i] == (parr + i)) {
//			printf("\t");
//			printf("��ġ�Ѵ�  \n");
//		}
//		else {
//			printf("\t");
//			printf("����ġ�Ѵ� \n");
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
//	printf("arr�� ��ü : %p\n", arr);
//	printf("arr[0]�� �ּҰ� : %p\n", &arr[0]);
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
//	printf("��üũ�� : %d\n", sizeof(arr));
//	printf("�� ���� ���� : %d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
//	printf("�� ���� ���� : %d\n", sizeof(arr) / sizeof(arr[0]));
//	}

//typedef struct human {            //�� ��ü�� int, double�� ���� ����������
//	int age;
//	int height;
//	int weight;
//} human_info;
//
//int main()                           //C������ main�Լ��� �ݵ�� �ϳ��� �־���ϰ� ���α׷��� �����Ű�� ���� ���� ã�� �Լ���
//{
//	// struct human info;   //info��� ������ ����ü������������ ����
//	human_info.age = 99;
//	human_info.height = 185;
//
//	int i;
//	i = 0;
//	/*info.age = 99;
//	info.height = 185;
//	info.weight = 80;*/
//
//	printf("info�� ���� ���� \n");
//	printf("����      : %d \n", info.age);
//	printf("Ű      : %d \n", info.height);
//	printf("������   : %d \n", info.weight);
// }

	//struct contact{            //�� ��ü�� int, double�� ���� ����������
	//	char name[20];
	//	char phone[20];
	//	int ringtone;
	//};

	//int main() {
	//	struct contact ct = { "�����", "01012345678", 0 };
	//	struct contact ct1 = { 0 }, ct2 = { 0 };
	//	ct.ringtone = 5;
	//	strcpy(ct.phone, "01000000000");
	//	printf("�̸� : %s\n", ct.name);
	//	printf("��ȣ : %s\n", ct.phone);
	//	printf("���Ҹ� : %d\n", ct.ringtone);

	//	printf("�̸�? : ");
	//	scanf("%s", ct2.name);
	//	printf("��ȣ? : ");
	//	scanf("%s", ct2.phone);
	//	printf("���Ҹ�? : ");
	//	scanf("%d", ct2.ringtone);
	//	printf("�̸� : %s\n", ct.name);
	//	printf("��ȣ : %s\n", ct.phone);
	//	printf("���Ҹ� : %d\n", ct.ringtone);

	//}

	//struct test {
	//	int a, b;
	//};
	//int main() {
	//	struct test st;
	//	struct test *ptr; // struct test���� ����Ű�� ������ �����̴�.(����ü�� �ƴϴ�)
	//	ptr = &st;
	//	(*ptr).a = 1;   // ���� ��
	//	ptr->a = 3;		// ���� ��
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

	// ����ü �������� ���� ���迬���ڷ� �� �Ұ�
	// if(ct1==ct2) <<�Ұ�
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

	