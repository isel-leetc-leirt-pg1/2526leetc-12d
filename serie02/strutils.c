#include "strutils.h"
#include <string.h>
#include <ctype.h>

/**
 * Descrição:
 * 	remove os espaços iniciais e finais na string "str"
 * Parâmetros:
 * 	"str": texto a converter
 * Retorno:
 * 	Não tem
 */
void str_trim(char str[]) {
  // TODO
}

/** 
 * Descrição:
 *   Modifica a string "str" compactando
 *   conjuntos de caracteres repetidos e consecutivos num único caracter.
 *   Na avaliação distinga minúsculas de maiúsculas
 *   Ex.: "aaAA---bbbCC" -> "aA-bC" 
 * Parâmetros:
 *   "str": string  a converter
 * Retorno:
 *   Não tem
 *   
 */
void str_pack(char str[]) {
    // TODO
}

/** 
 * Descrição:
 *      Remove todas as ocorrências do char "ch" na string "str",
 *      ignorando ou não a diferença entre maiúsculas e minúsculas.
 * Parâmetros:
 *      "str": string  a converter
 * Retorno:
 *      Não tem
 */
void str_del_char(char str[], int ch, bool ignoreCase) {
    // TODO
}

 
   
/**
 * Descrição:
 * 		A função bool str_is_palindrome(char str[]) retorna true se a texto presente em "str"
 * 		for palíndromo. O texto(ou palavra) diz-se palindromo quando se lê da mesma maneira,da esquerda para a direita 
 * 		ou da direita para a esquerda, como por exemplo, ovo, osso, radar.
 * 		Na avaliação deve ser ignorada a capitalização
 *
 * Paràmetros:
 * 		"str" - o texto a avaliar
 * Exemplo:
 *		char words[80]="radar";
 *		bool b = str_is_palindrome(words); // o resultado do b é true
 */
bool str_is_palindrome(const char str[]) {
	 // TODO
	return false;
}

/**
 * Descrição:
 *		A função "str_anagram" verifica se as duas strings recebidas em parâmetro são anagramas, 
 * 		ou seja, se têm, exatamente, as mesmas letras (ignorando os espaços), 
 * 		embora os carateres possam estar dispostos  em diferentes posições.
 * 		Na verificação não distinga entre letras maiúsculas e minúsculas. 
 * Parâmetros:
 *		"str1": primeira string a avaliar
 *	    "str2": segunda string a avaliar
 * Retorno:
 *	"true" se as string "str1" e "str2" só contiverem letras (pelo menos duas) e espaços, e forem anagramas, 
 *  "false" caso contrário. 
 * Ex: “setimo ANDAR” e “desmontaria” são anagramas.
 *     "ator" e "rota1" não são anagramas
 */
bool str_anagram(const char str1[], const char str2[]) {
    // TODO
    return false;
}



