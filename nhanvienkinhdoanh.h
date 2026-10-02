#include <bits/stdc++.h>
#pragma once
#include "nhanvien.h"

class NhanVienKinhDoanh : public NhanVien {
private:
    long long doanhSo;

public:
    NhanVienKinhDoanh() : NhanVien() {
        doanhSo = 0;
    }

    NhanVienKinhDoanh(string ten, int ns, string ma, long long lcb, long long ds)
        : NhanVien(ten, ns, ma, lcb) {
        doanhSo = ds;
    }

    void nhap() {
        NhanVien::nhap();
        cout << "  Nhap doanh so: "; cin >> doanhSo;
    }

    long long tinhLuong() {
        return luongCoBan +(long long)(0.10 * doanhSo) ;
    }

    void xuat()  {
        NhanVien::xuat();
        cout << " | Doanh so: " <<doanhSo 
             << " | Tong luong: " <<tinhLuong() << endl;
    }
};