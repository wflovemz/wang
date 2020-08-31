#include<iostream>
#include<string>
#include<assert>
using namespace std;

#if 0
//void Teststring()
//{
//	string s1;     //构造空的string类
//	string s2("hello");   //用c字符串拷贝构造s2
//	string s3(s2);    //用s2拷贝构造s3
//}

//void Teststring()
//{
//	string s("hello,bit!!!");
//	cout << s.size() << endl;
//	cout << s.length() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//	//将s中的字符清空，只是将size清空，不改变底层空间大小
//	s.clear();
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	// 将s中有效字符个数增加到10个，多出位置用'a'进行填充
//	s.resize(10,'a');
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	// 将s中有效字符个数增加到15个，多出位置用缺省值'\0'进行填充
//	s.resize(15);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//	// 将s中有效字符个数缩小到5个
//	s.resize(5);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//
//}
//
//void Teststring2()
//{
//	string s("hello");
//	// 测试reserve是否会改变string中有效元素个数
//	s.reserve(100);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	// 测试reserve参数小于string的底层空间大小时，是否会将空间缩小
//	s.reserve(50);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//}
#endif


////void Teststring()
//{
//	string s("hello");
//	s.push_back('ff');
//	s.append("hello");
//	s +='f';
//	cout << s << endl;
//
//}
//void Teststring()
//{
//	string str;
//	str.push_back(' '); // 在str后插入空格
//	str.append("hello"); // 在str后追加一个字符"hello"
//	str += 'b'; // 在str后追加一个字符'b'
//	str += "it"; // 在str后追加一个字符串"it"
//	cout << str << endl;
//	cout << str.c_str() << endl; // 以C语言的方式打印字符串
//}
//int main()
//{
//	Teststring();
//	system("pause");
//	return 0;
//}

class string
{
public:
	string(const char *str = " ")
	{
		if (nullptr == str)
		{
			assert(false);
			return;
		}
		_str = new char[strlen(str) + 1];
		strcpy(_str, str);
	}
	~string()
	{
		if (_str)
		{
			delete[]_str;
			_str = nullptr;
		}
	}
private:
	char* _str;
};
