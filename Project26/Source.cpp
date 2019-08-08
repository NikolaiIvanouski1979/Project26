# include <iostream>
using namespace std;

void sterling(int, int, int, int&, int&);
int sterling(int, int);
void sterling(int);

int main()
{
	cout << "Please! Enter number pound, shilling and pies";
	int pou, shil, pies, a, b;
	cin >> pou >> shil >> pies;
	sterling(pou, shil, pies, a , b);
	cout << a << b;
	int v = sterling(a, b);
	sterling(v);
	system("pause");
	return 0;

}
void sterling(int pou, int shil, int pies, int& a, int& b)
{
	a = pou;
	b = shil + pies;
}
int sterling(int a, int b)
{
	return a + b;
}

void sterling(int v)
{
	cout << "Itigo" << v << endl;
}
