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
#include <iostream>
using namespace std;

int main(void) {
    int* p = new int[5];

    for (int i = 0; i < 5; i++) {
        p[i] = i + 1;
    }
    for (int i = 0; i < 5; i++) {
        cout << p[i] << "\n";
    }
    delete[] p;
    return 0;
}






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



