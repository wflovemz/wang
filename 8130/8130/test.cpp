#include<iostream>
#include<assert.h>
#include<string>
#pragma warning (disable:4996)

using namespace std;

//class string
//{
//public:
//	string(const char *str = " ")
//		:_str(new char[strlen(str) + 1])
//	{
//		strcpy(_str, str);
//	}
//	~string()
//	{
//		if (_str)
//		{
//			delete[]_str;
//			_str = nullptr;
//		}
//	}
//private:
//	char* _str;
//};
//void Teststring()
//{
//	std::string s1("hello,bit");
//	std::string s2(s1);
//}
//int main()
//{
//	Teststring();
//	system("pause");
//	return 0;
//}
//class string
//{
//public:
//	string(const char* str = "")
//	{
//		//构造string类对象时，如果传递nullptr指针，认为程序非法，此处断言
//		if (nullptr == str)
//		{
//			assert(false);
//			return;
//		}
//		_str = new char[strlen(str) + 1];
//		strcpy(_str, str);
//	}
//	string(const string& s)
//		:_str(new char[strlen(s._str)+1])
//	{
//		strcpy(_str, s._str);
//	}
//	string& operator=(const string& s)
//	{
//		if (this != &s)
//		{
//			char* pstr = new char[strlen(s._str) + 1];
//			strcpy(pstr, s._str);
//			delete[]_str;
//			_str = pstr;
//		}
//		return *this;
//	}
//	~string()
//	{
//		if (_str)
//		{
//			delete[]_str;
//			_str = nullptr;
//		}
//	}
//private:
//	char* _str;
//};
//
//class string
//{
//public:
//	string(const char* str = "")
//	{
//		if (nullptr == str)
//			str = "";
//		_str = new char[strlen(str) + 1];
//		strcpy(_str, str);
//	}
//	string(const string& s)
//		:_str(new char[strlen(s._str) + 1])
//	{
//		strcpy(_str, s._str);
//	}
//	string& operator=(string s)
//	{
//		swap(_str, s._str);
//		return *this;
//	}
//	~string()
//	{
//		if (_str)
//		{
//			delete[]_str;
//			_str = nullptr;
//		}
//	}
//private:
//	char* _str;
//};


namespace bit
{
	class string
	{
	public:
		typedef char* iterator;
	public:
		string(const char* str = "")
		{
			_size = strlen(str);
			_capacity = _size;
			_str = new char[strlen(str) + 1];
			strcpy(_str, str);
		}
		string(const string& s)
			:_str(nullptr)
			, _size(0)
			, _capacity(0)
		{
			string tmp(s);
			this->swap(tmp);
		}
		string & operator=(string s)
		{
			this->swap(s);
				return *this;
		}
		~string()
		{
			if (_str)
			{

				delete[]_str;
				_str = nullptr;
			}
		}
		//iterator
		iterator begin()
		{
			return _str;
		}
		iterator end()
		{
			return _str + _size;
		}
		//modify
		void push_back(char c)
		{
			if (_size == _capacity)
				Reserve(_capacity * 2);
			_str[_size++] = c;
			_str[_size] = '\0';
		}
		string & operator+=(char c)
		{
			push_back(c);
			return *this;
		}
		void clear()
		{
			_size = 0;
			_str = [_size] = '\0';
		}
		void swap(string& s)
		{
			swap(_str, s._str);
			swap(_size, s._size);
			swap(_capacity, s._capacity);
		}
		const char* c_str()const
		{
			return _str;
		}
		// capacity
		size_t size()const
			size_t capacity()const
			bool empty()const
			void resize(size_t newSize, char c = '\0')
		{
				if (newSize > _size)
				{
					// 如果newSize大于底层空间大小，则需要重新开辟空间
					if (newSize > _capacity)
					{
						Reserve(newSize);					}
					memset(_str + _size, c, newSize - _size);
				}
				_size = newSize;
				_str[newSize] = '\0';
			}

	private:
		char* _str;
		size_t _capacity;
		size_t _size;

	};
}