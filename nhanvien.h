#include <bits/stdc++.h>
#pragma once
#include "nguoi.h"

class NhanVien : virtual public Nguoi {
protected:
    string maNV; 
    long long luongCoBan;

public:
    NhanVien() : Nguoi() {
        maNV = "";
        luongCoBan = 0;
    }

    NhanVien(string ten, int ns, string ma, long long lcb) : Nguoi(ten, ns) {
        maNV = ma;
        luongCoBan = lcb;
    }

    void nhap() {
        Nguoi::nhap();
        cout << "  Nhap ma nhan vien: "; cin >> maNV;
        cout << "  Nhap luong co ban: "; cin >> luongCoBan;
    }

    void xuat() {
        Nguoi::xuat();
        cout << " | Ma NV: " << maNV << " | LCB: " <<luongCoBan;
    }

    virtual long long tinhLuong()  = 0;
};