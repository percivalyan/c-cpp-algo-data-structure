#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char kalimat[]={"Ryanda Deanova"};
	char *pKarakter;
	int JumlahHurupKecil=0;
	int JumlahHurupBesar=0;
	pKarakter=kalimat;
		while(*pKarakter)
		{
			char kar=*pKarakter;
			if(kar>='a' && kar<='z')
				JumlahHurupKecil++;
			if(kar>='A' && kar<='Z')
				JumlahHurupBesar++;
				pKarakter++;
		}
	cout<<"Jumlah Hurup Kecil = "<<JumlahHurupKecil<<endl;
	cout<<"Jumlah Hurup Kapital = "<<JumlahHurupBesar<<endl;
}
