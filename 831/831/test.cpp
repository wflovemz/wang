#include<iostream>
#include<string>
#include<assert>
using namespace std;

#if 0
//void Teststring()
//{
//	string s1;     //����յ�string��
//	string s2("hello");   //��c�ַ�����������s2
//	string s3(s2);    //��s2��������s3
//}

//void Teststring()
//{
//	string s("hello,bit!!!");
//	cout << s.size() << endl;
//	cout << s.length() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//	//��s�е��ַ���գ�ֻ�ǽ�size��գ����ı�ײ�ռ��С
//	s.clear();
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	// ��s����Ч�ַ��������ӵ�10�������λ����'a'�������
//	s.resize(10,'a');
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	// ��s����Ч�ַ��������ӵ�15�������λ����ȱʡֵ'\0'�������
//	s.resize(15);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//	// ��s����Ч�ַ�������С��5��
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
//	// ����reserve�Ƿ��ı�string����ЧԪ�ظ���
//	s.reserve(100);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	// ����reserve����С��string�ĵײ�ռ��Сʱ���Ƿ�Ὣ�ռ���С
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
//	str.push_back(' '); // ��str�����ո�
//	str.append("hello"); // ��str��׷��һ���ַ�"hello"
//	str += 'b'; // ��str��׷��һ���ַ�'b'
//	str += "it"; // ��str��׷��һ���ַ���"it"
//	cout << str << endl;
//	cout << str.c_str() << endl; // ��C���Եķ�ʽ��ӡ�ַ���
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
