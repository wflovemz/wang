#include<iostream>

using namespace std;
//class Base
//{
//public:
//	Base()
//	{
//		std::cout << "Base::Base()" << std::endl;
//	}
//	virtual ~Base()
//	{
//		std::cout << "Base::~Base()" << std::endl;
//	}
//};
//class Derive :public Base
//{
//public:
//	Derive(){
//		std::cout << "Derive::Derive()" << std::endl;
//	}
//	~Derive()
//	{
//		std::cout << "Derive::~Derive()" << std::endl;
//	}
//};
//int main()
//{
//
//	return 0;
//}

//class A
//{
//public:
//	A() { ++_scount; }
//	A(const A& t) { ++_scount; }
//	static int GetACount() { return _scount; }
//private:
//	static int _scount;
//};
//
//int A::_scount = 0;
//
//void TestA()
//{
//	cout << A::GetACount() << endl;
//	A a1, a2;
//	A a3(a1);
//	cout << A::GetACount() << endl;
//}
//int main()
//{
//	TestA();
//	system("pause");
//	return 0;
//}

//class Myclass
//{
//public:
//	Myclass(int a, int b, int c);
//	static void GetSum(); // ������̬��Ա����
//private:
//	int a, b, c;
//	static int Sum; //������̬���ݳ�Ա
//};
//int Myclass::Sum = 0; //���岢��ʼ����̬���ݳ�Ա
//Myclass::Myclass(int a, int b, int c)
//{
//	this->a = a;
//	this->b = b;
//	this->c = c;
//	Sum += a + b + c; //�Ǿ�̬��Ա�������Է��ʾ�̬���ݳ�Ա
//}
//void Myclass::GetSum() //��̬��Ա������ʵ��
//{
//	// cout<<a<<endl; //������룬a�ǷǾ�̬���ݳ�Ա
//	cout << "Sum=" << Sum << endl;
//}
//void main()
//{
//	Myclass M��1, 2, 3��;
//	M.GetSum();
//	Myclass N��4, 5, 6��;
//	N.GetSum();
//	Myclass::GetSum();
//}

//void Test()
//{
//	//��̬����һ��int���͵Ŀռ�
//	int *ptr = new int;
//	//��̬����һ��int���͵Ŀռ䲢��ʼ��Ϊ10
//	int *ptr1 = new int(10);
//	//��̬����3�� int���͵Ŀռ�
//	int *ptr2 = new int[3];
//
//	delete ptr;
//	delete ptr1;
//	delete ptr2;
//}

//void Test2()
//{
//	//���뵥��Test���Ϳռ�
//	Test *p1 = (Test*)malloc(sizeof(Test));
//	free(p1);
//	//����10��Test���͵Ŀռ�
//	Test *p2 = (Test*)malloc(sizeof(Test)* 10);
//	free(p2);
//}
//
//void Test2()
//{
//	//���뵥��Test���͵Ķ���
//	Test* p1 = new Test;
//	delete p1;
//	//����10��Test���͵Ķ���
//	Test* p2 = new Test[10];
//	delete[] p2;
//}
//void swap(int& left, int& right)
//{
//	int  temp = left;
//	left = right;
//	right = temp;
//}
//void swap(double & left, double& right)
//{
//    double  temp = left;
//	left = right;
//	right = temp;
//}
//void swap(char& left, char right)
//{
//	char temp = left;
//	left = right;
//	right = temp;
//}

//template<typename T,typename T>
//void swap(T& left, T& right)
//{
//	T temp = left;
//	left = right;
//	right = temp;
//}
//int main()
//{
//	int a = 10, b = 3;
//	swap(a,b);
//	system("pause");
//	return 0;
//}

template<class T>
T Add(const T& left, const T& right)
{
	return left + right;
}
int main()
{
	int a1 = 10;
	double b1 = 20.0;
	Add<int>(a1, b1);
	system("pause");
	return 0;
}