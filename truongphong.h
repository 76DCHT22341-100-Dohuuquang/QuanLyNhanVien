#include <bits/stdc++.h>
#pragma once
#include "nhanvien.h"
#include "quanly.h"

class TruongPhong : public NhanVien, public QuanLy {
private:
    int soNamKinhNghiem;

public:
    TruongPhong() : Nguoi(), NhanVien(), QuanLy() {
        soNamKinhNghiem = 0;
    }

    TruongPhong(string ten, int ns, string ma, long long lcb, long long pc, int kn)
        : Nguoi(ten, ns), NhanVien(ten, ns, ma, lcb), QuanLy(ten, ns, pc) {
        soNamKinhNghiem = kn;
    }

    void nhap() {
        NhanVien::nhap();
        QuanLy::nhap();
        cout << "  Nhap so nam kinh nghiem: "; cin >> soNamKinhNghiem;
    }

    long long tinhLuong() {
        return luongCoBan + phuCapQuanLy + soNamKinhNghiem * 500000;
    }

    void xuat() {
        NhanVien::xuat();
        QuanLy::xuat();
        cout << " | Nam KN: " << soNamKinhNghiem 
             << " | Tong luong: " <<tinhLuong() << endl;
    }
};