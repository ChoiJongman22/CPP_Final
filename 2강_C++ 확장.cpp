#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

//동적할당
//메모리 할당을 미리하는게 아니라 프로그램이 실행 중에 메모리 할당하고 프로그램이 끝나면 해제

//스택, 힙공간은 프로그램 실행시 런타임 크기가 결정된다.
//데이터와 코드부분은 컴파일러에 의해 컴파일시 크기가 결정됩니다. 
//스택공간은 지역변수와 매개변수등이 할당되는 임시적인 영역
//힙공간은 동적으로 메모리 할당하는 곳이며 생성 중 크기를 결정한다.
//데이터공간은 전역변수와 정적변수, 초기화된 배열 등이 존재한다.
//코드는 프로그램의 명령어나 기계어 명령이 존재한다.

//C++에서는 동적할당시 new를 해제시 delete를 사용한다.


//int main(void) {
//    int* p = new int[5];
//    for (int i = 0; i < 5; i++) {
//        p[i] = i + 1;
//    }
//    for (int i = 0; i < 5; i++) {
//        cout << p[i] << "\n";
//    }
//    delete[] p;
//    return 0;
//}


//void main() {
//	char* str;
//
//	str = new char[1000];
//	if (str == NULL) {
//		cout << "Insuffcient memory available" << endl;
//	}
//	else {
//		cout << "Allocated 1000 bytes" << endl;
//		delete[] str;
//		cout << "Memory freed" << endl;
//	}
//}


//2차원 동적할당(배열안에 배열)

//int** alloc2dint(int rows, int cols) {
//	if (rows <= 0 || cols <= 0) { return NULL; }
//
//	int** mat = new int* [rows];
//	for (int i = 0; i < rows; i++) {
//		mat[i] = new int[cols];
//	}
//	return mat;
//}
//
//void free2dint(int** mat, int rows, int cols = 0) {
//	if (mat != null) {
//		for (int i = 0; i < rows; i++) {
//			delete[] mat[i];
//		}
//		delete[] mat;
//	}
//}
//
//void set2drandom(int** mat, int rows, int cols) {
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			mat[i][j] = rand() % 100;
//		}
//	}
//}
//
//void print2dint(int** mat, int rows, int cols) {
//	cout << "행의 수 : " << rows << " 열의 수 : " << cols;
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			cout << mat[i][j];
//		}
//		cout << endl;
//	}
//}
//
//
//void main() {
//	int** mat;
//	int rows, cols;
//
//	cout << "행과 열의 크기를 입력하세요." << endl;
//	cin >> rows >> cols;
//	mat = alloc2dint(rows, cols);
//	set2drandom(mat, rows, cols);
//	print2dint(mat, rows, cols);
//	free2dint(mat, rows, cols);
//}

//생성자 사용해보기
//class Person {
//private:
//    char* name;
//    int age;
//    char* job;
//public:
//    void GetInfo();
//    void SetInfo(char* n, int _a, char* j);
//};
//
//void Person::GetInfo()
//{
//    cout << "이름: " << name << ", 나이: " << age << ", 직장: " << job << endl;
//}
//
//void Person::SetInfo(char* n, int a, char* j)
//{
//    name = n;
//    age = a;
//    job = j;
//}
//
//int main()
//{
//    Person jjong;
//    jjong.SetInfo("종만", 28, "개발자");
//    jjong.GetInfo();
//    return 0;
//}


//복사 생성자
//class Test {
//private:
//	int num;
//public:
//	Test(int a) {
//		num = a;
//	}
//
//	void showData() {
//		cout << "num: " << num << endl;
//	}
//};
//
//int main() {
//	Test tc1(50);
//	Test tc2 = tc1;
//	tc2.showData();
//	return 0;
//}

//얕은 복사
//class Person {
//public:
//	int age;
//	char* name;
//
//	Person(int a, char* n) {
//		age = a;
//		name = new char[strlen(n) + 1];
//		strcpy(name, n);
//	}
//	//생성자
//
//	Person(const Person& s) {
//		age = s.age;
//		name = s.name;
//	}//복사생성자
//	//~Person() { delete name; }
//
//	void printPerson() {
//		cout << "이름: " << name << endl;
//		cout << "나이: " << age << endl;
//	}
//};
//
//void main() {
//	Person A(28, "Jongman");
//	
//	Person B(A);
//
//	A.age = 21;
//	strcpy(A.name, "종만이");
//	
//
//	A.printPerson();
//	B.printPerson();
//}




//깊은 복사
//class Person {
//public:
//	int age;
//	char* name;
//
//	Person(int a, char* n) {
//		age = a;
//		name = new char[strlen(n) + 1];
//		strcpy(name, n);
//	}
//	//생성자
//
//	Person(const Person& s) {
//		age = s.age;
//		name = new char[strlen(s.name) + 1];
//		strcpy(name, s.name);
//
//	}//다 바꿔(깊은 복사)
//	/*Person(const Person *s) {
//		age = s->age;
//		name = new char[strlen(s->name) + 1];
//		strcpy(name, s->name);
//
//	}*/
//    ~Person() { delete name; }
//
//	void printPerson() {
//		cout << "이름: " << name << endl;
//		cout << "나이: " << age << endl;
//	}
//};
	
//void main() {
//	Person A(28, "Jongman");
//	Person B = A; 
//	
//	A.age = 21;
//	strcpy(A.name, "종만이");
//	
//	A.printPerson();
//	B.printPerson();
//}

//연산자 오버로딩

class point {
private:
	int x;
	int y;
public:
	point(int a = 0, int b = 0) {
		x = a;
		y = b;
	}
	point operator+(point p) {
		point tmp;
		tmp.x = x + p.x;
		tmp.y = y + p.y;
		return tmp;
	}

	void show() {
		cout << "x: " << x << " y: " << y << endl;
	}
};

int main() {
	point p1(1, 2);
	point p2(3, 4);
	p1 = p1 + p2;
	p1.show();
}


//연산자 오버로딩을 사용해서 문자열 합치는 거 해봅시다.