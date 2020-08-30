#include<iostream>

using namespace std;
class Data
{
	friend ostream& operator<<(ostream _cout, const Data& d);
	friend istream& operator>>(istream& _cin, Data& d);
public:
	Data(int year, int month, int day)
		:_year(year)
		, _month(month)
		, _day(day)
	{}
private:
	int _year;
	int _month;
	int _day
};
ostream& operator<<(ostream& _cout, const  Data& d)
{
	_cout << d._year << "-" << d._month << "-" << d._day;
	return _cout;
}
istream& operator(istream& _cin, Data& d)
{
	_cin >> d._year;
	_cin >> d._month;
	_cin >> d._day;
	return _cin
}
int main()
{
	Data d;
	cin >> d;
	cout << d << endl;
	return 0;
}