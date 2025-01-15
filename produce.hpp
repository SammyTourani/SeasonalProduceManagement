// 
// PURPOSE: Demo code to help with completion of SYDE 121:in-lab task lab#9
//			From the lab Matrial provided by Audrey Chung
//          No particular optimizations applied. The code structure emphasizes simplicity.
//          The code constructs emphasize those covered in the course.
//
#ifndef PRODUCE_HPP
#define PRODUCE_HPP
#include <iostream>
#include <string>
using namespace std;

// PURPOSE: Models a generic Produce item
class Produce {
	// PURPOSE: Models Date data type; helper struct
	struct Date {
		int day, month, year;
		// inlined constructor for private data type
		Date(int new_day, int new_month, int new_year) : 
		     day(new_day), month(new_month), year(new_year) {}
	};
	// private attributes
	std::string item_name;
	double item_weight;
	Date item_expiry;
public:
	// PURPOSE: Default/empty constructor
	Produce();
	// PURPOSE: Parametric constructor
	Produce(std::string new_iname, double new_iweight, int new_eday, 
			int new_emonth, int new_eyear);
	// PURPOSE: Prints out the current Produce value
	void print();
	// PURPOSE: Overloaded operator== for the Produce object
	bool operator==(Produce& target) const;
};

// PURPOSE: Models a WinterProduce item
class WinterProduce : Produce { 
public:
	// PURPOSE: Default/empty constructor
	WinterProduce();
	// PURPOSE: Parametric constructor
	WinterProduce(std::string new_iname, double new_iweight, int new_eday, 
			      int new_emonth, int new_eyear);
	// PURPOSE: Prints out the current WinterProduce values
	void print();
	// PURPOSE: Overloaded operator== for the WinterProduce object
	bool operator==(WinterProduce& target) const;
};

// PURPOSE: Models a SpringProduce item
class SpringProduce : Produce { 
public:
	// PURPOSE: Default/empty constructor
	SpringProduce();
	// PURPOSE: Parametric constructor
	// TODO: write parametic constructor decleration for SpringProduce the same way it is written for WinterProduce and understand it
	SpringProduce(std::string new_iname, double new_iweight, int new_eday, int new_emonth, int new_eyear);
	
	// PURPOSE: Prints out the current SpringProduce value
	void print();
	// PURPOSE: Overloaded operator== for the SpringProduce object
	// TODO: Declare the operator== for SpringProduce the same way it is declared for WinteerProceude and understand it
	bool operator==(SpringProduce& target) const;
};

// PURPOSE: Models a SummerProduce item
class SummerProduce : Produce { 
public:
// TODO:  write Default/empty constructor template
SummerProduce();
// TODO:  write parametic constructor declaration for SummerProduce, the same way it is written for WinterProduce and understand it
SummerProduce(std::string new_iname, double new_iweight, int new_eday, int new_emonth, int neweyear);
// TODO:  write print function declaration.
void print();
// TODO:  Declare the operator== for SummerProduce the same way it is declared for WinteerProceude and understand it
bool operator==(SummerProduce& target) const;

};

// PURPOSE: Models a FallProduce item
class FallProduce : Produce { 
public:
// TODO:  write Default/empty constructor template
FallProduce();
// TODO:  write parametic constructor declaration for FallProduce, the same way it is written for WinterProduce and understand it
FallProduce(std::string new_iname, double new_iweight, int new_eday, int new_emonth, int new_eyear);
// TODO:  write print function declaration.
void print();
// TODO:  Declare the operator== for FallProduce the same way it is declared for WinteerProceude and understand it
bool operator == (FallProduce& target) const;
};
#endif
