#include <exception>

class Boxception : public std::exception
{
	private:
		char* msg;

	public:
		static const int SIZE = 0;
		static const int ADD_RETURN_VALUE = 1;
		static const int REMOVE_RETURN_VALUE = 2;
		static const int COPY = 3;

		Boxception (int type);
		const char* what() const throw();
};
