# Resumo - C

## Estrutura

* A estrutura geral de um probrama, com funções, deve seguir a seguinte forma:

*includes*
*protótipos das funções*
*definição das funções*
*função principal*

**Obs.: embora a declaração explícita dos protótipos das funções não seja necessária, é uma boa prática. Caso os protótipos não sejam declarados, as funções precisam ser definidas antes de srem utilizadas por outras finções.**

## Funções

* A função **main** é a principal e a primeira a ser executada do programa; é imprescindível no código

### Funções que fazem parte de algum biblioteca

* Para utilizar funções que estão incluídas em alguma biblioteca, deve-se incluir o arquivo de cabeçalho **#include**<biblioteca.h> no inínico do programa
* Na compilação, (gcc) deve-se utilizar a opção "-lm"
