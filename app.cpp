/*
  Calculate Your Age Application
*/

#include <iostream>
using namespace std;

int main()
{
  cout << "====================================\n";
  cout << "====== Calculate Your Age App ======\n";
  cout << "====================================\n";

int age;
cin >> age;

int age_in_months = age * 12;
int age_in_days = age * 365;
int age_in_hours = age_in_days * 24;
int age_in_minutes = age_in_hours * 60;
int age_in_seconds = age_in_minutes * 60;

cout << "Your age in months: " << age_in_months << " months \n";
cout << "Your age in days: " << age_in_days << " days \n";
cout << "Your age in hours: " << age_in_hours << " hours \n";
cout << "Your age in minutes: " << age_in_minutes << " minutes \n";
cout << "Your age in seconds: " << age_in_seconds << " seconds \n";

  return 0;

}