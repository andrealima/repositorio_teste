/*
 * Cadastro.c
 */

#include "main.h"
#include "Cadastro.h"

#define DEBUG_CODE
#include "debug.h"

FILE	*arquivo;
char 	resp;
int 	n_cad = 0;
char 	resp = 0;
Cad		cadastro[50];
char	string[100];
int		i;

void cadastro_arquivo1_xml (void);
void cadastro_arquivo2_xml (void);
void cadastro_arquivo3_xml (void);
void cria_arquivo_txt (void);
void menu_cadastro (void);
void imprime_cadastros_txt (void);


void cadastro_arquivo1_xml(void)
{
	arquivo = fopen("Arquivo1.xml","w");
	if(arquivo == NULL)
	{
		printf( "ARQUIVO NULL");
	}
	fprintf(arquivo, string_abertura_arquivo);

	menu_cadastro();

	for (i = 0; i < 1000; i++) {}
	fclose(arquivo);
}


cadastro_arquivo2_xml(void)
{
	arquivo = fopen("Arquivo2.xml","w");
	if(arquivo == NULL)
	{
		printf( "ARQUIVO NULL");
	}
	fprintf(arquivo, string_abertura_arquivo);

	menu_cadastro();

	for (i = 0; i < 1000; i++) {}
	fclose(arquivo);
}


void cadastro_arquivo3_xml(void)
{
	arquivo = fopen("Arquivo3.xml","w");
	if(arquivo == NULL)
	{
		printf( "ARQUIVO NULL");
	}
	fprintf(arquivo, string_abertura_arquivo);

	menu_cadastro();

	for (i = 0; i < 1000; i++) {}
	fclose(arquivo);
}


void cria_arquivo_txt(void)
{
	arquivo = fopen("Arquivo4.txt","w");
	if(arquivo == NULL)
	{
		printf( "ARQUIVO NULL");
	}
	printf("\n");
	imprime_cadastros_txt();
	fclose(arquivo);

	arquivo = fopen("Arquivo5.txt","w");
	if(arquivo == NULL)
	{
		printf( "ARQUIVO NULL");
	}
	printf("\n");
	imprime_cadastros_txt();
	fclose(arquivo);

	arquivo = fopen("Arquivo6.txt","w");
	if(arquivo == NULL)
	{
		printf( "ARQUIVO NULL");
	}
	imprime_cadastros_txt();
	fclose(arquivo);
}


void menu_cadastro (void)
{
	printf("Nome:\t\t");
	scanf("%s", cadastro[n_cad].nome);
	fprintf(arquivo, "\n\t<firstName>%s</firstName>", cadastro[n_cad].nome);
	fflush(stdin);

	printf("Sobrenome:\t");
	scanf("%s", cadastro[n_cad].sobreNome);
	fprintf(arquivo, "\n\t<lastName>%s</lastName>", cadastro[n_cad].sobreNome);
	fflush(stdin);

	printf("Estado:\t\t");
	scanf("%s", cadastro[n_cad].estado);
	fprintf(arquivo, "\n\t<state>%s</state>", cadastro[n_cad].estado);
	fflush(stdin);

	printf("Pais:\t\tBrasil\n");
	printf("\n");
	fprintf(arquivo, "\n\t<country>Brasil</country>");
	fflush(stdin);

	fprintf(arquivo, "\n</cadastre>" );
	fflush(stdin);

	n_cad++;
}


void imprime_cadastros_txt (void)
{
	for(i=0; i < n_cad; i++)
	{
		fprintf(arquivo, "Nome: %s %s\tEstado: SP\tPais: Brasil", cadastro[i].nome, cadastro[i].sobreNome, cadastro[i].estado);
		fprintf(arquivo, " \n");
		fflush(stdin);
	}
	for (i = 0; i < 1000; i++) {}
}
