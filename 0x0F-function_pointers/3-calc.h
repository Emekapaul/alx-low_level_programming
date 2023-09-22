#ifndef CALC_H
<<<<<<< HEAD
#define CALC_H

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */
=======

#define CALC_H

/**

 * struct op - A struct op.

 * @op: The operator.

 * @f: The associated function.

 */

typedef struct op

{

        char *op;

        int (*f)(int a, int b);

} op_t;


int op_add(int a, int b);

int op_sub(int a, int b);

int op_mul(int a, int b);

int op_div(int a, int b);

int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);


#endif
>>>>>>> 39e2ca8dd48797edc4e4730bec23d308770d0b68
