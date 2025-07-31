# LBYARCH-2

## C kernel
Sabine: My PC could not handle powers of 2 above 16. Average execution time was 0.001000.

## ASM Kernel
Manaois: 

I wasn't able to test my asmkernel.asm 
I failed to create a C main program with initialization and correct call/passing parameters to C and x86-64

Vector Size (n)	            C Kernel Time (ms)            	ASM Kernel Time (ms)

    2^20                          (ms)                             (ms)
    
    2^24                          (ms)                             (ms)
    
    2^30                          (ms)                             (ms)

Expectations:

C Kernel Time will have a longer time to execute compared to ASM Kernel Time.

The assembly kernel will consistently have faster execution times than the C kernel for all tested vector sizes, primarily due to its utilization of SIMD instructions and optimized memory handling. 

The performance difference will become more pronounced with larger vectors, underscoring the advantages of data-level parallelism in assembly compared to the sequential nature of C. 



