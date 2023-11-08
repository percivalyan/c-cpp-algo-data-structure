#include<iostream>
using namespace std;
int main (){
	float a, b, c, d, e, f, g;
	
	cout<<"Masukkan nilai A = ";cin>>a;
		
	cout<<"Masukkan nilai B = ";cin>>b;
		
	cout<<"Masukkan nilai C = ";cin>>c;
		
	cout<<""<<endl;
	
	d = a + 6 > 12;
    e = b > 4 + a ;
    f = c - 3 <= 8;
    g = d || e || f;
    
    cout<<"Program Ekspresi && atau AND";
    cout<<""<<endl;
    cout<<"d = a + 6 > 12 adalah " <<d ;
    	if(d = 1){
			cout<<"benar";
		} else if(d = 0){
			cout<<"salah";
		}
	cout<<""<<endl;
    cout<<"e = b > 4 + a adalah " <<e ;
    	if(e = 1){
			cout<<"benar";
		} else if(e = 0){
			cout<<"salah";
		}
	cout<<""<<endl;
    cout<<"f = c - 3 <= 8 adalah " <<f ;
	    if(f = 1){
			cout<<"benar";
		} else if(f = 0){
			cout<<"salah";
		}
		cout<<""<<endl;
    cout<<"g = d || e || f; adalah " <<g;
    
    
	
}
