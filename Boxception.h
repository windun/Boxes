#include <exception>

class Boxception : public std::exception
{
	private:
		char* msg;

	public:
		static const int SIZE = 0;
		static const int ADD_RETURN_VALUE = 1;
		Boxception (int type);
		const char* what() const throw();
};
