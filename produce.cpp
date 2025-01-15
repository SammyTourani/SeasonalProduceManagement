// 
// PURPOSE: Demo code to help with completion of SYDE 121:in-lab task lab#9
//			From the lab Matrial provided by Audrey Chung	
//          No particular optimizations applied. The code structure emphasizes simplicity.
//          The code constructs emphasize those covered in the course.
//
#include <iostream>
#include <string>
#include "produce.hpp"

using namespace std;

Produce::Produce() : item_name("n/a"), item_weight(0), item_expiry(1,1,2000) {
}

Produce::Produce(std::string new_iname, double new_iweight, int new_eday, 
			int new_emonth, int new_eyear) : item_name(new_iname), 
			item_weight(new_iweight), item_expiry(new_eday, new_emonth, new_eyear) {
}

void Produce::print() {
	cout << "Item Name: " << item_name << endl;
	cout << "Item Weight: " << item_weight << endl;
	cout << "Item Expiry: " << item_expiry.day << "/" << item_expiry.month 
	     << "/" << item_expiry.year << endl;
}

bool Produce::operator==(Produce& target) const {
	bool are_equal = false;
		// TODO complete the equality check where weight, expiry day, month and year of the produce is checked against target attributes
	are_equal = (target.item_weight == item_weight && 
    target.item_name == item_name && 
    target.item_expiry.day == item_expiry.day &&
	target.item_expiry.month == item_expiry.month &&
	target.item_expiry.year == item_expiry.year);
	return are_equal;
}

WinterProduce::WinterProduce() {}

WinterProduce::WinterProduce(std::string new_iname, double new_iweight, int new_eday, 
			int new_emonth, int new_eyear) : Produce(new_iname, new_iweight, new_eday,
			new_emonth, new_eyear) {}


void WinterProduce::print() {
	cout << "[Winter Produce Item]" << endl;
	Produce::print();
}

bool WinterProduce::operator==(WinterProduce& target) const {
	// no additional attributes in the derived class, so compare the base class only
	return static_cast<Produce>(*this) == static_cast<Produce&>(target);
}

SpringProduce::SpringProduce() {}

// TODO: write parametric constructor for SpringProduce the same way is given for WinterProduce and understand it.
SpringProduce::SpringProduce(std::string new_iname, double new_iweight, int new_eday, 
			int new_emonth, int new_eyear) : Produce(new_iname, new_iweight, new_eday,
			new_emonth, new_eyear) {}

// TODO: write print function for the SprintProduce, the same way is given for  WinterProduce and understand it.
void SpringProduce::print() {
	cout << "[Spring Produce Item]" << endl;
	Produce::print();
}

bool SpringProduce::operator==(SpringProduce& target) const {
	// no additional attributes in the derived class, so compare the base class only
	// TODO: Replicate the same comparison implementation provided for WinterProduce and think why it is implemented this way.
	return static_cast<Produce>(*this) == static_cast<Produce&>(target);
}

SummerProduce::SummerProduce() {}

// TODO: write parametric constructor for SummerProduce the same way is given for WinterProduce and understand it.
SummerProduce::SummerProduce(std::string new_iname, double new_iweight, int new_eday, 
			int new_emonth, int new_eyear) : Produce(new_iname, new_iweight, new_eday,
			new_emonth, new_eyear) {}

// TODO: write print function for the SummerProduce, the same way is given for  WinterProduce and understand it.
void SummerProduce::print(){
	cout << "[Summer Produce Item]" << endl;
	Produce::print();
}

bool SummerProduce::operator==(SummerProduce& target) const {
	// no additional attributes in the derived class, so compare the base class only
	// TODO: Replicate the same comparison implementation provided for WinterProduce and think why it is implemented this way.
	return static_cast<Produce>(*this) == static_cast<Produce&>(target);
}

FallProduce::FallProduce() {}

// TODO: write parametric constructor for FallProduce the same way is given for WinterProduce and understand it.
FallProduce::FallProduce(std::string new_iname, double new_iweight, int new_eday,
			int new_emonth, int new_eyear) : Produce(new_iname, new_iweight, new_eday,
			 new_emonth, new_eyear) {}

// TODO: write print function for the FallProduce, the same way is given for  WinterProduce and understand it.
void FallProduce::print(){
	cout << "[Fall Produce Item]" << endl;
	Produce::print();
}

bool FallProduce::operator==(FallProduce& target) const {
	// no additional attributes in the derived class, so compare the base class only
	// TODO: Replicate the same comparison implementation provided for WinterProduce and think why it is implemented this way.
	return static_cast<Produce>(*this) == static_cast<Produce&>(target);
}

