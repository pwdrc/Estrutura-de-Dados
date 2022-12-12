# Algoritmos e Estrutura de Dados I

## Árvore Binária

### Características

	* estrutura de dados não-linear
	* formada por nós e cada nó possui dois ponteiros (uma para a esquerda e outro para a direita)
	* **raíz (root):** nó mais "alto" da árvore; não possui nenhum outro nó "pai"
	* **nó-filho (child node):** nó imediatamente sucessor de outro
	* **folhas (leaf):** um nó que não possui nenhum filho; é o último nó de uma árvore; é possível existir vários nós folhas em uma árvores
	* **altura:** distância de um nó até até o nó raíz

### Por que utilizá-la?

	* armazenar informações que naturalmente formam uma hierarquia (ex.: **file system** em um computador - /home/user/../..)
	* árvores com alguma ordem (árvore de busca binária) promovem um acesso relativamente bom para buscas (mais rápidas do que em uma lista ligada, embora mais lentas do que arrays)
	* também permitem operações moderadas de inseção e deleção (mais rápidas do que arrays e mais lentas do que listas não ordenadas)

### Principais aplicações
	* manipulação de informação hierarquica
	* facilitar a busca de informação
	* manipular listas ordenadas de informação
	* compor imagens para efeitos visuais de fluxogramas

### Código
```
// Structure of each node of the tree
 
struct node {
    int data;
    struct node* left;
    struct node* right;
}; 

/* newNode() allocates a new node
with the given data and NULL left
and right pointers. */
 
struct node* newNode(int data)
{
    // Allocate memory for new node
    struct node* node
        = (struct node*)malloc(sizeof(struct node));
 
    // Assign data to this node
    node->data = data;
 
    // Initialize left and
    // right children as NULL
    node->left = NULL;
    node->right = NULL;
    return (node);
}
 
int main()
{
    /*create root*/
    struct node* root = newNode(1);
 
    /* following is the tree after above statement
        1
       /  \
     NULL NULL
    */
    root->left = newNode(2);
    root->right = newNode(3);
 
    /* 2 and 3 become left and right children of 1
            1
           / \
          2   3
         / \ / \
    NULL NULL NULL NULL
    */
 
    root->left->left = newNode(4);
 
    /* 4 becomes left child of 2
     1
    / \
   2   3
  /  \ / \
4 NULL NULL NULL
/   \
NULL NULL
*/
    getchar();
    return 0;
}

```


