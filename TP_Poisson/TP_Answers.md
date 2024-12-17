# Réponses Aux Questions

## Exercice 3

1) Pour **A € |R^n*m**,  
    ```c
    // déclaration
    double A[n*m]; 

    // allocation
    for (int i = 0; i < n*m; i++) {
        A[i] = i + 1;
    }
    ```

2) La constante **LAPACK_COL_MAJOR** définie la dimension majeure d'une matrice, par exemple pour $\bold{A\in{\R^{3*3}}}$,  
    **A = {1, 2, 3, 4, 5, 6, 7, 8, 9}**  

$$
A = \begin{pmatrix}
    1 & 4 & 7\\
    2 & 5 & 8\\
    3 & 6 & 9\\
\end{pmatrix}
$$

3) la dimension principale notée ld représente le nombre d'éléments par lignes/colonnes d'une matrice en fonction des constantes **LAPACK_COL_MAJOR** et **LAPACK_ROW_MAJOR**, par exemple si une matrice **A** est en **LAPACK_COL_MAJOR** et **ld = 4**,  
**A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}**

$$
A = \begin{pmatrix}
    1 & 5 & 9 \\
    2 & 6 & 10\\
    3 & 7 & 11\\
    4 & 8 & 12\\
\end{pmatrix}
$$

4) **dgbmv** fait une multiplication Matrice Vecteur avec la matrice au format DGB, Diagonal General Band.

5) **dgbtrf** fait une factorisation **LU** d'une matrice au format DGB

6) **dgbtrs** résoud un système d'équations linéaires $\bold{A*X = B}$ ou $\bold{A^T*X = B}$ avec A sous forme DGB et factorisé LU par **dgbtrf**

7) **dgbsv** résoud un système d'équtions linéaires $\bold{A*X=B}$ avec A sous forme DGB

8) $\bold{r = b - A\hat{x}}$  
   $\bold{||r|| = {{||x - \hat{x}||}\over{||x||}}}$  

    $y = dotprod(x, x)$  
    $y = sqrt(y)$  
    $dx = x-\hat{x}$  
    $z = dotprod(dx, dx)$  
    $z = sqrt(z)$  
    $r = y / z$


## exercice 4

3) pour $\bold{A\in{\R^{3*n}}, v\in{\R^n}}$,   
    >si **v = (1, 0, 0, ..., 0)**   
    alors **A\*v = (0, 2, -1)** si kv = 0, **(0, 0, 2, -1)** si kv = 1 
    
    >si **v = (0, 0, ..., 0, 1, 0, ..., 0)**  
    alors **A\*v = (0, -1, 2, -1)** / **(-1, 2, -1)** selon kv

    >si **v = (0, 0, ..., 0, 1)**  
    alors **A\*v = (0, -1, 2, 0)** / **(-1, 2, 0)** selon kv

## exercice 5

2) **dgbsv** a une complexitée quadratique