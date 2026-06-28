#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
    // =============================================
    // تست ۱: ورودی و خروجی
    // =============================================
    cout << "test 1"<<endl;
    Complex c1, c2;
    cout << "input number: ";
    cin >> c1;
    cout << c1;
    cout << endl;

    // =============================================
    // تست ۲: سازنده با مقادیر
    // =============================================
    cout << "test 2\n";
    Complex c3(3, 4);
    Complex c4(1, 2);
    cout << "c3 = " << c3.getReal() << " + " << c3.getImage() << "i\n";
    cout << "c4 = " << c4.getReal() << " + " << c4.getImage() << "i\n";
    cout << endl;

    // =============================================
    // تست ۳: عملگر جمع (+)
    // =============================================
    cout << "test 3\n";
    Complex addResult = c3 + c4;
    cout << "c3 + c4 = (" << c3.getReal() << "+" << c3.getImage() << "i) + "
        << "(" << c4.getReal() << "+" << c4.getImage() << "i)\n";
    cout << "= " << addResult.getReal() << " + " << addResult.getImage() << "i\n";
    // (3+4i) + (1+2i) = 4 + 6i
    cout << endl;

    // =============================================
    // تست ۴: عملگر ضرب (*)
    // =============================================
    cout << "test 4\n";
    Complex mulResult = c3 * c4;
    cout << "c3 * c4 = (" << c3.getReal() << "+" << c3.getImage() << "i) * "
        << "(" << c4.getReal() << "+" << c4.getImage() << "i)\n";
    cout << "= " << mulResult.getReal() << " + " << mulResult.getImage() << "i\n";
    // (3+4i) * (1+2i) = (3-8) + (6+4)i = -5 + 10i
    cout << endl;

    // =============================================
    // تست ۵: عملگر انتساب Complex = Complex
    // =============================================
    cout << "test 5\n";
    Complex c5;
    c5 = c3;
    cout << "c5 = c3\n";
    cout << "c5 = " << c5.getReal() << " + " << c5.getImage() << "i\n";
    cout << endl;

    // =============================================
    // تست ۶: عملگر انتساب Complex = float
    // =============================================
    cout << "test 6\n";
    Complex c6;
    c6 = 7.5;
    cout << "c6 = 7.5\n";
    cout << "c6 = " << c6.getReal() << " + " << c6.getImage() << "i\n";
    cout << endl;

    // =============================================
    // تست ۷: عملگر اندازه ()
    // =============================================
    cout << "test 7\n";
    cout << "|c3| = " << c3() << "    (must be 5)\n";  // √(9+16) = 5
    cout << "|c4| = " << c4() << "    (must be 2.236)\n"; // √(1+4) = 2.236
    cout << endl;

    // =============================================
    // تست ۸: عملگرهای مقایسه (< و >)
    // =============================================
    cout << "test 8\n";
    Complex c7(3, 4);   // |c7| = 5
    Complex c8(5, 12);  // |c8| = 13
    Complex c9(6, 8);   // |c9| = 10

    cout << "c7 = 3+4i  => |c7| = " << c7() << endl;
    cout << "c8 = 5+12i => |c8| = " << c8() << endl;
    cout << "c9 = 6+8i  => |c9| = " << c9() << endl;
    cout << endl;

    cout << "c7 < c8 ?  " << (c7 < c8 ? "True" : "False") << "    (5 < 13 => True)\n";
    cout << "c8 > c7 ?  " << (c8 > c7 ? "True" : "False") << "    (13 > 5 => True)\n";
    cout << "c8 > c9 ?  " << (c8 > c9 ? "True" : "False") << "    (13 > 10 => True)\n";
    cout << "c7 < c9 ?  " << (c7 < c9 ? "True" : "False") << "    (5 < 10 => True)\n";
    cout << endl;

    // =============================================
    // تست ۹: زنجیره انتساب
    // =============================================
    cout << "test 9\n";
    Complex c10, c11, c12;
    c10 = c11 = c12 = c3;
    cout << "c10 = c11 = c12 = c3\n";
    cout << "c10 = " << c10.getReal() << " + " << c10.getImage() << "i\n";
    cout << "c11 = " << c11.getReal() << " + " << c11.getImage() << "i\n";
    cout << "c12 = " << c12.getReal() << " + " << c12.getImage() << "i\n";
    cout << endl;

    // =============================================
    // تست ۱۰: تست با اعداد دلخواه
    // =============================================
    cout << "test 10\n";
    Complex a(2, 3);   // 2 + 3i
    Complex b(4, -1);  // 4 - 1i

    cout << "a = " << a.getReal() << " + " << a.getImage() << "i\n";
    cout << "b = " << b.getReal() << " + " << b.getImage() << "i\n";
    cout << "a + b = " << (a + b).getReal() << " + " << (a + b).getImage() << "i\n";
    cout << "a * b = " << (a * b).getReal() << " + " << (a * b).getImage() << "i\n";
    // (2+3i) + (4-1i) = 6 + 2i
    // (2+3i) * (4-1i) = (8+3) + (-2+12)i = 11 + 10i
    cout << endl;
}