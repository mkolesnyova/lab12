#include <iostream>
using namespace std;
int  const n = 20;
void Podshet(int A[n][n], int N, int &a) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if ((i == j) && (A[i][j] == 0)) {
				a++;
			}
		}
	}

}

void Zapolnenie(int A[n][n], int N) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			A[i][j] = rand() % 2;
		}
	}
	
}



int main() {
	int A[n][n], B[n][n], C[n][n], a, b, c, N;
	cin >> N;
	a = 0;
	b = 0;
	c = 0;
	Zapolnenie(A, N);
	Zapolnenie(B, N);
	Zapolnenie(C, N);
	//for (int i = 0; i < N; i++) {
	//	for (int j = 0; j < N; j++) {
	//		cout << A[i][j] << "\t";
	///	}
	//	cout << endl;
//	}
	

	Podshet(A, N, a);
	Podshet(B, N, b);
	Podshet(C, N, c);
	cout << a << "\t" << b << "\t" << c << endl;
	if ((a >= b && a >= c)) {
		cout << "A"<<endl;
	}
	if (b >=a && b >= c) {
		cout << "B" << endl;
	}
	if (c >= b && c>= a) {
		cout << "C" << endl;
	}

}
