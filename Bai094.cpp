#include <iostream>
using namespace std;

struct PhanSo {
    int tu, mau;
};

int ucln(int a, int b) {
    return b == 0 ? abs(a) : ucln(b, a % b);
}

void rutgon(PhanSo &ps) {
    int gcd = ucln(abs(ps.tu), abs(ps.mau));
    ps.tu /= gcd;
    ps.mau /= gcd;
    if (ps.mau < 0) {
        ps.tu = -ps.tu;
        ps.mau = -ps.mau;
    }
}

PhanSo cong(PhanSo a, PhanSo b) {
    PhanSo kq = {a.tu * b.mau + b.tu * a.mau, a.mau * b.mau};
    rutgon(kq);
    return kq;
}

PhanSo tru(PhanSo a, PhanSo b) {
    PhanSo kq = {a.tu * b.mau - b.tu * a.mau, a.mau * b.mau};
    rutgon(kq);
    return kq;
}

PhanSo nhan(PhanSo a, PhanSo b) {
    PhanSo kq = {a.tu * b.tu, a.mau * b.mau};
    rutgon(kq);
    return kq;
}

PhanSo chia(PhanSo a, PhanSo b) {
    PhanSo kq = {a.tu * b.mau, a.mau * b.tu};
    rutgon(kq);
    return kq;
}

void inPhanSo(PhanSo ps) {
    if (abs(ps.tu) >= ps.mau) {
        int nguyen = ps.tu / ps.mau;
        int du = abs(ps.tu) % ps.mau;
        if (du == 0)
            cout << nguyen << endl;
        else
            cout << nguyen << "," << du << "/" << ps.mau << endl;
    } else {
        cout << ps.tu << "/" << ps.mau << endl;
    }
}

int main() {
    PhanSo ps1, ps2;
    cin >> ps1.tu >> ps1.mau >> ps2.tu >> ps2.mau;

    inPhanSo(cong(ps1, ps2));
    inPhanSo(tru(ps1, ps2));
    inPhanSo(nhan(ps1, ps2));
    inPhanSo(chia(ps1, ps2));

    return 0;
}
