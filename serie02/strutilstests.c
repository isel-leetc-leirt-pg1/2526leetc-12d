/**
 * strutilstests.c
 * Este programa contém um conjunto de testes para validar as implementações
 * presentes no ficheiro "strutils.c".
 * 
 * ISEL, outubro de 2025
 * 
 * Build : gcc -Wall  -o strutilstests strutilstests.c strutils.c  
 * Execute : strutilstests
 *---------------------------------------------------------------------------*/

#include <stdbool.h>
#include <string.h>

#include "tstutils.h"
#include <limits.h>
#include "strutils.h"


// Trim tests

void trim_empty_string() {
    char line[] = "     ";
    str_trim(line);
    ASSERT_TRUE(line[0] == 0);
}

void trim_start_string() {
    char line[] = "     hello";
    char expected[] = "hello";
    str_trim(line);
    
    ASSERT_EQUAL_STR(expected, line);
}


void trim_end_string() {
    char line[] = "hello    ";
    char expected[] = "hello";
    str_trim(line);
    
    ASSERT_EQUAL_STR(expected, line);
}


void trim_all_string() {
    char line[] = "     hello    ";
    char expected[] = "hello";
    str_trim(line);
    
    ASSERT_EQUAL_STR(expected, line);
}

// Pack tests


void nop_pack_test() {
    char str[] = " ";
    char expected[] = " ";

    str_pack(str);
    ASSERT_EQUAL_STR(expected, str);
}

void pack_to_a_single_char() {
    char str[] = "aaaaa";
    char expected[] = "a";

    str_pack(str);
    ASSERT_EQUAL_STR(expected, str);
}

void multiple_packs_test() {
    char str[] = "         OOOOOOPS, WHAAAAT????";
    char expected[] = " OPS, WHAT?";

    str_pack(str);
    ASSERT_EQUAL_STR(expected, str);
}

// Delete Char Tests

void nop_delete_char_test() {
    char str[] = "abc def";
    char dc = 'C';
    char expected[] = "abc def";
    str_del_char(str, dc, false);
    ASSERT_EQUAL_STR(expected, str);
}

void remove_all_delete_char_test() {
    char str[] = "aaaaaaaa";
    char dc = 'A';
    char expected[] = "";
    str_del_char(str, dc, true);
    ASSERT_EQUAL_STR(expected, str);
}

// Palindrome tests

void palindrome_simple_string() {
    char str[] = "radar";
    
    ASSERT_TRUE(str_is_palindrome(str));
}

 
void palindrome_joke_string() {
    char str[] = "A diva em Argel alegra-me a vida.";
    
    ASSERT_TRUE(str_is_palindrome(str));
}

// Anagram tests

void single_char_not_anagram_test() {
    char str1[] = "a", str2[] = "a";
    
    ASSERT_FALSE(str_anagram(str1, str2));
}

void general_word_anagram_test() {
    char str1[] = "desmontaria", str2[] = "setimo ANDAR";

    ASSERT_TRUE(str_anagram(str1, str2));
}

void single_words_not_anagram_test() {
     char str1[] = "rota1", str2[] = "ator";

    ASSERT_FALSE(str_anagram(str1, str2));
}


int main() {
    
    // Trim tests
    TEST(trim_empty_string);
    TEST(trim_start_string);
    TEST(trim_end_string);
    TEST(trim_all_string);

    // Pack tests
    TEST(pack_to_a_single_char);
    TEST(nop_pack_test);
    TEST(multiple_packs_test);

    // Delete Char Tests
    TEST(nop_delete_char_test);
    TEST(remove_all_delete_char_test);

    // Palindrome tests
    TEST(palindrome_simple_string);
    TEST(palindrome_joke_string);

    // Anagram tests
    TEST(single_char_not_anagram_test);
    TEST(single_words_not_anagram_test);
    TEST(general_word_anagram_test);

	return 0;
}
	


