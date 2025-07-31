# LBYARCH-2

## C kernel
Sabine: My PC could not handle powers of 2 above 16. Average execution time was 0.001000.

## ASM Kernel
Manaois: 

Vector Size (n)	            C Kernel Time (ms)            	ASM Kernel Time (ms)

    2^20
    
    2^24
    
    2^30

Analysis:

As expected, the assembly kernel will consistently have faster execution times than the C kernel for all tested vector sizes, primarily due to its utilization of SIMD instructions and optimized memory handling. 

The performance difference will become more pronounced with larger vectors, underscoring the advantages of data-level parallelism in assembly compared to the sequential nature of C. 



