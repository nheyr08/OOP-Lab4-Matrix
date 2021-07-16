//function definition
#include "Matrix.h"

matrix::matrix()
{  //how to accdss the functions inside of our class
	//the scope resolution comes to play just like this example
	//M = { { } };//here we set our member variable equal to its null state
	
}

matrix::matrix(int m, int n)
{
	M.clear();
	int r;
	//TO_DO: Use std::cin to initialize a matrix of size m * n
	//cout << "they entered two integers between (0-100)" << endl;
	//cout << "Those two integers are respectively: " << endl;
	//cout << "	the nbr ofcolumn and the nbr of row of the matrix. " << endl;

	for (int i = 0; i < m; i++) {
		vector<int>temp;//temp is a  temporary vector that serves to take the inputs only.
		cout << " temp's size " << temp.size()<<endl;
		cout << "enter " << i << "'th row's elements" << endl;
		for (int j = 0; j < n; j++) {

			cin >> r;
			temp.push_back(r);
		}
		M.push_back(temp);
	}



	//for printing the matrix
	for (int i = 0; i < M.size(); i++) {
		for (int j = 0; j < M[i].size(); j++) {



			cout << M[i][j];
		}
		cout << endl;
	}

}

matrix::matrix(vector<vector<int> >& m)
{
	M = m;
}

matrix matrix::Mul(matrix m1)
{  
	//vector<int >product;
	if (M[0].size() != m1.M.size())
	{
		cout << "Cannot do multiplication!" << endl;
		return matrix();
	}
	else
	{
		int  Hm;
		int T;
		// T and Hm covenience variables 
		Hm = m1.M.size();
		T = m1.M[0].size();
		int Ln = M[0].size();
		vector <int > temp;
		matrix m2;
		m2.M.resize(M.size());
		for (int i = 0; i < M.size(); i++)
			m2.M[i].resize(m1.M[0].size());
		for (int i = 0; i < Ln; i++)
			for (int j = 0; j < Hm; j++)
				for (int off = 0; off < T; off++) {
					cout << "i:" << i << endl;
					cout << "j:" << j << endl;
					m2.M[i][j] += M[i][off] * m1.M[off][j];
				}
		cout << "/nMultiplication successful!"<< endl;

		return m2;
	}

}
	
void matrix::Inverse()
{


	//TO_DO: If inverse matrix exist, find and print inverse matrix.



		// check if given matrix is square or not;

	if (!SquareMatrix()) {

		cout << "The Inverse Not Exist";

	}

	else
	{
		int i, j, m, n;
		//TO_DO: If inverse matrix exist, find and print inverse matrix.
		m = M.size(); // Finds the row size
		n = M[0].size(); // Finds the Column size
		int det;
		// check if given matrix is square or not;

		

			det = Det(M); // Determinant of the matrix is calculated
			for (i = 0; i < m; i++) {
				for (j = 0; j < n; j++)
					cout << ((M[(j + 1) % n][(i + 1) % m] * M[(j + 2) % n][(i + 2) % m]) - (M[(j + 1) % n][(i + 2) % m] * M[(j + 2) % n][(i + 1) % n])) / float(det) << "\t"; // The determinant value is casted to float, to get float value

				cout << "\n";
			}

	
	}
}
		


		
		
bool matrix::SquareMatrix()
{

	//TO_DO: Return true if matrix is a square matrix, otherwise return fasle.
	if (M.size() == M[0].size()) {
		return true;
	}
	else {
		
		void inverse();
	}

	// TD_BG Bf inverse matrix edut, find and print inverse matrix 1 check it gematrix is square or not; mere otto : 1 / Emplement the



	return false;
}


void matrix::GetDet()
{
	if (!SquareMatrix())
		cout << "Not a Square Matrix" << endl;
	else
		cout << "Determinant of matrix : " << Det(M) << endl;

}
int matrix::Det(vector<vector<int> >& m)
{

	//TO_DO: Compute the determinant of matrix m.

	int n, h, k, i, j;// vector<vector< int > > temp(10,2);
	vector<vector<int > >temp(m.size() - 1, vector<int>(m.size() - 1, 0));
	int d = 0;
	// print the two-dimensional vec
	//cout << "Initializing " << endl;
	unsigned int nrow, ncol;
	nrow = m.size();
	ncol = m[0].size();
	n = nrow;
	if (n == 1) {
		d = m[0][0];
	}
	else if (n == 2) {
		d = (m[0][0] * m[1][1] - m[0][1] * m[1][0]);
	}
	else {
		for (int p = 0; p < n; p++) {
			h = 0;
			for (i = 1; i < n; i++) {
				k = 0;
				for (j = 0; j < n; j++) {
					if (j == p) {
						continue;
					}
					temp[h][k] = m[i][j];
					k++;
				}
				h++;
			}
			d = d + m[0][p] * (int)pow(-1, p)*Det(temp);
		}
	}
	if (m.size() == M.size()) {
		det = d;
	}
	return d;

}
 
void matrix::Print()
{
	for (int i = 0; i < M.size(); i++) {
		for (int j = 0; j < M[0].size(); j++) {
			cout << M[i][j] << " ";
		}
		cout << endl;
	}
}

