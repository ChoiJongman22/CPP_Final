#include <iostream>
using namespace std;

//������ ����

class A {
private:
	int a = 5; //�������
public:
	A() {};//������
	A(int b) { b = a; }
	~A() {};//�Ҹ���
	void B(int a) { //��� �Ű�����
		cout << "��� ����Լ�(�޼���) �Դϴ�." << endl;
	}
};


//��ȯ���� �־�? ����?
void A(){
	cout << "5" << endl;
}

int B() {
	int k = 5;
	return k;
}


//�Լ� ���ø�
template <class T>
T max(T x, T y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}


//�� swap�Լ��� �̷��� ����ؾ� �ϴ°�?
void swap(int* px, int* py) {
	int tmp;
	tmp = *px;
	*px = *py;
	*py = tmp;
}




int main() {
	//�迭 ����
	int test[5] = { 10,20,30,40,50 };
	//�迭�� �ε����� 0���� �����Ѵ�. �׷��ٸ� �Ʒ��� ���� ��µǴ°ɱ�?
	cout << test[3] << endl;
	test[3] = 55;
	cout << test[3] << endl;


	//2�����迭
	int test1[2][5] = { {10,20,30,40,50},{60,70,80,90,100} };
	//����� ����. �ٵ� �˰� �ֳ���?

	//�������� ����

	int a = 5; //��� ���� ���� �׸��� ��������(�Լ� �ٱ����� ����)
	int* p = &a;//��� ����?? �׸��� ������ ����
	//&�� �ּҿ�����. �ش� ������ �ּҸ� ����Ѵ�. �ּҸ� ����ϸ� �޸𸮿����� ��ġ�� �˾Ƴ� �� �ִ�. 
	cout << p << endl;
	cout << a << endl;
	cout << *p << endl;
	cout << &a << endl;

	a = 10;
	cout << *p << endl;
	//10�� ��µȴ�.
}