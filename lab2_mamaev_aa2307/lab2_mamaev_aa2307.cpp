//﻿#include <iostream>
#include <fstream>
#include <unordered_map>
#include <queue>

using namespace std;

template <typename T>
T& SelectElement(unordered_map <int, T>& elements)
{
	int Id;
	cout << "Enter number: ";
	InputCorrectNumber(Id);
	while (elements.find(Id) == elements.end())
	{
		cout << "Error!\nThe number exceeds the number of elements." << endl
			<< "Number of elements: " << elements.size() << endl
			<< "Please enter correct data: ";
		InputCorrectNumber(Id);
	}
	return elements[Id];
}