#include <iostream>;
#include <string.h>;
#include <cctype>; // isdigit
using namespace std;
void ff(char ss[]);
void ff(char ss[])
{
	for (int i = 0; i < 200; i++) 
		if (isdigit(ss[i]))
	{
		cout << i + 1;
		cout << endl;
		break;
	}
};
int main()
{
	char s1[40] = "Hello, I'm Kate. I'm 14.";
	cout << "1st figure position in s1 : ";
	ff(s1);
	char s2[70] = "My name's Susi, I'm a doctor. My age is 34.";
	cout << "1st figure position in s2 : ";
	ff(s2);
}
