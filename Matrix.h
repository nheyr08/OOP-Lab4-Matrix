//function declaration
#pragma once
#ifndef _Matrix_
#define _Matrix_
#include<iostream>
#include<vector>

using namespace std;

class matrix
{
private:
	//default constructor
	//never put void or anything like the other functions
	
	//overload constructor is a different way to implement our
	//function by adding parameters (our parameters have to)
	//be declared in main.cpp
	//matrix(int a[10][10], int n);


public:

	int det = 0;
  	vector<vector<int> > M;
	//constructor
	matrix();
	//function overloading

	matrix(int m, int n);
	//function overloading
	//double Determinant(double, int); // added
	matrix(vector<vector<int> > &m);
    double determ(int **a, int n);
	//accessor functions
	matrix Mul(matrix m1);
	
	/////////////////////////////


	/////////////


		//Mutator functions
	    void Inverse();
		bool SquareMatrix();
		void GetDet();
		int Det(vector<vector<int> > &m);
	    void Print();

			   		 
};


#endif // !_Matrix_

