#include<iostream>

using namespace std;

//void Test(int a = 0)
//{
//	cout << a << endl;
//}
//int main()
//{
//	Test(5);
//	system("pause");
//	return 0;
//}
//void Test()
//{
//	int a = 10;
//	int &ra = a;
//
//	printf("%p\n", &a);
//	printf("%p", &ra);
//}
//#define ADD(a,b)((a)+(b))   // 只是一个宏函数

//double ADD(double left, double right)
//{
//	return left + right;
//}
//int ADD(long left, long right)
//{
//	return left + right;
//}
//int main()
//{
//	int x = 2;
//	int y = x * 3;
//	int ret = ADD(x, y);
//	cout << ret << endl;
//	system("pause");
//	return 0;
//}

//class Data
//{
//public:
//	Data()
//	{}
//	Data(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//void TestData()
//{
//    Data d1;     //调用无参的构造函数
//	Data d2(2903, 3, 4);   //调用带参的构造函数
//}
//int main()
//{
//	TestData();
//	system("pause");
//	return 0;
//}
//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//	Date d2(d1);
//	system("pause");
//	return 0;
//}

//class Data
//{
//public:
//	Data(int year,int month,int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Data(const Data &d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//	Data& operator=(const Data& d)
//	{
//		if (this != &d)
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//	}
//	
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Data d;
//	system("pause");
//	return 0;
//}

//class Data
//{
//
//public:
//	Data(int year, int month, int day)
//	    : _year(year)
//		, _month(month)
//		, _day(day)
//	{}
//private:
//	int _year;
//	int _month;
//	int _day;
//};

class A
{
public:
	A(int a)
		:_a1(a)
		, _a2(_a1)
	{}

	void Print() {
		cout << _a1 << " " << _a2 << endl;
	}
private:
	int _a2;
	int _a1;
};
int main() 
{
	A aa(1);
	aa.Print();
	system("pause");
	return 0;
}