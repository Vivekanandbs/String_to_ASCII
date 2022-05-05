/**
 * @file test.c
 * @author Vivekanand B SHhigihalli 
 * @brief unit test program
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "string_to_ASCII.h"
#include "unity.h"
void setUp()
{
}

void tearDown()
{
}

void ascii_test()
{
    char* str="vivek";
    TEST_ASSERT_EQUAL(255,ascii(str,5));
}

int test_main()
{
    UNITY_BEGIN();

    RUN_TEST(ascii_test);

    return UNITY_END();
}