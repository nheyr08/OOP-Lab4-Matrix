// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include"Matrix.h"
#include<vector>

using namespace std;

int main() {

	bool Exit = false;
	int m, n;
	vector<vector <int > >a;
	char op;
	cout << "Welcome to matrix operation" << endl; 
	cout<<"please enter an operator below('*'for multiplication,\t 'i' for inverse,\n 'd' for determinant, 'q' to quit)"<<endl;
	while (!Exit) {
         cout << "op:";
		cin >> op;
		
	matrix mat;
	 	if (op == '*') {
	cout<<"Size of matrix(m*n):";
	cin >> m >> n;
	matrix m1(m, n);

	cout<<"Size of matrix(m*n):";
	cin >> m >> n;
	matrix m2(m, n);
	 

	matrix m3 = m1.Mul(m2);
	m3.Print();
		}
else if (op == 'd') {
cout << "Size of matrix(m*n):";
cin >> m >> n;

matrix m1(m, n);
m1.GetDet();

}
else if (op == 'i') {
	cout<<"Size of matrix(m*n):";
	cin >> m >> n;
     matrix m1(m, n);

   	m1.Inverse();
}
else if (op == 'q')
	Exit = true;
		cout<<"Thanks for playing, quitting the game!";
   }

	return 0;
}



