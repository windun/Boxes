template <class B, typename E>
class BoxTester
{
public:
	void test (B* box);
};

template <typename B, typename E>
void BoxTester<B, E>::test (B* box)
{
	box->add(new E);
}
