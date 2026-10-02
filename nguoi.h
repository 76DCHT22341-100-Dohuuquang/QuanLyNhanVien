#include <bits/stdc++.h>
#pragma once
using namespace std;

class Nguoi {
protected:
    string hoTen;
    int namSinh;

public:
    Nguoi() {
        hoTen = "";
        namSinh = 0;
    }

    Nguoi(string ten, int ns) {
        hoTen = ten;
        namSinh = ns;
    }
    virtual ~Nguoi() {} 
    
    virtual void nhap() {
        cin.ignore();
        cout << "  Nhap ho ten: "; getline(cin, hoTen);
        cout << "  Nhap nam sinh: "; cin >> namSinh;
    }

    virtual void xuat() {
        cout << "Ho ten: " << hoTen << " | Nam sinh: " << namSinh;
    }
};