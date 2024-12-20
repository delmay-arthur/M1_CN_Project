/**********************************************/
/* lib_poisson1D.c                            */
/* Numerical library developed to solve 1D    */ 
/* Poisson problem (Heat equation)            */
/**********************************************/
#include "lib_poisson1D.h"

void set_GB_operator_colMajor_poisson1D(double* AB, int *lab, int *la, int *kv){
  if (!*kv) {
    for (int i = 0; i < *la; i++) {
      (3*i  )[AB] = -1;
      (3*i+1)[AB] =  2;
      (3*i+2)[AB] = -1;
    }
    AB[0] = 0;
    AB[(*la)*(*lab)-1] = 0;
  } else {
    for (int i = 0; i < *la; i++) {
      (4*i  )[AB] =  0;
      (4*i+1)[AB] = -1;
      (4*i+2)[AB] =  2;
      (4*i+3)[AB] = -1;
    }
    AB[1] = 0;
    int index = (*la) * (*lab) - 1;
    AB[index] = 0;
    printf("last index : %d\n", index);
    printf("la : %d, lab : %d, kv : %d\n", *la, *lab, *kv);
  }
}

void set_GB_operator_colMajor_poisson1D_Id(double* AB, int *lab, int *la, int *kv){
}

void set_dense_RHS_DBC_1D(double* RHS, int* la, double* BC0, double* BC1){
}  

void set_analytical_solution_DBC_1D(double* EX_SOL, double* X, int* la, double* BC0, double* BC1){
}  

void set_grid_points_1D(double* x, int* la){
  for (int i = 0; i <= *la; i++) {
    x[i] = 0;
  }
}

double relative_forward_error(double* x, double* y, int* la){
}

int indexABCol(int i, int j, int *lab){
  return 0;
}

int dgbtrftridiag(int *la, int*n, int *kl, int *ku, double *AB, int *lab, int *ipiv, int *info){
  dgbtrf_(la, la, kl, ku, AB, lab, ipiv, info);
  return *info;
}
