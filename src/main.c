/*
 * main.c
 *
 *  Created on: 28/07/2011
 *      Author: andrea.lima
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <windows.h>
#include "Cadastro.h"
#include "main.h"

// Defines Globais
#define DEBUG_CODE
#include "debug.h"

void cadastro_arquivo1_xml(void);
void cadastro_arquivo2_xml(void);
void cadastro_arquivo3_xml(void);

void cria_arquivo_txt(void);

int main(int argc, char *argv[])
{
	printf("*** LISTA DE CADASTRO ***\n");
	printf("\n");

	cadastro_arquivo1_xml();
	cadastro_arquivo2_xml();
	cadastro_arquivo3_xml();
	cria_arquivo_txt();

	return 0;
}

size_t fread(void *ptr, size_t size, size_t count, FILE *stream);
