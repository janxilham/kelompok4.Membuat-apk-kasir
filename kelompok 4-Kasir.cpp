#include <iostream>
#include <string>

using namespace std;

int main() {
    int harga[10], total_harga = 0;
    string nama, namabarang[10];
    string tanggalpembelian;
    bool tambah_belanjaan = true;
    char answer;

    cout << "======Selamat datang di Indomaret======" << endl;
    cout << "________________________________________" << endl << endl;
    cout << "Masukkan nama customer: ";
    cin >> nama;

    int index = 0;
    while (tambah_belanjaan && index < 10) {
        cout << "Masukkan nama Barang: ";
        cin.ignore();
        getline(cin, namabarang[index]);

        cout << "Masukkan harga barang: ";
        cin >> harga[index];

        cout << "Apakah ingin menambah belanjaan? (y/n): ";
        cin >> answer;
        

    	if(answer == 'y'){
    		tambah_belanjaan = 1;
		} else if(answer == 'n') {
			tambah_belanjaan = 0;
		} 

        total_harga = total_harga + harga[index];
        index++;
        
    }

    cout << "Masukkan tanggal pembelian: ";
    cin >> tanggalpembelian;

    cout << "-----------------------------------------" << endl;
    cout << "Nama customer: " << nama << endl;
    cout << "Daftar Barang dan Harga: " << endl;
    for (int i = 0; i < index; ++i) {
        cout << i + 1 << ". " << namabarang[i] << " - Rp." << harga[i] << endl;
    }
    cout << "Tanggal pembelian: " << tanggalpembelian << endl <<endl;

    cout << "Hai " << nama << ", kamu telah membeli barang-barang tersebut di tanggal " << tanggalpembelian << "." << endl;
    cout << "Dengan Total Harga Rp." << total_harga << endl;
	cout << "Terima kasih telah belanja di Indomaret!" << endl;

    return 0;
}

