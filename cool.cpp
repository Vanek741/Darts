//
// Created by ustiugov.if on 03.11.2018.
//
#include <locale>
#include <iostream>
#include <math.h>
#include "cool.h"

using namespace std;

int darts() {
    setlocale(LC_ALL, "russian");

    double r, x, y, r1, x1, y1, r2, x2, y2, r3, x3, y3, r4, x4, y4, r5, x5, y5, a, a1, a2, a3, a4, a5;

    cin >> x;
    cin >> y;

    x1 = 1; y1 = 1; x2 = 2; y2 = 2; x3 = 3; y3 = 3; x4 = 4; y4 = 4; x5 = 5; y5 = 5;

    r = sqrt (x*x + y*y);
    r1 = sqrt (x1*x1 + y1*y1);
    r2 = sqrt (x2*x2 + y2*y2);
    r3 = sqrt (x3*x3 + y3*y3);
    r4 = sqrt (x4*x4 + y4*y4);
    r5 = sqrt (x5*x5 + y5*y5);

    a = r * r;
    a1 = r1 * r1;
    a2 = r2 * r2;
    a3 = r3 * r3;
    a4 = r4 * r4;
    a5 = r5 * r5;

    /*cout << a << endl;
    cout << a1 << endl;
    cout << a2 << endl;
    cout << a3 << endl;
    cout << a4 << endl;
    cout << a5 << endl;*/

    if ((a <= a1) && (a >= 0)) {
        cout << "Вы набрали 5 очков";
    }
    if ((a <= a2) && (a > a1)) {
        cout << "Вы набрали 4 очка";
    }
    if ((a <= a3) && (a > a2)) {
        cout << "Вы набрали 3 очка";
    }
    if ((a <= a4) && (a > a3)) {
        cout << "Вы набрали 2 очка";
    }
    if ((a <= a5) && (a > a4)) {
        cout << "Вы набрали 1 очко";
    }
    if ((a > a5) || (a < 0)) {
        cout << "Вы набрали 0 очков";
    }

    return 0;
}