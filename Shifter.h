#ifndef SHIFTER_H
#define SHIFTER_H
#include <string>

// Defines a shifter functor that will construct a shifted cipher given a message
// All shifts move letter
// Default constructs with the shift degree 0
// degree 0 means no shift
// degree positive moves all letters to the right
// degree negative moves all letters to the left
// Can edit the shift degree

// INVARIANTS

// ERROR TYPES
class Shifter{
public:
	// R:
	// M: 
	// E: Generates a shifter that does a shift-0
	Shifter();
	// R: n is an integer
	// M:
	// E: Generates a shifter that does a shift-n
	Shifter(int n);
	// R: n is an integer
	// M:
	// E: Calls the shifter on an input message
	std::string operator()(std::string message);
	// R: n is an integer
	// M: 
	// E: changes shift from shift-old to shift-n
	void shifter_morpher(int n);
private:
	// R:
	// M:
	// E: Returns true if shifter is good theoretically
	bool check_invariant();
	// R:
	// M:
	// E: Moves all letters one to the left and the left-most letter to the right
	std::string shift_one_left(std::string message);
	// R:
	// M:
	// E: Moves all letters one to the right and the right-most letter to the left
	std::string shift_one_right(std::string message);
	int shift;
};

#endif /* SHIFTER_H */
