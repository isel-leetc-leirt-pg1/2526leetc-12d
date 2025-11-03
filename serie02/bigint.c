 
#include "bigint.h"

 

/**
 * Descrição:
 * 		retorna o número de dígitos do BIG_INT recebido por parâmetro
 * Parâmetros:
 *     
 * 		b - BIG_INT  
 * Retorno:
 * 		o número de dígitos de "b"
 */
int big_size(const BIG_INT b) {
	return b[0];
}

/**
 * Descrição:
 *   A função constrói a string "str" com a representação
 *   do  BIG_INT recebido por parâmetro
 *  
 * Parâmetros:
 *   big - BIG_INT  a converter para string
 *   str - a string a construir.
 * Retorno:
 *   não tem
 */
void big_to_string(const BIG_INT big, char str[]) {
	// TODO
}
 

/**
 * Descrição:
 *   A função preenche um BIG_INT a partir de uma string com a representação de um valor inteiro  
 * Parâmetros:
 *   n - string de caracteres numéricos.
 *   big - BIG_INT a construir a partir de "n"
 * Retorno:
 *   A função retorna true se construiu o BIG_INT "big" com sucesso ou false 
 *   se foi encontrado algum caracter não numérico  
 */
bool big_from_string(const char n[], BIG_INT big) {
	// TODO
	return false;
}


/**
 * Descrição:
 *   A função compara dois BIG_INT e retorna um valor negativo, zero
 *   ou um valor positivo consoante o primeiro seja menor, igual ou superior ao segundo 
 * Parâmetros:
 *   b1 - primeiro BIG_INT
 *   b2 - segundo BIG_INT
 * Retorno:
 *    valor negativo -> b1 < b2
 *    0              -> b1 == b2
 *    valor positivo -> b1 > b2
 */
int big_cmp(const BIG_INT b1, const BIG_INT b2) {
	 // TODO
	 return 0;
}



/**
 * Descrição:
 *   A função calcula a soma de dois BIG_INT guardando-a num terceiro BIG_INT  
 * Parâmetros:
 *   b1 - primeiro operando BIG_INT  
 *   b2 - segundo  operando BIG_INT  
 *   bm - BIG_INT que guarda  o resultado
 * Retorno:
 *   A função retorna false se ocorrer overflow, isto é, se 
 *   a soma não couber no máximo de dígitos permitido.
 *   A função retorna true se a operação for bem sucedida.
 */
bool big_add(const BIG_INT b1, const BIG_INT b2, BIG_INT bm) {
	// TODO
	return false;
}

/**
 * Descrição:
 *   A função multiplica um BIG_INT por um inteiro (de 0 a 9) guardando
 *   o resultado noutro BIG_INT 
 * Parâmetros:
 *   b - primeiro BIG_INT
 *   n - valor inteiro longo
 *   bres  - resultado da multiplicação
 * Retorno:
 *   A função retorna true ou false se sucesso ou insucesso ("overflow")
 */	
bool big_mul_dig(const BIG_INT b, int d, BIG_INT bres) {
	// TODO
	return false;
		
}
 
