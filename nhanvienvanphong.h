#include <bits/stdc++.h>
#pragma once
#include "nhanvien.h"

class NhanVienVanPhong : public NhanVien {
private: 
    int soNgayLamViec;

public:
    NhanVienVanPhong() : NhanVien() {
        soNgayLamViec = 0;
    }

    NhanVienVanPhong(string ten, int ns, string ma, long long lcb, int sn)
        : NhanVien(ten, ns, ma, lcb) {
        soNgayLamViec = sn;
    }

    void nhap() {
        NhanVien::nhap();
        cout << "  Nhap so ngay lam viec: "; cin >> soNgayLamViec;
    }
    long long tinhLuong() {
        return luongCoBan + soNgayLamViec * 200000;
    }

    void xuat() {
        NhanVien::xuat();
        cout << " | So ngay lam: " << soNgayLamViec 
             << " | Tong luong: " <<tinhLuong() << endl;
    }
};