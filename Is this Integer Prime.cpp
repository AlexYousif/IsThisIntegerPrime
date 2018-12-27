#include <iostream>
#include <cassert>
#include <limits>
using namespace std;

/*
This program *implements* a function--viz., "is_Prime," which takes an integer
value and returns true if the integer is a prime number, and false otherwise.
The implementation of the "is_Prime" function is done in the main function.
Furthermore, the assert functions are used as a way of debugging.
*/

bool is_Prime(int n);

int main()
{
  assert(is_Prime(-100) == false);                                              // "asserts" are included as part of lab requirements.
  assert(is_Prime(0) == false);
  assert(is_Prime(1) == false);
  assert(is_Prime(2) == true);
  assert(is_Prime(3) == true);
  assert(is_Prime(71) == true);
  assert(is_Prime(100) == false);
  assert(is_Prime(3881) == true);

  LOOP:cout << "Input an integer less than or equal to 2147483647,"9<< endl;
  cout << "and this program will tell you if it is prime or not." << endl;
  int n;
  cin >> n;

  while(!cin)                                                                   //This is not required for the lab but it's better to include it.
  {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    goto LOOP;
  }

  if (is_Prime(n))
  {
    cout << n << " is prime." << endl;
  }
  else
  {
    cout << n << " is not prime." << endl;
  }
  return 0;
}

bool is_Prime(int n)
{
  int count;
  count = 0;
  for (int i = 2; i <= n/2; i++)
  {
    if(n%i==0)
    {
      count++;
      break;
    }
  }
  if(count==0 && !(n<=1))
  {
    return true;
  }
  else
  {
    return false;
  }
  assert(is_Prime(n<=1) == false);                                             // "assert" is included as part of lab requirements.
}                                                                               // But the function seems superfluous here (see line 54).
