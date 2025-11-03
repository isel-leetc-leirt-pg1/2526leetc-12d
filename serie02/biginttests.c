/**
 * biginttests.c
 * Este programa contém um conjunto de testes para validar as implementações
 * presentes no ficheiro "bigint.c".
 * 
 * ISEL, outubro de 2025
 * 
 * Build : gcc -Wall  -o biginttests biginttests.c bigint.c  
 * Execute : biginttests
 *---------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include "bigint.h"
#include "tstutils.h"
 

/*--------------------------------------
 * Início dos testes
 *--------------------------------------*/


// To String Tests

void zero_big_to_string_test() {
	BIG_INT big = { 1, 0};
	char str[10];

	big_to_string(big, str);

	ASSERT_EQUAL_STR("0", str);
}

void big_12345_to_string_test() {
	BIG_INT big = { 5, 5, 4, 3, 2, 1};
	char str[10];

	big_to_string(big, str);

	ASSERT_EQUAL_STR("12345", str);
}


// From String Tests

void test_read_123() {
	BIG_INT bi, expected_bi= { 3, 3, 2, 1 };
	
    ASSERT_TRUE(big_from_string("123", bi));
    ASSERT_EQUAL_BYTE_ARRAY(expected_bi, big_size(expected_bi)+1, bi,big_size(bi)+1);
	 
}


void test_read_0() {
	BIG_INT bi, expected_bi= {1, 0};
	
    ASSERT_TRUE(big_from_string("0", bi));
    ASSERT_EQUAL_BYTE_ARRAY(expected_bi, big_size(expected_bi)+1, bi, big_size(bi)+1);
}

// Compare BigInts Tests

void test_cmp_equals() {
	BIG_INT b1 = { 6, 0, 0, 0, 0, 5, 2};
	 	
	ASSERT_EQUAL_INT(big_cmp(b1, b1), 0);
}


void test_b1_greaterthan_b2() {
	BIG_INT b1 = { 6, 1, 0, 0, 0, 5, 2}, b2 = { 6, 0, 0, 0, 0, 5, 2};
	 	
 
	ASSERT_TRUE(big_cmp(b1, b2) > 0);
}


void test_b1_greaterthan_b2_too() {
	BIG_INT b1 = { 7, 1, 0, 0, 0, 5, 2, 1}, b2 = { 6, 2, 0, 0, 0, 5, 2};
	 	
 
	ASSERT_TRUE(big_cmp(b1, b2) > 0);
}

// Addition Tests

void test_add_one_to_nine() {
	BIG_INT big_nine = {1, 9};
	BIG_INT big_one  = {1, 1};
	BIG_INT big_ten, big_ten_ok = {2, 0, 1};
	
    ASSERT_TRUE(big_add(big_nine, big_one, big_ten));
    
    ASSERT_EQUAL_BYTE_ARRAY(big_ten_ok, big_size(big_ten_ok)+1,big_ten, big_size(big_ten)+1);
}

void test_add_very_BIG_INTs() {
	char n1[] =    "123456789012345678901234567890";
	char n2[] =    "111111111111111111111111111111";
	
	BIG_INT big_res_ok = { 30, 1,0,0,9,7,6,5,4,3,2,1,0,0,9,7,6,5,4,3,2,1,0,0,9,7,6,5,4,3,2};
   
		
	BIG_INT big1;
	BIG_INT big2;
	BIG_INT big_res;
	
	 
	big_from_string(n1, big1);
	big_from_string(n2, big2);
    
    ASSERT_TRUE(big_add(big1, big2, big_res));
    ASSERT_EQUAL_BYTE_ARRAY(big_res_ok, big_size(big_res_ok)+1, big_res, big_size(big_res)+1);
}


void test_incr_99() {
	BIG_INT bi = {2, 9, 9}, big_one = {1, 1}, big_one_hundred = {3, 0, 0, 1};
	
    ASSERT_TRUE(big_add(bi, big_one, bi));
    
    ASSERT_EQUAL_BYTE_ARRAY(big_one_hundred, big_size(big_one_hundred)+1,bi, big_size(bi)+1);
}

// Multiplication tests
	
void test_mul_25000_by_0() {
	BIG_INT big1 = { 5, 0, 0, 0, 5, 2}, big_res;
	BIG_INT big_res_ok = {1, 0};
	
    ASSERT_TRUE(big_mul_dig(big1, 0, big_res));
    
    ASSERT_EQUAL_BYTE_ARRAY(big_res_ok, big_size(big_res_ok)+1,big_res, big_size(big_res)+1);
	 
}

void test_mul_25000_by_4() {
	BIG_INT big1 = { 5, 0, 0, 0, 5, 2},  big_res;
	BIG_INT big_res_ok = {6, 0, 0, 0, 0, 0, 1};
	
    
    ASSERT_TRUE(big_mul_dig(big1, 4, big_res));
    
    ASSERT_EQUAL_BYTE_ARRAY(big_res_ok, big_size(big_res_ok)+1,big_res, big_size(big_res)+1);
    
}

 
 
int main() {

	// To String Tests
	TEST(zero_big_to_string_test);
	TEST(big_12345_to_string_test);

	// From String Tests
	TEST(test_read_123);
    TEST(test_read_0); 
		
	// Compare BigInts Tests
	TEST(test_cmp_equals);
	TEST(test_b1_greaterthan_b2);
	TEST(test_b1_greaterthan_b2_too);
	
	// Addition Tests
	TEST(test_add_one_to_nine);
	TEST(test_add_very_BIG_INTs);
	TEST(test_incr_99);
	
	// Multiplication tests
	TEST(test_mul_25000_by_0);
	TEST(test_mul_25000_by_4);
    
	return 0;
}
	
	
