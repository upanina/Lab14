#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL,"RU");
	ifstream fin("bilety.txt", ios::in|ios::binary);
	ofstream fout("chastlivye.txt", ios::out|ios::binary);
	int n;
	if(fin.is_open())
	{
		while(!fin.eof())
		{
			 fin>>n;
			 int a1 = n / 100000;
             int a2 = (n / 10000) % 10;
             int a3 = (n / 1000) % 10;
             int a4 = (n / 100) % 10;
             int a5 = (n / 10) % 10;
             int a6 = n % 10;
 
            if (a1 + a2 + a3 == a4 + a5 + a6)
                fout<<n<<'\n' ;
		
		}
		cout<<"Счастливые билеты вычисленны и занесены в chastlivye.txt";
	}
	else
		cout<<"Ошибка считывания файла";
	fin.close();
    fout.close();
	system("pause");
	return 0;
}
