#include <iostream>;
using namespace std;
int ff(int m[], int n);
int ff(int m[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++) if (m[i] > 1) s += m[i];
	return s;
}
int main()
{
	int sum1, sum2, sum3;
	int mass1[10] = { 2, 5, 0, 3, 0, 4 }; //14
	sum1=ff(mass1, 10);
	cout << " sum(mass1)= " << sum1<<endl;
	int mass2[10] = { 7,0 }; //7
	sum2 = ff(mass2, 10);
	cout << " sum(mass2)= " << sum2<<endl;
	int z[5] = { -1, 0, 1, 2, 3 }; //5
	sum3 = ff(z, 5);
	cout << " sum(z)= " << sum3<<endl;
	return 0;
}
