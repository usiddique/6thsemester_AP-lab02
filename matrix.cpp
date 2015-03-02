#include <matrix.h>


int main()
{
mat_class first;
mat_class second;
mat_class result;
int option;

cout<<"Enter values to configure matrix"<<endl;    //taking optimatrix values  form users
cout<<"First Matrix"<<endl;
first.makematrix();
cout<<"Second Matrix"<<endl;
second.makematrix();

cout<<"Please select an option"<<endl;
cout<<"Press 1 for additon"<<endl;
cout<<"Press 2 for subtraction "<<endl;
cout<<"Press 3 for multiplication"<<endl;
cin>>option;

switch (option){

	case 1:
	{
	result.add(first,second);
	break;
	}

	case 2:
	{
	result.subb(first,second);
	break;
	}

	case 3:
	{
	result.mull(first,second);
	break;
	}
}

result.print();	
}