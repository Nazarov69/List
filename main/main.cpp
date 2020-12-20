#include <iostream>
#include "List.h"
const int Length1 = 10;
const int Length2 = 5;
const int Length3 = 7;
const int Length4 = 10; 
const int Length5 = 2;

int main() {
	
	TList<int> List2;
	TList<int> List3;
	for (int i = 0; i < Length2; i++) {
		List2.InsFirst(i);
		cout << *List2.GetFirst() << " ";
	}

	cout << endl << endl;
	for (int i = 0; i < Length3; i++) {
		List3.InsFirst(i + 10);
		cout << *List3.GetFirst() << " ";
	}

	cout << endl << endl;
	/*
	List2.together(List3);

	cout << endl << "/////////////////////////////////////////////////////////////" << endl;
	
	TList<int> List1;
	for (int i = 0; i < Length1; i++) {
		List1.InsFirst(i);
		cout << *List1.GetFirst() << " ";
	}

	cout << endl << endl;

	List1.DelDenominator(6);

	cout << endl << "/////////////////////////////////////////////////////////////"  << endl;
	

	TList<int> List4;
	TList<int> List5;
	for (int i = 0; i < Length4; i++) {
		List4.InsFirst(i);
		cout << *List4.GetFirst() << " ";
	}

	cout << endl << endl;
	for (int i = 0; i < Length5; i++) {
		List5.InsFirst(i + 10);
		cout << *List5.GetFirst() << " ";
	}
	
	List4.part(List5);



	cout << endl << "/////////////////////////////////////////////////////////////" << endl;

	*/







}
