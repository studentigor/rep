#include <iostream>
#include <fstream>

#include "tele.h"

using namespace std;




  void tele::kanal(int a) {cin>>kan; kan=a;};
  void tele::yarkost(int a) {cin>>yar; yar=a;};
  void tele::kontrast(int a) {cin>>kont; kont=a;};
  void tele::zvuk(int a) {cin>>zv; zv=a;};

  void tele::menu()
    {
        cout<<endl<<"Kanal "<<kan<<"/99"<<endl;
        cout<<"Yarkost "<<yar<<"/100"<<endl;
        cout<<"Kontrastnost "<<kont<<"/100"<<endl;
        cout<<"Gromkost "<<zv<<"/100"<<endl<<endl;

        cout<<"1 - ch kanal"<<endl;
        cout<<"2 - ch yarkost"<<endl;
        cout<<"3 - ch kontrastnost"<<endl;
        cout<<"4 - ch gromkost"<<endl;
    };



