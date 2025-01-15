// 
// PURPOSE: Demo code to help with completion of SYDE 121:in-lab task lab#9  
			//From the lab Matrial provided by Audrey Chung
//          No particular optimizations applied. The code structure emphasizes simplicity.
//          The code constructs emphasize those covered in the course.
//
#include <iostream>
#include <vector>
#include <cassert>
#include <sstream>

//#include "box.hpp"
#include "produce.hpp"

using namespace std;

// Purpose: Simple test scenario to test Produce constructors
void test_produce_constructors() {
	Produce p1, p2("Carrots", 1, 1, 1, 2019);
	WinterProduce wp1("Carrots", 1, 1, 1, 2019), wp2("Carrot", 1, 1, 1, 2019);
	SpringProduce sp1("Carrots", 2, 1, 1, 2019), sp2("Carrots", 1, 1, 1, 2019);
	SummerProduce smp1("Carrots", 1, 1, 1, 2019), smp2("Carrots", 1, 1, 1, 2020);
	FallProduce fp1("Carrots", 1, 1, 1, 2019), fp2("Carrots", 1, 1, 1, 2019);
}

// Purpose: Simple test scenario to test Produce print()
void test_produce_print() {
	Produce p1;
	WinterProduce wp1("Carrots", 1, 1, 1, 2019);
	SpringProduce sp1("Carrots", 2, 1, 1, 2019);
	SummerProduce smp1("Carrots", 1, 1, 2, 2019);
	FallProduce fp1("Carrots", 1, 1, 1, 2020);
	p1.print();
	wp1.print();
	sp1.print();
	smp1.print();
	fp1.print();
}

// Purpose: Simple test scenario to test Produce operator==
void test_produce_comparisons() {
	Produce p1, p2("Carrots", 1, 1, 1, 2019);
	WinterProduce wp1("Carrots", 1, 1, 1, 2019), wp2("Carrot", 1, 1, 1, 2019);
	SpringProduce sp1("Carrots", 2, 1, 1, 2019), sp2("Carrots", 1, 1, 1, 2019);
	SummerProduce smp1("Carrots", 1, 1, 1, 2019), smp2("Carrots", 1, 1, 1, 2020);
	FallProduce fp1("Carrots", 1, 1, 1, 2019), fp2("Carrots", 1, 1, 1, 2019);
	
	cout << (p1 == p2 ? "p1 and p2 are equal" : "p1 and p2 are not equal") << endl;
	cout << (wp1 == wp2 ? "wp1 and wp2 are equal" : "wp1 and wp2 are not equal") << endl;
	cout << (sp1 == sp2 ? "sp1 and sp2 are equal" : "sp1 and sp2 are not equal") << endl;
	cout << (smp1 == smp2 ? "smp1 and smp2 are equal" : "smp1 and smp2 are not equal") << endl;
	cout << (fp1 == fp2 ? "fp1 and fp2 are equal" : "fp1 and fp2 are not equal") << endl;

	// attempt to compare different types; will not compile
	//cout << (sp1 == fp2 ? "fp1 and fp2 are equal" : "fp1 and fp2 are not equal") << endl;	
}

void test_print_for_produce_types() {
    cout << "Testing print() for different produce types:" << endl;

    Produce p1("Carrots", 1.5, 12, 6, 2024);
    WinterProduce wp1("Potatoes", 2.0, 25, 12, 2023);
    SpringProduce sp1("Strawberries", 0.5, 10, 5, 2024);
    SummerProduce smp1("Peaches", 0.8, 20, 7, 2024);
    FallProduce fp1("Pumpkins", 4.0, 31, 10, 2023);

    cout << "Produce: ";
    p1.print();

    cout << "\nWinter Produce: ";
    wp1.print();

    cout << "\nSpring Produce: ";
    sp1.print();

    cout << "\nSummer Produce: ";
    smp1.print();

    cout << "\nFall Produce: ";
    fp1.print();

    cout << "\nEnsure output matches expectations for all produce types." << endl;
}

void test_print_output_validation() {
    cout << "Testing print() output validation:" << endl;

    Produce p1("Carrots", 1.5, 12, 6, 2024);
    std::ostringstream output_stream;
    std::streambuf* original_buffer = std::cout.rdbuf(output_stream.rdbuf());

    // Call the print() method
    p1.print();

    // Restore original buffer
    std::cout.rdbuf(original_buffer);

    // Validate captured output
    std::string expected_output = 
        "Item Name: Carrots\n"
        "Item Weight: 1.5\n"
        "Item Expiry: 12/6/2024\n";

    assert(output_stream.str() == expected_output);
    cout << "Output matches expected result!" << endl;
}

// Purpose: Invokes Produce test functions
void test_produce_methods() {
	test_produce_constructors();
	test_produce_print();
	test_produce_comparisons();	
    test_print_for_produce_types();
    test_print_output_validation();
}

int main() {
	test_produce_methods();

	// TODO: include additional test cases
	// TODO: consider using assertions as practice
		
	return 0;
}
