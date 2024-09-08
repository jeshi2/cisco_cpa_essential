#include <iostream>
using namespace std;
int main()
{
	int *it[3];
	for(int i = 0; i < 3; i++) {
		it[i] = new int [i + 1];
		for(int j = 0; j < i+1; j++)
			it[i][j] = 10 * i + j;
	}
	cout << it[2][2];
	for(int i = 0; i < 3; i++)
		delete [] it[i];
}