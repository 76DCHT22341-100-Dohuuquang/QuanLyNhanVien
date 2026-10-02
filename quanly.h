#include <bits/stdc++.h>
#pragma once
#include "nguoi.h"

class QuanLy : virtual public Nguoi {
protected:
    double phuCapQuanLy;

public:
    QuanLy() : Nguoi() {
        phuCapQuanLy = 0;
    }

    QuanLy(string ten, int ns, double pc) : Nguoi(ten, ns) {
        phuCapQuanLy = pc;
    }

    void nhap() {
        cout << "  Nhap phu cap quan ly: "; cin >> phuCapQuanLy;
    }
    void xuat() {
        cout << " | Phu cap QL: " << phuCapQuanLy;
    }
};