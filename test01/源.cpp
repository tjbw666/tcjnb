#include<iostream>
using namespace std;
bool IsPalindereme(char* str, size_t size)
{
	int begin = 0;
	int end = size - 1;
	while (begin < size)
	{
		if (str[begin] != str[end])
			return false;
		++begin;
		--end;
	}
	return true;
}
void Funtest()
{
	cout << IsPalindereme("1234321", 7) << endl;
	cout << IsPalindereme("", 0) << endl;//特殊情况
	cout << IsPalindereme("1221", 4) << endl;
	cout << IsPalindereme("1", 1) << endl;
	cout << IsPalindereme("1231", 4) << endl;
}
int main()
{
	Funtest();
	system("pause");
	return 0;
}
