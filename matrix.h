#include <iostream>
using namespace std ;

class mat_class
{

	public:
	int row;
	int coloumn;
	int matrix[2][2];	
	
	mat_class()
	{
	row=2;
	coloumn=2;
	}

	void makematrix();
	void makematrix(int a, int b, int c, int d);
	void add(mat_class,mat_class);
	void subb(mat_class,mat_class);
	void mull(mat_class,mat_class);
	void print();

};

void mat_class::makematrix()
{
   for ( int i = 0 ; i < row ; i++ )
      for (int j = 0 ; j < coloumn ; j++ )
         cin >> matrix[i][j];
		cout << endl;	
}

void mat_class::makematrix(int a,int b,int c,int d)
{
  
         matrix[0][0]=a;
         matrix[0][1]=b;
         matrix[1][0]=c;
         matrix[1][1]=d;
		cout << endl;	
}

void mat_class::add(mat_class first , mat_class second)
{
	   for ( int i = 0 ; i < row ; i++ )
      for (int j = 0 ; j < coloumn ; j++ )
        matrix[i][j]=first.matrix[i][j]+second.matrix[i][j];
		cout << endl;
}

void mat_class::subb(mat_class first , mat_class second)
{
	  for ( int i = 0 ; i < row ; i++ )
      for (int j = 0 ; j < coloumn ; j++ )
 		matrix[i][j] = first.matrix[i][j] - second.matrix[i][j];	
}



void mat_class::mull(mat_class first , mat_class second)
{
for ( int i = 0 ; i < row ; i++ )
	{
      for (int j = 0 ; j < coloumn ; j++ )
      {
      	matrix[i][j]=0;
      	for (int k= 0; k < 2 ; k++)
	 matrix[i][j] = matrix[i][j] + (first.matrix[i][k] * second.matrix[k][j]);
	}

	 }
	}

void mat_class::print()
{
	   for ( int i = 0 ; i < row ; i++ )
      for (int j = 0 ; j < coloumn ; j++ )
         cout << matrix[i][j];
		cout << endl;
}