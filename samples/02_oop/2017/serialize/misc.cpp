#include <iostream>

class Person
{

public:
  double grade;
  std::string name;


};


std::ostream& operator << (std::ostream& out, Person &p)
{
  out << "I am " << p.name << "!\n";
  return out;
}


int main ()
{
  int x = 18;

  std::cout << x << std::endl;

  Person petyr;
  petyr.name = "Petyr Ivanov";
  petyr.grade = 6;

  std::cout << petyr << "hahaha!";


}
