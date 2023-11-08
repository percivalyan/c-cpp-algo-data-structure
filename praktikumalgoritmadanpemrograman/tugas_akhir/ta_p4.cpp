#include<iostream>

using namespace std;

int main(){
	int pembelian;
	float diskon, total;
	
	cout<<"========================"<<endl;
	cout<<"Program Menentukan Bonus"<<endl;
	cout<<"========================"<<endl<<endl;
	
	cout<<"Masukan Total Bayar : ";
	cin>>pembelian;
	cout<<endl;
	
	switch(pembelian){
		case 100000 ... 199999:
			diskon = 0.05 * pembelian;
			total = pembelian - diskon;
			
			cout<<"Total Beli\t : "<<pembelian<<endl;
			cout<<"Bonus\t\t : Discount 5%"<<endl;
			cout<<"Diskon\t\t : "<<diskon<<endl;
			cout<<"Total Bayar\t : "<<total<<endl; 
			break;
			
		case 200000 ... 299999:
			cout<<"Total Bayar\t : "<<pembelian<<endl;
			cout<<"Bonus\t\t : Ticket ke Yogya"<<endl;
			break;
			
		case 300000 ... 399999:
			cout<<"Total Bayar\t : "<<pembelian<<endl;
			cout<<"Bonus\t\t : Ticket ke Bali"<<endl;
			break;
			
		case 400000 ... 499999:
			cout<<"Total Bayar\t : "<<pembelian<<endl;
			cout<<"Bonus\t\t : Jam Tangan Rolex"<<endl;
			break;
				
		case 500000 ... 2146983647:
			cout<<"Total Bayar\t : "<<pembelian<<endl;
			cout<<"Bonus\t\t : Ticket ke Swiss"<<endl;
			break;
	}
}
