#include <iostream>
using namespace std;

//������ ����

class U {
private:
	int a; //�������
public:
	U() { a = 0; }//������
	U(int b) { a = b; }//�μ��� �ִ� ������
	~U() {};//�Ҹ���
	void B(int a) { //��� �Ű�����
		cout << a << endl;
		cout << "��� ����Լ�(�޼���) �Դϴ�." << endl;
	}
};

//����ü
struct Car {
	int num;
	double gas;
};

//��ȯ���� �־�? ����?
void A(){
	cout << "5" << endl;
}

int C() {
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
	//����ü �ν��Ͻ�(��ü) ���� �� ���
	Car car1 = { 1234,25.5 };
	Car car2 = { 4567,52.2 };
	cout << car2.gas << endl;
	cout << car1.num << endl;
	cout << car1.gas << endl;

	//Ŭ������ ��ü ���� �� ���

	int y = C();
	cout << y << endl;
	U ab;
	ab.B(5);

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

	int a = 5; //��� ���� ���� �׸��� ��������
	int* p = &a;//��� ����?? �׸��� ������ ����
	//&�� �ּҿ�����. �ش� ������ �ּҸ� ����Ѵ�. �ּҸ� ����ϸ� �޸𸮿����� ��ġ�� �˾Ƴ� �� �ִ�. 
	cout << p << endl;
	cout << a << endl;
	cout << *p << endl;
	cout << &a << endl;

	a = 10;
	cout << *p << endl;
	//10�� ��µȴ�.


	//�迭�� �������� �������

	int test2[5] = { 10,20,30,40,50 };

	cout << test2 << endl; //�ּ�
	cout << test2[0] << endl;
	cout << *test2 << endl; //0��° �ε����� ���� ��ȯ
	cout << test2[1] << endl;
	cout << *(test2 + 1) << endl;

	//���� ���̸� �����Ͽ� ��������

	//���ڿ�

	string c = "C++";
	//�̷��Գ� ���������� �����Ե� �̰� �𸦰ž�.
	char str[6] = "Hello";
	for (int i = 0; i < 6; i++) {
		cout << str[i] << endl;
		//\0�� �������� �ִ�. 
	}
	char str1[] = "Hello";
	char* str2 = "Hello"; //�ؼ���带 ������!
	str1[3] = 'k';
	cout << str1 << endl;
	cout << str2 << endl;
}

//���� �ð� ����

//�����Ҵ�, ������ �����ε�, STL, ���� ����/���� ���� , 