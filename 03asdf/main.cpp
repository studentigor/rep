#include <iostream>
#include <fstream>

#include "tele.h"

using namespace std;


int main()
{
 tele rds;
cout<<"Televizor 'Raduga' privetstvuet tebya comrad!"<<endl;

int fak, lol, cikl=0;

while(cikl==0)
                {


rds.menu();
cin>>fak;
switch (fak)
 {
 case 1:
    {
    rds.kanal(lol);
    break;
    }
 case 2:
    {
    rds.yarkost(lol);
    break;
    }
 case 3:
    {
    rds.kontrast(lol);
    break;
    }
 case 4:
    {
    rds.zvuk(lol);
    break;
    }
 }
                }
    return 0;
}


//int argc, char* argv[]
