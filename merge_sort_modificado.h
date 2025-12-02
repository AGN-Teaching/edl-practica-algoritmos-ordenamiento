#ifndef MERGESORT_MODIFICADO_H
#define MERGESORT_MODIFICADO_H


void merge(int A[], int inicio, int medio, int fin) {
    int *aux = new int[fin - inicio + 1];
    int i = inicio;     // índice de la primera mitad
    int j = medio + 1;  // índice de la segunda mitad
    int h = 0;

    // Se recorren ambos subarreglos y se van combinando sus
    // elementos ordenadamente hasta que se haya recorrido
    // totalmente uno de ellos
    while ((i <= medio) && (j <= fin)) {
        if (A[i] <= A[j]) {
            aux[h] = A[i];
            i += 1;
        } else {
            aux[h] = A[j];
            j += 1;
        }
        h += 1;
    }

    // Si se copiaron todos los elementos de la primera mitad,
    // se copia el resto de la segunda mitad
    if (i > medio) {
        while (j <= fin) {
            aux[h] = A[j];
            j += 1;
            h += 1;
        }
    } // Si no, se copia el resto de la primera mitad
    else {
        while (i <= medio) {
            aux[h] = A[i];
            i += 1;
            h += 1;
        }
    }
    
    h = 0;
    for (int k = inicio; k <= fin; k++) {
        A[k] = aux[h];
        h += 1;
    }
    delete [] aux;
}


/**
 * Merge sort modificado.
 * @param A arreglo a ordenar.
 * @param k tamaño del subarreglo para llamar a insertion sort directamente.
 * @param inicio índice inicial del subarreglo a ordenar.
 * @param fin índice final del subarreglo a ordenar.
 */
void merge_sort_modificado(int A[], int k, int inicio, int fin) {
    // implementar
}

#endif // MERGESORT_MODIFICADO_H
