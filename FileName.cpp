#include <iostream>
using namespace std;
class PointTime
{
public:
	void pri(int& x, int& y, int& z);
};

int main()
{
	PointTime A;
	int x, y, z;
	A.pri(x, y, z);

}

void PointTime::pri(int& x, int& y, int& z)
{
	cout << "输入日期，年：";
	cin >> x;
	cout << "          月:";
	cin >> y;
	cout << "          日:";
	cin >> z;
	cout << "你输入的日期是：" << x << "年" << y << "月" << z << "日";
}