#include <iostream>
using namespace std;

int main()
{
  int age;
  string name;

  char lastInitial;

  cout<< "Hi. What is your first name? ";
  cin >> name;
  cout<< name << ", what is the first letter of your last name? ";
  cin >> lastInitial;
  cout<<"Thanks, "<<name<< "." << lastInitial << endl;

  

  if( age < 12 )
  {
    cout << "Hey kid, how do you like school?\n";
  }
  else if( age < 18 ) {
    cout << "Cool! How's highschool going?\n";
  }
  else
  {
    cout << "Pleased to meet you!\n";
  }

  return 0;
}
