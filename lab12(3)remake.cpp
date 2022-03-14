#include <iostream>;
using namespace std;
struct CD
{
	char name;
	char singer;
	char style;
	unsigned short year;
	unsigned short time;
	long cost;
};
int vvod(CD vcd);
int vvod(CD vcd)
{
	cout << "vvedite name, singer, style, year, time, cost : ";
	cin >> vcd.name >> vcd.singer >> vcd.style >> vcd.year >> vcd.time >> vcd.cost;
	cout << endl;
}
int ff(CD c1, CD c2);
int ff(CD c1, CD c2)
{
	int num = 0;



};
int main()
{
	struct Collection1
	{
		CD cd1; CD cd2; CD cd3;
	};
	struct Collection2
	{
		CD cd4; CD cd5; CD cd6;
	};
	CD cd1, cd2;
	cout << "for cd1 ";
	vvod(cd1);
	cout << "for cd2 ";
	vvod(cd2);


	/*cout << " vvedite name, singer, style, year, time, cost : ";
	cin >> cd1.name >> cd1.singer >> cd1.style >> cd1.year >> cd1.time >> cd1.cost;
	cout << endl;
	*/

	CD cd1={}

}