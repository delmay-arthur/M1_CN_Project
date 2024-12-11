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

2) La constante **LAPACK_COL_MAJOR** définie la dimension majeure d'une matrice, par exemple pour **A € |R^3*3**,  
    **A = {1, 2, 3, 4, 5, 6, 7, 8, 9}**  
    ```
        / 1 4 7 \  
    A = | 2 5 8 |
        \ 3 6 9 /
    ```

3) la dimension principale notée ld représente le nombre d'éléments par lignes/colonnes d'une matrice en fonction des constantes **LAPACK_COL_MAJOR** et **LAPACK_ROW_MAJOR**, par exemple si une matrice **A** est en **LAPACK_COL_MAJOR** et **ld = 4**,  
**A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}**
    ```
        / 1 5 9  \
    A = | 2 6 10 |
        | 3 7 11 |
        \ 4 8 12 /
    ```

4) **dgbmv** fait une multiplication Matrice Vecteur avec la matrice au format DGB, Diagonal General Band.