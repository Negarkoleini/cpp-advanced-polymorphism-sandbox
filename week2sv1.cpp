#include <iostream>
#include"game.h"
#include <string>

using namespace std;


int main()
{

	cout << "=== TEST CASE 1: Constructors ===" << endl;
	gun g1;  // Default constructor
	gun g2(30, "AK-47", 10.5, true);
	gun g3(50, "M4A1", 8.0, true);
	gun g4(20, "Pistol", 5.0, false);


	cout << "g1 (default): " << g1 << endl;
	cout << "g2: " << g2 << endl;
	cout << "g3: " << g3 << endl;
	cout << "g4: " << g4 << endl;
	cout << "Total guns created: " << g1.get_numberofguns() << endl << endl;

	cout << "=== TEST CASE 2: Getters and Setters ===" << endl;
	gun g5;
	g5.set_name("Shotgun");
	g5.set_ammo(8);
	g5.set_firerate(2.5);
	g5.set_isautomatic(false);

	cout << "Name: " << g5.get_name() << endl;
	cout << "Ammo: " << g5.get_ammo() << endl;
	cout << "Fire rate: " << g5.get_firerate() << endl;
	cout << "Is automatic: " << g5.get_isautomatic() << endl << endl;

	cout << "=== TEST CASE 3: Operator + ===" << endl;
	gun g6 = g2 + g3;
	cout << "g2 + g3 = " << g6 << endl;
	cout << "Expected: name=AK-47M4A1, ammo=80, fireRate=84.0, isAutomatic=true" << endl << endl;

	cout << "=== TEST CASE 4: Operator += ===" << endl;
	gun g7 = g2;
	g7 += g3;
	cout << "g7 += g3 = " << g7 << endl << endl;

	cout << "=== TEST CASE 5: Operator == and != ===" << endl;
	gun g8(30, "AK-47", 10.5, true);
	cout << "g2 == g8: " << (g2 == g8 ? "true" : "false") << endl;
	cout << "g2 == g3: " << (g2 == g3 ? "true" : "false") << endl;
	cout << "g2 != g3: " << (g2 != g3 ? "true" : "false") << endl << endl;

	cout << "=== TEST CASE 6: Operator = (Assignment) ===" << endl;
	gun g9;
	g9 = g2;

	cout << "g9 after = g2: " << g9 << endl;
	cout << "g9 == g2: " << (g9 == g2 ? "true" : "false") << endl << endl;

	cout << "=== TEST CASE 7: Prefix and Postfix -- (Decrement ammo) ===" << endl;
	gun g10(10, "Test Gun", 5.0, false);
	cout << "Initial: " << g10 << endl;

	--g10;
	cout << "After prefix --: " << g10 << endl;
	gun g11 = g10--;
	cout << "After postfix -- (saved old value): " << g11 << endl;
	cout << "Current g10: " << g10 << endl;

	// Test decrement when ammo is 0
	gun g12(0, "Empty Gun", 5.0, false);
	--g12;
	cout << "Decrement empty gun: " << g12 << endl << endl;


	cout << "=== TEST CASE 8: Prefix and Postfix ++ (Increment ammo) ===" << endl;
	gun g13(5, "Test Gun 2", 5.0, false);


	cout << "Initial: " << g13 << endl;

	++g13;
	cout << "After prefix ++: " << g13 << endl;

	gun g14;
	g14 = g13++;
	cout << "After postfix ++ (saved old value): " << g14 << endl;
	cout << "Current g13: " << g13 << endl << endl;


	cout << "=== TEST CASE 9: Operator [] (Add to ammo) ===" << endl;
	gun g15(20, "Test Gun 3", 5.0, false);

	cout << "Before []: " << g15 << endl;
	g15[10];
	cout << "After +10: " << g15 << endl;
	g15[5];
	cout << "After +5: " << g15 << endl << endl;

	cout << "=== TEST CASE 10: Operator  (Multiply ammo) ===" << endl;
	gun g16(10, "Test Gun 4", 5.0, false);
	cout << "Before : " << g16 << endl;
	gun g23;
	g23 = g16 * 3;
	cout << "After  3: " << g23 << endl;
	g23 = g16 * 2;
	cout << "After  2: " << g23 << endl << endl;

	cout << "=== TEST CASE 11: Operator / (Divide ammo - NOTE: uses multiplication) ===" << endl;
	gun g17(10, "Test Gun 5", 5.0, false);
	cout << "Before /: " << g17 << endl;
	g23 = g17 / 2;
	cout << "After / 2 (actually multiplies by 2): " << g23 << endl;

	// Test division by zero
	cout << "Testing division by zero (should do nothing):" << endl;
	g23 = g17 / 0;
	cout << "After / 0: " << g23 << endl << endl;

	cout << "=== TEST CASE 12: Operator = and /= ===" << endl;
	gun g18(8, "Test Gun 6", 5.0, false);
	cout << "Initial: " << g18 << endl;
	g18 *= 4;
	cout << "After *= 4: " << g18 << endl;
	g18 /= 2;
	cout << "After /= 2: " << g18 << endl;

	// Test /= by zero
	cout << "Testing /= by zero (should do nothing):" << endl;
	g18 /= 0;
	cout << "After /= 0: " << g18 << endl << endl;

	cout << "=== TEST CASE 13: Input Operator (>>) ===" << endl;
	gun g19;
	cout << "Enter data for a new gun:" << endl;
	cout << "(Example: ColtM4, 45, 9.5, 1)" << endl;
	// Uncomment to test interactive input:
	// cin >> g19;
	// cout << "You entered: " << g19 << endl;


	cout << "=== TEST CASE 14: Edge Cases ===" << endl;
	gun g20(0, "", 0.0, false);
	cout << "Empty gun: " << g20 << endl;

	gun g21(100, "Heavy Gun", 100.5, true);
	g20 = g21[1000];
	cout << "After adding 1000 ammo: " << g20 << endl;

	g20 = g21 * 10;
	cout << "After multiplying by 10: " << g20 << endl << endl;

	cout << "=== TEST CASE 15: Chain Operations ===" << endl;
	gun g22(5, "Chain Gun", 3.0, false);
	cout << "Start: " << g22 << endl;
	--g22;
	--g22;
	++g22;
	g22[20];
	cout << "After chain operations: " << g22 << endl;
	cout << "Total guns created: " << g22.get_numberofguns() << endl;

	gun g24;
	cout << "new object" << endl;
	cin >> g24;

	cout << "=== SUMMARY ===" << endl;
	cout << "Total guns created: " << g24.get_numberofguns() << endl;

	return 0;
}
