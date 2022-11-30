#pragma once
#include <iostream>
#include <string>
using namespace std;

class Cinema
{
public:
	string name;
	string location;

	string getName()
	{
		return name;
	}

	string getLocation()
	{
		return location;
	}

	Cinema(string aLocation, string aName)
	{
		location = aLocation;
		name = aName;
	}

	Cinema() {};

	void Print()
	{
		cout << "Location: " << location << "Name: " << name << endl;
	}

	Movie arr[100];
	Movie arr_sort[1];
	int movies = 0;

	void AddMovie(Movie movie)
	{
		arr[movies] = movie;
		movies++;
	}

	void SortingByYear()
	{
		for (int i = 0; i < movies; i++)
		{
			for (int j = 0; j < movies; j++)
				if (arr[j].release_date < arr[j + 1].release_date)
				{
					arr_sort[0] = arr[j + 1];
					arr[j + 1] = arr[j];
					arr[j] = arr_sort[0];
				}
		}
		for (int k = 0; k < movies; k++)
		{
			arr[k].Print();
		}
	}
};