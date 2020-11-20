#include <iostream>
using namespace std;

//변수의 이해

class U {
private:
	int a; //멤버변수
public:
	U() { a = 0; }//생성자
	U(int b) { a = b; }//인수가 있는 생성자
	~U() {};//소멸자
	void B(int a) { //얘는 매개변수
		cout << a << endl;
		cout << "얘는 멤버함수(메서드) 입니다." << endl;
	}
};

//구조체
struct Car {
	int num;
	double gas;
};

//반환값이 있어? 없어?
void A(){
	cout << "5" << endl;
}

int C() {
	int k = 5;
	return k;
}


//함수 템플릿
template <class T>
T max(T x, T y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}


//왜 swap함수를 이렇게 사용해야 하는가?
void swap(int* px, int* py) {
	int tmp;
	tmp = *px;
	*px = *py;
	*py = tmp;
}




int main() {
	//구조체 인스턴스(객체) 선언 및 사용
	Car car1 = { 1234,25.5 };
	Car car2 = { 4567,52.2 };
	cout << car2.gas << endl;
	cout << car1.num << endl;
	cout << car1.gas << endl;

	//클래스의 객체 선언 및 사용

	int y = C();
	cout << y << endl;
	U ab;
	ab.B(5);

	//배열 선언
	int test[5] = { 10,20,30,40,50 };
	//배열의 인덱스는 0부터 시작한다. 그렇다면 아래는 뭐가 출력되는걸까?
	cout << test[3] << endl;
	test[3] = 55;
	cout << test[3] << endl;


	//2차원배열
	int test1[2][5] = { {10,20,30,40,50},{60,70,80,90,100} };
	//행렬의 개념. 다들 알고 있나요?

	

	//포인터의 개념

	int a = 5; //얘는 정적 선언 그리고 지역변수
	int* p = &a;//얘는 뭘까?? 그리고 포인터 변수
	//&는 주소연산자. 해당 변수의 주소를 출력한다. 주소를 사용하면 메모리에서의 위치를 알아낼 수 있다. 
	cout << p << endl;
	cout << a << endl;
	cout << *p << endl;
	cout << &a << endl;

	a = 10;
	cout << *p << endl;
	//10이 출력된다.


	//배열과 포인터의 상관관계

	int test2[5] = { 10,20,30,40,50 };

	cout << test2 << endl; //주소
	cout << test2[0] << endl;
	cout << *test2 << endl; //0번째 인덱스의 값을 반환
	cout << test2[1] << endl;
	cout << *(test2 + 1) << endl;

	//위의 차이를 구분하여 공부하자

	//문자열

	string c = "C++";
	//이렇게나 간단하지만 슬프게도 이걸 모를거야.
	char str[6] = "Hello";
	for (int i = 0; i < 6; i++) {
		cout << str[i] << endl;
		//\0가 마지막에 있다. 
	}
	char str1[] = "Hello";
	char* str2 = "Hello"; //준수모드를 꺼주자!
	str1[3] = 'k';
	cout << str1 << endl;
	cout << str2 << endl;
}

//다음 시간 예고

//동적할당, 연산자 오버로딩, STL, 깊은 복사/얕은 복사 , 