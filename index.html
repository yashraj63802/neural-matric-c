<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Neural Matrix Core | Source Code</title>
    <script src="https://cdn.tailwindcss.com"></script>
    <script src="https://unpkg.com/lucide@latest"></script>
    
    <link href="https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/themes/prism-tomorrow.min.css" rel="stylesheet" />
    <script src="https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/prism.min.js"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/components/prism-c.min.js"></script>

    <style>
        @import url('https://fonts.googleapis.com/css2?family=Space+Grotesk:wght@400;700&family=Fira+Code:wght@400;500&display=swap');
        body { font-family: 'Space Grotesk', sans-serif; }
        code, pre { font-family: 'Fira Code', monospace !important; font-size: 13px; }
        .glass-card { background: rgba(255, 255, 255, 0.02); backdrop-filter: blur(12px); border: 1px solid rgba(255, 255, 255, 0.05); }
        .aurora-bg { background: radial-gradient(circle at 50% -20%, rgba(234, 88, 12, 0.15), rgba(2, 6, 23, 0)); }
    </style>
</head>
<body class="bg-[#020617] text-gray-300 antialiased min-h-screen aurora-bg p-6 md:p-12">

    <div class="max-w-4xl mx-auto">
        
        <div class="mb-8 flex flex-col md:flex-row justify-between items-start md:items-center gap-4">
            <div>
                <h1 class="text-3xl font-black uppercase italic text-white mb-2">Neural <span class="text-orange-500">Matrix.c</span></h1>
                <p class="text-sm text-gray-400">Dynamic memory allocation and dot-product calculations.</p>
            </div>
            <a href="https://github.com/yashraj63802/neural-matrix-c" class="flex items-center gap-2 bg-white/5 border border-gray-700 hover:border-orange-500 hover:text-orange-500 px-4 py-2 rounded-lg text-xs font-bold uppercase tracking-widest transition-colors">
                <i data-lucide="github" class="w-4 h-4"></i> View Repository
            </a>
        </div>

        <div class="glass-card rounded-xl overflow-hidden shadow-2xl shadow-orange-500/10">
            <div class="bg-[#0f172a] px-4 py-3 border-b border-gray-800 flex items-center gap-2">
                <div class="w-3 h-3 rounded-full bg-red-500/80"></div>
                <div class="w-3 h-3 rounded-full bg-yellow-500/80"></div>
                <div class="w-3 h-3 rounded-full bg-green-500/80"></div>
                <span class="ml-4 text-[10px] text-gray-500 font-bold tracking-widest uppercase">main.c — bash</span>
            </div>
            
            <div class="p-6 overflow-x-auto bg-[#020617]/50">
<pre><code class="language-c">#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

/*
 * AETHER TECH // SYSTEM ARTIFACT 01
 * NEURAL MATRIX: Dynamic Memory & Matrix Math Engine
 * Developer: Yash Raj Dwivedi
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
    
    m.data = (float **)malloc(rows * sizeof(float *));
    for (int i = 0; i &lt; rows; i++) {
        m.data[i] = (float *)malloc(cols * sizeof(float));
        for (int j = 0; j &lt; cols; j++) {
            m.data[i][j] = 0.0f;
        }
    }
    return m;
}

// Function: Free allocated memory
void freeMatrix(Matrix *m) {
    for (int i = 0; i &lt; m-&gt;rows; i++) {
        free(m-&gt;data[i]);
    }
    free(m-&gt;data);
}

// Function: Perform Matrix Multiplication (Dot Product)
Matrix multiply(Matrix a, Matrix b) {
    if (a.cols != b.rows) {
        printf("[ERROR] Dimensionality mismatch.\n");
        exit(1);
    }
    
    Matrix result = createMatrix(a.rows, b.cols);
    for (int i = 0; i &lt; a.rows; i++) {
        for (int j = 0; j &lt; b.cols; j++) {
            float sum = 0.0f;
            for (int k = 0; k &lt; a.cols; k++) {
                sum += a.data[i][k] * b.data[k][j];
            }
            result.data[i][j] = sum;
        }
    }
    return result;
}

int main() {
    printf("[SYSTEM] INITIALIZING NEURAL MATRIX CORE\n\n");

    Matrix inputs = createMatrix(1, 3);
    inputs.data[0][0] = 1.5f; inputs.data[0][1] = 2.0f; inputs.data[0][2] = -1.0f;

    Matrix weights = createMatrix(3, 2);
    weights.data[0][0] = 0.5f;  weights.data[0][1] = -0.1f;
    weights.data[1][0] = 0.2f;  weights.data[1][1] = 0.8f;
    weights.data[2][0] = -0.5f; weights.data[2][1] = 0.1f;

    Matrix outputs = multiply(inputs, weights);

    printf("[SYSTEM] Freeing allocated memory addresses...\n");
    freeMatrix(&amp;inputs);
    freeMatrix(&amp;weights);
    freeMatrix(&amp;outputs);
    
    return 0;
}</code></pre>
            </div>
        </div>

    </div>

    <script>lucide.createIcons();</script>
</body>
</html>
