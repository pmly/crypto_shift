///////////////////////////////////////////////////////////////////////////////
// Shifter.h implementation
// PUBLIC FUNCTIONS

Shifter::Shifter() : shift(0) {}

Shifter::Shifter(int n) : shift(n) {}

std::string Shifter::operator()(std::string message) {
	if (shift > 0)
	{
		for (int i = 0; i < shift; ++i)
		{
			message = shift_one_right(message);
		}
	}
	if (shift < 0)
	{
		for (int i = 0; i > shift; --i)
		{
			message = shift_one_left(message);
		}
	}
	return message;
}

void Shifter::shifter_morpher(int n) {
	shift = n;
}

// PUBLIC FUNCTIONS
// Shifter.h implementation
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// Shifter.h implementation
// PRIVATE FUNCTIONS
std::string Shifter::shift_one_left(std::string message) {
	shift += shift.substr(0, 1);
	shift = shift.substr(1, std::string::npos);
	return shift;
}

std::string Shifter::shift_one_right(std::string message) {
	for (int i = 0; i < shift.size(); ++i)
	{
		shift = shift_one_left(shift);
	}
	return shift;
}

bool Shifter::check_invariant() {

}
// PRIVATE FUNCTIONS
// Shifter.h implementation
///////////////////////////////////////////////////////////////////////////////
