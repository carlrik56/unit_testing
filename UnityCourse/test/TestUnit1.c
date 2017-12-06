#include "unity.h"


#include <math_helper.h>

void setUp()
{

}

void tearDown()
{

}

void test_first_test(void)
{
	TEST_IGNORE_MESSAGE("Implement Me");
}


void test_add_two_numbers(void)
{
	TEST_ASSERT_EQUAL(5, MathHelper_AddTowNumbers(2,3));
}


int main(void) {
	UNITY_BEGIN();
	RUN_TEST(test_first_test);
	RUN_TEST(test_add_two_numbers);
	return UNITY_END();
}
