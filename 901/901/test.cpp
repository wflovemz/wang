#include<iostream>
#include<vector>
using namespace std;
//class string
//{
//public:
//	string(const char* str="")
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
//	string & operator=(string s)
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
//
//void printvector(const vector<int>& v)
//{
//	vector<int>::const_iterator it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << "";
//		++it;
//	}
//	cout << endl;
//}
//
//int main()
//{
//	//尾插4个数据
//	vector<int>v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	//迭代器遍历打印
//	vector<int>::iterator it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << "";
//		++it;
//	}
//	cout << endl;
//	//迭代器进行修改
//	it = v.begin();
//	while (it != v.end())
//	{
//		*it *= 2;
//		++it;
//	}
//	//反向迭代器进行遍历打印
//	vector<int>::reverse_iterator rit = v.rbegin();
//	while (rit!= v.rend())
//	{
//		cout << *rit << "";
//		++rit;
//	}
//	cout << endl;
//	printvector(v);
//	return 0;
//}

//int main()
//{
//	size_t sz;
//	std::vector<int>a;
//	sz = a.capacity();
//	std::cout << "making a grow:\n";
//	for (int i = 0; i < 100; i++)
//	{
//		a.push_back(i);
//		if (sz != a.capacity())
//		{
//			sz = a.capacity();
//			std::cout << "capacity changed: " << sz << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	size_t sz;
//	std::vector<int> a;
//	sz = a.capacity();
//	std::cout << "making a grow:\n";
//	for (int i = 0; i < 100; i++)
//	{
//		a.push_back(i);
//		if (sz != a.capacity())
//		{
//			sz = a.capacity();
//			std::cout << "capacity changed: " << '\n';
//		}
//	}
//	std::vector<int>bar;
//	sz = bar.capacity();
//	bar.reserve(100);
//	std::cout << "making bar graw:\n";
//	for (int i = 0; i < 100; i++)
//	{
//		bar.push_back(i);
//		if (sz != bar.capacity())
//		{
//			sz = bar.capacity();
//			std::cout << "capacity changed:" << sz << '\n';
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	vector<int>a;
//	for (int i = 0; i < 10; i++)
//	{
//		a.push_back(i);
//		cout << a[i] << " ";
//	}
//	cout << "当前a的有效空间是" << a.size() << endl;
//	a.resize(5);
//	for (unsigned int i = 0; i < a.size(); i++)
//		cout << a[i] << " ";
//	cout << "当前a 的有效空间为:" << a.size() << endl;
//	a.resize(8, 5);
//	for (unsigned int i = 0; i < a.size(); i++)
//		cout << a[i] << " ";
//	cout << "当前a的有效空间为:" << a.size() << endl;
//	a.resize(12);
//	for (unsigned int i = 0; i < a.size(); i++)
//		cout << a[i] << " ";
//	cout << "当前a的有效空间为:" << a.size() << endl;
//	system("pause");
//	return 0;
//}
//int main()
//{
//	vector<int>a;
//	for (int i = 0; i < 10; i++)
//	{
//		a.push_back(i);
//		cout << a[i] << " ";
//	}
//	cout << "当前a的有效空间为:" << a.size() << endl;
//	cout << "capacity:" << a.capacity() << endl;
//	cout << "size:" << a.size() << endl;
//
//	a.reserve(50);
//	for (unsigned int i = 0; i < a.size(); i++)
//		cout << a[i] << " ";
//	cout << "当前a的有效空间为:" << a.size() << endl;
//	cout << "capacity:" << a.capacity() << endl;
//	cout << "size():" << a.size() << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	vector<int>v(a, a + sizeof(a) / sizeof(int));
//
//	vector<int>::iterator it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//	v.push_back(5);
//	v.pop_back();
//	it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	vector<int>v(a, a + sizeof(a) / sizeof(int));
//	//查找3所在的位置的iterator
//	vector<int>::iterator pos = find(v.begin(), v.end(), 3);
//
//	//在pos位置之前插入10
//	v.insert(pos, 10);
//	vector<int>::iterator it = v.begin();
//	while (it!= v.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//	pos = find(v.begin(), v.end(), 10);
//	//删除pos位置元素
//	v.erase(pos);
//
//	it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	vector<int>v(a, a + sizeof(a) / sizeof(int));
//	//[]读写第0个位置
//	v[0] = 10;
//	cout << v[0] << endl;
//	//通过[i]方式遍历vector
//	for (size_t i = 0; i < v.size(); i++)
//		cout << v[i] << " ";
//	cout << endl;
//	vector<int>swapv;
//	swapv.swap(v);
//
//	cout << "v data:";
//	for (size_t i = 0; i < v.size(); i++)
//		cout << v[i] << " ";
//	cout << endl;
//
//	cout << "swap data:";
//	for (size_t i = 0; i < swapv.size(); i++)
//		cout << swapv[i] << " ";
//	cout << endl;
//
//	//c++11支持新式范围for遍历
//	for (auto x : v)
//		cout << x << " ";
//	cout << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	vector<int>v{ 1, 2, 3, 4, 5, 6 };
//	auto it = v.begin();
//	v.resize(100, 8);
//	v.reserve(100);
//	v.insert(v.begin(), 0);
//	v.push_back(7);
//	v.assign(100, 8);
//}

//int main()
//{
//	vector<int>a{ 1, 2, 3, 6, 8, 7 };
//	auto it = a.begin();
//	while (it != a.end())
//	{
//		if (*it % 2 == 0)
//		{
//			it = a.erase(it);
//		}
//		else
//			it++;
//	}
//	system("pause");
//	return 0;
//}
namespace bit
{
	template<class T>
	class vector
	{
	public:
		typedef T*iterator;
		typedef const T* const_iterator;

		iterator begin(){ return _start; }
		iterator end(){ return _finish; }

		const _iterator cbegin()const{ return _start; }
		const _iterator cend()const { return _finish; }

		vector()
			:_start(nullptr)
			, _finish(nullptr)
			, _endfstorage(nullptr)
		{}

		vector(int n, const T& value = T())
			:_start(nullptr)
			, _finish(nullptr)
			, _endfstorage(nullptr)
		{
			reserve(n);
			while (n--)
			{
				push_back(value);
			}
		}
		// 如果使用iterator做迭代器，会导致初始化的迭代器区间[first,last)只能是vector的迭代器
		// 重新声明迭代器，迭代器区间[first,last]可以是任意容器的迭代器
	private:
		iterator _start;
		iterator _finish;
		iterator _endfstorage;
	};
}