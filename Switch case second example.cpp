#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{	
 
	  
	char grade;
	cout<<"Enter your Grade";
	cin>>grade;
	switch(grade)
	{
	
	case 'A':
		cout<<"Excellent!"<<endl;
 		break;	
	case 'B':
		cout<<"Good!"<<endl;
		break;	
	case 'C':
		cout<<"Fair!"<<endl;
		break;
		
	case 'D':
		cout<<"Poor!"<<endl;
		break;
		
	otherwise :
		cout<<"Grade not valid!"<<endl;
		break;
	}
return 0;
}
