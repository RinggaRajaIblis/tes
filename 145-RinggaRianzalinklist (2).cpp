#include <iostream>
using namespace std;

struct kelas{
	char info;
	kelas *next;
};

int main(){
	kelas *awal = new kelas();

	awal->info = 'A';
	awal->next = NULL;
	cout << "data : " << awal->info << endl;
	//1
	
	kelas *B = new kelas();
	//2
	B->info = 'B';
	B->next = NULL;
	cout << "data : " << B->info << endl;
	awal->next = B;
	cout << "data : " << awal->next->info <<endl;
	//3
	
	kelas *D = new kelas();
	D->info = 'D';
	D->next = NULL;
	cout << "data : " << D->info << endl;
	B->next = D;
	cout << "data : " << awal->info << "->" << awal->next->info << "->" << awal->next->next->info <<endl;
	//7
	kelas *cetak = new kelas();
	cetak = awal;
	cout << "data : " << cetak->info << endl;
	//8
//	cetak = cetak->next;
//	cout << "data : " << cetak->info << endl;
	kelas *akhir = new kelas();
	akhir = awal;
	while(cetak !=NULL){
		cout << endl;
		cout << "data : " << cetak->info <<endl;
		cetak = cetak->next;
	}
	
	while(akhir->next !=NULL){
		akhir=akhir->next;
	}
	cout << "data : " << akhir->info << endl;
	//11
	kelas *infor = new kelas();
	infor=awal;
	while(infor->info !='B'){
		infor=infor->next;
    }
    cout << "data : " << infor->info << endl;
    //12
    kelas *C = new kelas();
    C->info='C';
    C->next=infor->next;
    B->next=C;
    cetak=awal;
    while(cetak !=NULL){
    	cout << endl;
    	cout << "data : " << cetak->info << endl;
    	cetak=cetak->next;
	}
	
	delete awal;
	return 0;
}
