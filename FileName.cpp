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
	cout << "�������ڣ��꣺";
	cin >> x;
	cout << "          ��:";
	cin >> y;
	cout << "          ��:";
	cin >> z;
	cout << "������������ǣ�" << x << "��" << y << "��" << z << "��";
}