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
void setUp()
{
}

void tearDown()
{
}

void ascii(char* ptr,int len)
{
    
    TEST_ASSERT_EQUAL(757,ascii());
}

int test_main()
{
    UNITY_BEGIN();

    RUN_TEST(ascii);

    return UNITY_END();
}