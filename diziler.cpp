#include <ctime>
#include <cstdlib>
#include <iostream>
#include <locale.h>

using namespace std;

#define MAK 10
class Dizi
{
	private:
		int d[MAK];
	public:
		Dizi();
		~Dizi();
		int Get(int i);
		void Set(int i, int n);
		void Yaz();
		int Topla();
		int Ara(int n);
		int Say(int n);
		int Mak();
		int Min();

		//int AraSon(int n);
		//int MakSay();
};

Dizi::Dizi()
{
	for(int i = 0; i < MAK; i++)
	{
		d[i] = 0;
	}
}

Dizi::~Dizi()
{
	cout << "SİLİNDİ" << endl;
}

int Dizi::Get(int i)
{
	if(i < 0 || i >= MAK)
	{
		return 0;
	}
	return d[i];
}

void Dizi::Set(int i, int n)
{
	if(i < 0 || i >= MAK)
	{
		return;
	}
	d[i] = n;
}

void Dizi::Yaz()
{
	for(int i = 0; i < MAK; i++)
	{
		cout << d[i] << " "; 
	}
	cout << endl;
}

int Dizi::Topla()
{
	int t = 0;
	
	for(int i = 0; i < MAK; i++)
	{
		t += d[i];
	}
	return t;
}

int Dizi::Ara(int n)
{
	for(int i = 0; i < MAK; i++)
	{
		if(d[i] == n)
		{
			return i;
		}
	}
	return -1;
}

int Dizi::Say(int n)
{
	int t = 0;

	for(int i = 0; i < MAK; i++)
	{
		if(d[i] == n)
		{
			t++;
		}
	}
	return t;
}

int Dizi::Mak()
{
	int t = d[0];

	for(int i = 1; i < MAK; i++)
	{
		if(d[i] > t)
		{
			t = d[i];
		}
	}
	return t;
}

int Dizi::Min()
{
	int t = d[0];

	for(int i = 1; i < MAK; i++)
	{
		if(d[i] < t)
		{
			t = d[i];
		}
	}
	return t;
}

int main()
{
	setlocale(LC_ALL, "Turkish");
	Dizi d;
	int i;

	srand((unsigned) time(NULL));
	
	for(i=0; i<MAK; i++)
	{
		d.Set(i, rand() % 10); d.Yaz();
	}

	cout << "TOPLAM : " << d.Topla() << endl;
	cout << "7 NİN POZİSYONU : " <<	d.Ara(7) << endl;
	cout << "7 SAYISI : " << d.Say(7) << endl;
	cout << "MAK : " << d.Mak() << endl;
	cout << "MİN : " << d.Min() << endl;
	cout << "\n\n\n";

	return 0;
}
