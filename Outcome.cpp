// Outcome A.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "iomanip"
//#include "cmath"
#include <ctime>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	srand(time(NULL));
	const int SIZE = 6; 
	char obj[SIZE] = {'A', 'F', 'R', 'I', 'C', 'A'};
	char num[SIZE]={};
	int counter = 0;
	///Random number generator  for numbers between 1 and 6
	for (int i = 1; i <= 15; i++)
	{
		//cout the rand function
		cout << "Random number #" << i << " " << 1+(rand() % 6) << endl; 

	}

	//re-write character array starting from the last element to the first
	for (int i = SIZE; i > 0; i--)
	{
		num[counter] = obj[SIZE];
		counter++;

	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << num[i];

	}

	cout << endl;
	//for(int x=0;x<10;x++){
	//num[x]=rand()%8;
	
	//cout<<"NUM AT :"<<x+1<<" is :"<<num[x]<<endl;
	//}


	system("pause");

	return 0;
}
