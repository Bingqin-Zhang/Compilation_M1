#ifndef _AST_H_
#define _AST_H_

/* unary-and-binary tree structure */
struct _tree {
  char car;                    	/* char for arithmetic operation */
  int val;			/* int  for value */
  char* nom;
  struct _tree* left;    	/* used for unary node but NULL if leaf */
  struct _tree* right;   	/* NULL if unary node or leaf*/
};

typedef struct _tree* AST;

/* create an AST from a root value and two AST sons */
AST newBinaryAST(char car, AST left, AST right);

/* create an AST from a root value and one AST son */
AST newUnaryAST(char car, AST son);

/* create an AST leaf from a value */
AST newLeafAST(int val);

AST newLeafValAST(char car,char* nom);

AST newLeafNomAST(char* nom);

/* delete an AST */
void freeAST(AST t);

/* print an AST*/
void printAST(AST t);

void test(int IsElse);

void PrintElemFile(AST t, FILE* fp);

void codeFile(AST t, char* file);

void PrintElem(AST t);

void code(AST t);

#endif // !_AST_H_
