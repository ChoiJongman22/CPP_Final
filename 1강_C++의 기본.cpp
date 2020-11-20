#include <iostream>
using namespace std;

//변수의 이해

class A {
private:
	int a = 5; //멤버변수
public:
	A() {};//생성자
	A(int b) { b = a; }
	~A() {};//소멸자
	void B(int a) { //얘는 매개변수
		cout << "얘는 멤버함수(메서드) 입니다." << endl;
	}
};


//반환값이 있어? 없어?
void A(){
	cout << "5" << endl;
}

int B() {
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

	int a = 5; //얘는 정적 선언 그리고 전역변수(함수 바깥에서 선언)
	int* p = &a;//얘는 뭘까?? 그리고 포인터 변수
	//&는 주소연산자. 해당 변수의 주소를 출력한다. 주소를 사용하면 메모리에서의 위치를 알아낼 수 있다. 
	cout << p << endl;
	cout << a << endl;
	cout << *p << endl;
	cout << &a << endl;

	a = 10;
	cout << *p << endl;
	//10이 출력된다.
}