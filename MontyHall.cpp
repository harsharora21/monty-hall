#include <iostream>	/* cout, cin */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;
static inline void loadbar(double foo, double total)
{
double per = 0;
per = (foo/total)*100;
cout << "Progress: " << per << "% \r";
}

int main()
{
int itr = 0; // Iterations
cout << "Enter Number of iterations: ";
cin >> itr;
float ctr = 0;
srand(time(NULL));
int swAdv = 0; // Counts advatage for switching
int car = 0;
int choice = 0;
float ans = 0; // Ans in percentage

while(ctr < itr)
{
car = rand() % 3;
choice = rand() % 3;

if(choice != car)++swAdv;

++ctr;
loadbar(ctr,itr);
if((int(ctr)%100)==0)srand(time(NULL)); // Every 100th iteration seed is refreshed
}

cout << "\r" << endl;

ans = (swAdv/ctr)*100;
cout << "Chances of winning if you switch: " << ans << "%" << endl;
cout << "Chances of winning if you stay: " << (100-ans) << "%" << endl;

}
