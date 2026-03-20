#include <stdio.h>
#include <stdlib.h>

/*
 * AETHER TECH // SYSTEM ARTIFACT 01
 * NEURAL MATRIX: Dynamic Memory & Matrix Math Engine
 * Developer: Yash Raj Dwivedi
 * Description: Simulates the core mathematical operations (Dot Product)
 * required for Artificial Neural Networks using dynamic memory allocation in C.
 */

// Define the Matrix structure
typedef struct {
    int rows;
    int cols;
    float **data;
} Matrix;

// Function: Allocate dynamic memory for a matrix
Matrix createMatrix(int rows, int cols) {
    Matrix m;
    m.rows = rows;
    m.cols = cols;
    
    // Allocate memory for rows
    m.data = (float **)malloc(rows * sizeof(float *));
    
    // Allocate memory for columns
    for (int i = 0; i < rows; i++) {
        m.data[i] = (float *)malloc(cols * sizeof(float));
        // Initialize to 0.0
        for (int j = 0; j < cols; j++) {
            m.data[i][j] = 0.0f;
        }
    }
    return m;
}

// Function: Free allocated memory to prevent memory leaks
void freeMatrix(Matrix *m) {
    for (int i = 0; i < m->rows; i++) {
        free(m->data[i]);
    }
    free(m->data);
    m->rows = 0;
    m->cols = 0;
}

// Function: Perform Matrix Multiplication (Dot Product)
Matrix multiply(Matrix a, Matrix b) {
    if (a.cols != b.rows) {
        printf("[ERROR] Dimensionality mismatch. Cannot multiply.\n");
        exit(1);
    }
    
    Matrix result = createMatrix(a.rows, b.cols);
    
    for (int i = 0; i < a.rows; i++) {
        for (int j = 0; j < b.cols; j++) {
            float sum = 0.0f;
            for (int k = 0; k < a.cols; k++) {
                sum += a.data[i][k] * b.data[k][j];
            }
            result.data[i][j] = sum;
        }
    }
    return result;
}

// Function: Print Matrix to Terminal
void printMatrix(Matrix m) {
    for (int i = 0; i < m.rows; i++) {
        printf("  [ ");
        for (int j = 0; j < m.cols; j++) {
            printf("%6.2f ", m.data[i][j]);
        }
        printf("]\n");
    }
    printf("\n");
}

int main() {
    printf("\n=========================================\n");
    printf(" [SYSTEM] INITIALIZING NEURAL MATRIX CORE\n");
    printf("=========================================\n\n");

    // 1. Create Input Matrix (1 row, 3 columns) - e.g., Sensor Data
    Matrix inputs = createMatrix(1, 3);
    inputs.data[0][0] = 1.5f;
    inputs.data[0][1] = 2.0f;
    inputs.data[0][2] = -1.0f;

    printf(">> INPUT TENSOR (1x3):\n");
    printMatrix(inputs);

    // 2. Create Weights Matrix (3 rows, 2 columns) - e.g., Neural Weights
    Matrix weights = createMatrix(3, 2);
    weights.data[0][0] = 0.5f;  weights.data[0][1] = -0.1f;
    weights.data[1][0] = 0.2f;  weights.data[1][1] = 0.8f;
    weights.data[2][0] = -0.5f; weights.data[2][1] = 0.1f;

    printf(">> WEIGHT TENSOR (3x2):\n");
    printMatrix(weights);

    // 3. Compute Forward Pass (Inputs * Weights)
    printf(">> COMPUTING DOT PRODUCT...\n\n");
    Matrix outputs = multiply(inputs, weights);

    printf(">> OUTPUT TENSOR (1x2):\n");
    printMatrix(outputs);

    // 4. Clean up memory
    printf("[SYSTEM] Freeing allocated memory addresses...\n");
    freeMatrix(&inputs);
    freeMatrix(&weights);
    freeMatrix(&outputs);
    printf("[SYSTEM] Process Terminated Successfully.\n\n");

    return 0;
}