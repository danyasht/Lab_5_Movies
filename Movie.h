#pragma once
#include <iostream>
#include <string>
using namespace std;

class Movie
{
public:
	int id;
	string title;
	string ranking;
	int release_date;
	int tickets;
	int ticket_price;
	string comment;

	int getId()
	{
		return id;
	}
	string getTitle()
	{
		return title;
	}
	string getRanking()
	{
		return ranking;
	}
	int getReleaseDate()
	{
		return release_date;
	}
	int getNumberOfTickets()
	{
		return tickets;
	}
	int getTicketPrice()
	{
		return ticket_price;
	}
	string getComment()
	{
		return comment;
	};

	Movie() {};

	enum filmType
	{
		Action, Comedy, Drama, Fantasy
	};

	void calculateProfit()
	{
		int a = tickets;
		int b = ticket_price;
		int c = a * b;
		cout << "Profit for a day : " << c << endl;
	};

	Movie(int aId, string aTitle, string aRanking, int aRelease_date, int aTickets, int aTicket_price, string aComment)
	{
		id = aId;
		title = aTitle;
		ranking = aRanking;
		release_date = aRelease_date;
		tickets = aTickets;
		ticket_price = aTicket_price;
		comment = aComment;
	}

	void Print()
	{
		cout << "Id:\t\n" << id << endl;
		cout << "Title:" << title << endl;
		cout << "Ranking:" << ranking << endl;
		cout << "Release date:" << release_date << endl;
		cout << "Number of tickets:" << tickets << endl;
		cout << "Ticket price:" << ticket_price << endl;
		cout << "Comment:" << comment << endl;
	}
};