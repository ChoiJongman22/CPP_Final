#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

//�����Ҵ�
//�޸� �Ҵ��� �̸��ϴ°� �ƴ϶� ���α׷��� ���� �߿� �޸� �Ҵ��ϰ� ���α׷��� ������ ����

//����, �������� ���α׷� ����� ��Ÿ�� ũ�Ⱑ �����ȴ�.
//�����Ϳ� �ڵ�κ��� �����Ϸ��� ���� �����Ͻ� ũ�Ⱑ �����˴ϴ�. 
//���ð����� ���������� �Ű��������� �Ҵ�Ǵ� �ӽ����� ����
//�������� �������� �޸� �Ҵ��ϴ� ���̸� ���� �� ũ�⸦ �����Ѵ�.
//�����Ͱ����� ���������� ��������, �ʱ�ȭ�� �迭 ���� �����Ѵ�.
//�ڵ�� ���α׷��� ��ɾ ���� ����� �����Ѵ�.

//C++������ �����Ҵ�� new�� ������ delete�� ����Ѵ�.


//int main(void) {
//    int* p = new int[5];
//
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


//2���� �����Ҵ�(�迭�ȿ� �迭)

//int** alloc2DInt(int rows, int cols) {
//	if (rows <= 0 || cols <= 0) { return NULL; }
//
//	int** mat = new int* [rows];
//	for (int i = 0; i < rows; i++) {
//		mat[i] = new int[cols];
//	}
//	return mat;
//}
//
//void free2DInt(int** mat, int rows, int cols = 0) {
//	if (mat != NULL) {
//		for (int i = 0; i < rows; i++) {
//			delete[] mat[i];
//		}
//		delete[] mat;
//	}
//}
//
//void set2DRandom(int** mat, int rows, int cols) {
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < cols; j++) {
//			mat[i][j] = rand() % 100;
//		}
//	}
//}
//
//void print2DInt(int** mat, int rows, int cols) {
//	cout << "���� �� : " << rows << " ���� �� : " << cols;
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
//	cout << "��� ���� ũ�⸦ �Է��ϼ���." << endl;
//	cin >> rows >> cols;
//	mat = alloc2DInt(rows, cols);
//	set2DRandom(mat, rows, cols);
//	print2DInt(mat, rows, cols);
//	free2DInt(mat, rows, cols);
//}

//������ ����غ���
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
//    cout << "�̸�: " << name << ", ����: " << age << ", ����: " << job << endl;
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
//    jjong.SetInfo("����", 28, "������");
//    jjong.GetInfo();
//    return 0;
//}


//���� ������
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

//���� ����
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
//	//������
//
//	Person(const Person& s) {
//		age = s.age;
//		name = s.name;
//	}//���������
//	//~Person() { delete name; }
//
//	void printPerson() {
//		cout << "�̸�: " << name << endl;
//		cout << "����: " << age << endl;
//	}
//};
//
//void main() {
//	Person A(28, "Jongman");
//	Person B = A; 
//
//	A.age = 21;
//	strcpy(A.name, "������");
//
//	A.printPerson();
//	B.printPerson();
//}


//���� ����
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
//	//������
//
//	Person(const Person& s) {
//		age = s.age;
//		name = new char[strlen(s.name) + 1];
//		strcpy(name, s.name);
//
//	}//�� �ٲ�(���� ����)
//	/*Person(const Person *s) {
//		age = s->age;
//		name = new char[strlen(s->name) + 1];
//		strcpy(name, s->name);
//
//	}*/
//    ~Person() { delete name; }
//
//	void printPerson() {
//		cout << "�̸�: " << name << endl;
//		cout << "����: " << age << endl;
//	}
//};
//	
//void main() {
//	Person A(28, "Jongman");
//	Person B = A; 
//	
//	A.age = 21;
//	strcpy(A.name, "������");
//	
//	A.printPerson();
//	B.printPerson();
//}

//������ �����ε�

class Point {
private:
	int x;
	int y;
public:
	Point(int a = 0, int b = 0) {
		x = a;
		y = b;
	}
	Point operator+(Point p) {
		Point tmp;
		tmp.x = x + p.x;
		tmp.y = y + p.y;
		return tmp;
	}

	void show() {
		cout << "x: " << x << " y: " << y << endl;
	}
};


int main() {
	Point p1(1, 2);
	Point p2(3, 4);
	p1 = p1 + p2;
	p1.show();
}
