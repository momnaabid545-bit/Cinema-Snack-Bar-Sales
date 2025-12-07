/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
  int N, i;
  float price;
  float totalSales = 0;
  int economyCount = 0;
  cout << "Enter number of snack items sold";
  cin >> N;
  
  for(int i=0;i<N;i++)
  {
    cout << "Enter price of item " << i << ":";
    cin >> price;
    if (price<150)
    {
        cout << "Economy Snack" << endl;
        economyCount++;
    }
    
    totalSales += price;

  }
  
  cout << "\nTotalSales:" << totalSales << endl;
  cout << "Number of economy snacks:" << economyCount << endl;
 
  
  

    return 0;
}