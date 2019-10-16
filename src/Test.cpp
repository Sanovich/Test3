#include "cute.h"
#include "ide_listener.h"
#include "xml_listener.h"
#include "cute_runner.h"
#include"Led.h"
void thisIsATest() {
	ASSERTM("start writing tests", false);	
}
void ledTest(){
	Led led;
	int expected = 1;
	int actual = 1;
		ASSERT_EQUAL(expected, actual);

}
void ledTestPwm()
{   Led led;
	int expected = 100;
	int actual = led.ledPwm(expected);
	ASSERT_EQUAL(expected, actual);
}
bool runAllTests(int argc, char const *argv[]) {
	cute::suite s { };
	//TODO add your test here
	s.push_back(CUTE(thisIsATest));
	s.push_back(CUTE(ledTest));
	s.push_back(CUTE(ledTestPwm));
	cute::xml_file_opener xmlfile(argc, argv);
	cute::xml_listener<cute::ide_listener<>> lis(xmlfile.out);
	auto runner = cute::makeRunner(lis, argc, argv);
	bool success = runner(s, "AllTests");
	return success;
}

int main(int argc, char const *argv[]) {
    return runAllTests(argc, argv) ? EXIT_SUCCESS : EXIT_FAILURE;
}
