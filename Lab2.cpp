// Lab2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

// ListProcessor.cpp

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl;
	cout << "list size  :  " << cows.size() << endl;
	cout << "list sum   :  " << cows.sum() << endl<<endl;
	
	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cows.insertAsFirst(15.33);
	cout << "cows list  :  " << cows << endl << endl;
	cout << "list size  :  " << cows.size() << endl;
	cout << "list sum   :  " << cows.sum() << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl << endl;
	cout << "list size  :  " << cows.size() << endl;
	cout << "list sum   :  " << cows.sum() << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "list size  :  " << cows.size() << endl;
	cout << "list sum   :  " << cows.sum() << endl << endl;
	cout << "horses list:  " << horses << endl << endl;
	cout << "list size  :  " << horses.size() << endl;
	cout << "list sum   :  " << horses.sum() << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cows.insertAsFirst(1.48);
	cout << "cows list  :  " << cows << endl;
	cout << "list size  :  " << cows.size() << endl;
	cout << "list sum   :  " << cows.sum() << endl << endl;
	cout << "horses list:  " << horses << endl << endl;
	cout << "list size  :  " << horses.size() << endl;
	cout << "list sum   :  " << horses.sum() << endl << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "list size  :  " << cows.size() << endl;
	cout << "list sum   :  " << cows.sum() << endl << endl;
	cout << "horses list:  " << horses << endl;
	cout << "list size  :  " << horses.size() << endl;
	cout << "list sum   :  " << horses.sum() << endl << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "list size  :  " << pigs.size() << endl;
	cout << "list sum   :  " << pigs.sum() << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "list size  :  " << cows.size() << endl;
	cout << "list sum   :  " << cows.sum() << endl << endl;
	cout << "horses list:  " << horses << endl;
	cout << "list size  :  " << horses.size() << endl;
	cout << "list sum   :  " << horses.sum() << endl << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "list size  :  " << pigs.size() << endl;
	cout << "list sum   :  " << pigs.sum() << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "list size  :  " << cows.size() << endl;
	cout << "list sum   :  " << cows.sum() << endl << endl;
	cout << "horses list:  " << horses << endl;
	cout << "list size  :  " << horses.size() << endl;
	cout << "list sum   :  " << horses.sum() << endl << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "list size  :  " << pigs.size() << endl;
	cout << "list sum   :  " << pigs.sum() << endl << endl;

	cout << "End of code" << endl;

	return 0;
}


