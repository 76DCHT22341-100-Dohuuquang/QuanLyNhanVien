#include <bits/stdc++.h>
#include "nhanvienvanphong.h"
#include "nhanvienkinhdoanh.h"
#include "truongphong.h"

using namespace std;

int main() {
    cout << fixed << setprecision(0);
	int n;
    cout << "Nhap so luong nhan vien n: ";
    cin >> n;

    NhanVien** ds = new NhanVien*[n];

    for (int i = 0; i < n; i++) {
        cout << "\n--- CHON LOAI NHAN VIEN THU " << i + 1 << " ---\n";
        cout << "1. Nhan vien van phong\n";
        cout << "2. Nhan vien kinh doanh\n";
        cout << "3. Truong phong\n";
        cout << "Chon (1-3): ";
        int chon;
        cin >> chon;

        if (chon == 1) {
            ds[i] = new NhanVienVanPhong(); 

        } else if (chon == 2) {
            ds[i] = new NhanVienKinhDoanh(); 
        } else {
            ds[i] = new TruongPhong();      
        }
        ds[i]->nhap();
    }

    cout << "\n===========================================\n";
    cout << "DANH SACH VA TIEN LUONG CUA TAT CA NHAN VIEN\n";
    cout << "===========================================\n";

    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". ";
        ds[i]->xuat();
    }

    for (int i = 0; i < n; i++) {
        delete ds[i];
    }
    delete[] ds;

    return 0;
}