/*
 * Cadastro.h
 *
 *  Created on: 10/10/2011
 *      Author: andrea.lima
 */

#include <stdint.h>

#ifndef CADASTRO_H_
#define CADASTRO_H_

void cadastrar(void);
void exibe_tabela_cadastro(void);

#define string_abertura_arquivo "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n<cadastre user=\"Cadastro\">"

typedef struct _Cad
{
	char		nome[20];
	char		sobreNome[30];
	char		estado[20];
	int			idade;
	char		sexo;
	uint64_t	cpf;
}Cad;

#endif /* CADASTRO_H_ */
