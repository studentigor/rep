#include <iostream>
#include <fstream>
#include <string>


using namespace std;


struct sotrud
{
    std::string fam;
    std::string otd;
    int god;
    std::string obr;
};


int sredgod(int tgod, sotrud * v, int n)
{

int sred=0;

    for(int i=0; i<n; i++)
    {
sred =( sred + tgod - v[i].god  );
    }
sred= sred/n;
return v[4].god;
}


int main()
{

    //std::ofstream fout;
    //fout.open("baza.txt");
    std::ifstream fin;
    fin.open("baza.txt");



    int n=6;

    sotrud * v = new sotrud [n];

for(int i=0; i<n; i++)
{
    fin>>v[i].fam;
    fin>>v[i].otd;
    fin>>v[i].god;
    fin>>v[i].obr;
}





for(int i=0; i<n; i++)
{
    cout<<"Familiya ";
    cout<<v[i].fam <<endl;
    cout<<"Otdel ";
    cout<<v[i].otd<<endl;
    cout<<"God ";
    cout<<v[i].god<<endl;
    cout<<"obrazovane ";
    cout<<v[i].obr<<endl<<endl;
}


int a=0;
int cikel=0;


while(cikel==0)
{

        cout<<"Menu "<<endl;
        cout<<"1 vivod "<<endl;
        cout<<"2 izmenit "<<endl;
        cout<<"3 vicheslit "<<endl;
        cout<<"4 sohranit "<<endl;

cin>>a;

switch (a)
{
    case 1:

   for(int i=0; i<n; i++)
{
    cout<<"Familiya ";
    cout<<v[i].fam<<endl;
    cout<<"Otdel ";
    cout<<v[i].otd<<endl;
    cout<<"God ";
    cout<<v[i].god<<endl;
    cout<<"obrazovane ";
    cout<<v[i].obr<<endl<<endl;
}
    break;

    case 2:
{
    cout<<"Nomer tovarisha "<<endl;
    int t=0;
    cin>>t;

    cout<<"Familiya ";
    cout<<v[t].fam<<endl;
    cout<<"Otdel ";
    cout<<v[t].otd<<endl;
    cout<<"God ";
    cout<<v[t].god<<endl;
    cout<<"obrazovane ";
    cout<<v[t].obr<<endl<<endl;

    cout<<"Navaya familiya ";
    cin>>v[t].fam;
    cout<<"Novii otdel ";
    cin>>v[t].otd;
    cout<<"Novii god ";
    cin>>v[t].god;
    cout<<"Novoe obrazovane ";
    cin>>v[t].obr;

    fin.close();
    std::ofstream fout;
    fout.open("baza.txt");

    for(int i=0; i<n; i++)
    {
    fout<<v[i].fam<<" ";
    fout<<v[i].otd<<" ";
    fout<<v[i].god<<" ";
    fout<<v[i].obr<<" ";
    }
fout.close();
std::ifstream fin;
fin.open("baza.txt");
}
    break;

    case 3:
{
cout<<"Vvedite tekushi god "<<endl;
int tgod=0;

cin>>tgod;

cout<<sredgod(tgod,v,n)<<endl;


}

 break;

    case 4:
{
cikel=9999;
}

 break;




}

}





/*

for (int i=0; i<n ; i++)
{
    cout<<"Familiya ";
    cin>>v[i].fam;
    cout<<"Otdel ";
    cin>>v[i].otd;
    cout<<"God ";
    cin>>v[i].god;
    cout<<"Familiya ";
    cin>>v[i].obr;

    cout<<"Familiya ";
    cout<<v[i].fam;
    cout<<"Otdel ";
    cout<<v[i].otd;
    cout<<"God ";
    cout<<v[i].god;
    cout<<"Familiya ";
    cout<<v[i].obr;
}

for (int i=0; i<n ; i++)
{
    cout<<"Familiya ";
    cin>>v[i].fam;
    cout<<"Otdel ";
    cin>>v[i].otd;
    cout<<"God ";
    cin>>v[i].god;
    cout<<"Obrazovanie ";
    cin>>v[i].obr;

    fout<<v[i].fam<<endl;
    fout<<v[i].otd<<endl;
    fout<<v[i].god<<endl;
    fout<<v[i].obr<<endl;
}

*/












/*
fin >> z;
cout<<z;

for(int i=0; i<n; i++)
{
    cout<<"vvedi hislo "<< i<< endl;
    fin>>a;
    v[i]=a;
   // fout << a;
}

int summ=0, min=v[0], max=v[0];

for(int y=0; y<n; y++)
{
cout<<v[y]<<endl;
cout<<&v[y]<<endl;
summ=summ+v[y];
if(max<v[y]){max=v[y];}
if(min>v[y]){min=v[y];}
}
cout<<"summ " << summ<< endl;
cout<<"max " << max<< endl;
cout<< "min "<< min<< endl;


/*
    int *p =&a[1];
    cout<<p<<endl;
    cout<<p<<endl;
    cout<<p<<endl;



    *p =b;
    cout<<a<<endl;
    cout<<a<<endl;
    cout<<a<<endl;


for(int i=0; i<10; i++)
    {

    int *u =&v[i];
    cout<< u <<endl;
    }

/*

    for(int i=1; i<10; i++)
    {

        cout << "\n" << endl;
        for(int j=1; j<10; j++)
        {
           //cout << i << "*" << j <<"=";
            f=i*j;
            if (f>) {cout<<f << " ";} else {cout<<f << "  ";}

        }
    }

    */

    return 0;
}


