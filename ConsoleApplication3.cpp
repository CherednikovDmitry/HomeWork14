#include <iostream>

void FindOddNumbers(bool x, int n)
{
	for (int i = 0; i <= n; i++)
	{
		if (i % 2 == x)
			std::cout << i << " ";
	}
}
void foo(bool x, int n)
{
	FindOddNumbers(x, n);
}

int main(int argc, char* argv[])
{
	bool c; int x;
	setlocale(0, "Russian");
	std::cout << "������� �����: ";
	std::cin >> x;
	std::cout << "������� - 1 ��� ����������� �������� �����, ���� - 0 ��� ������������ ������";
	std::cin >> c;

	foo(c, x);

	return 0;
}