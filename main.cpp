#include <iostream>
#include <string>
#include "Movie.h"
#include "Cinema.h"
using namespace std;

int main()
{
  Movie movie1(37567, "Rambo", "9 / 10", 1996, 20, 40, "Action");
  movie1.Print();
  Cinema cinema1("Hot Tub Cinema", "Great Britain");
  cinema1.Print();
  movie1.calculateProfit();

  Movie movie2(48574, "Fury", "10 / 10", 2021, 35, 50, "Drama, Action");
  movie2.Print();
  Cinema cinema2("Le Grand Rex", "Paris");
  cinema2.Print();
  movie2.calculateProfit();

  Movie movie3(56478, "Deadpool", "8 / 10", 2019, 50, 25, "Comedy");
  movie3.Print();
  Cinema cinema3("Paramount Theatre of the Arts", "America");
  cinema3.Print();
  movie3.calculateProfit();

  Movie movie4(52939, "Spider-Man", "9.5 / 10", 2017, 60, 50, "Fantasy");
  movie4.Print();
  Cinema cinema4("Transatlantyk Festival", "Poland");
  cinema4.Print();
  movie4.calculateProfit();

  Cinema Sort;
  Sort.AddMovie(movie1);
  Sort.AddMovie(movie2);
  Sort.AddMovie(movie3);
  Sort.AddMovie(movie4);
  cout << "\nSort by year: " << endl;
  Sort.SortingByYear();
  return 0;
};