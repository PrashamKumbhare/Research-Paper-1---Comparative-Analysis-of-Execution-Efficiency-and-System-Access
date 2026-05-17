# Comparative Analysis of Execution Efficiency and System Accessibility in Native and Browser-Based Runtime Environments

## Overview
This undergraduate systems research project experimentally compares execution efficiency and filesystem accessibility between native compiled execution environments and browser-based runtime environments.

The study focuses on:
- Native compiled execution using C
- Managed/interpreted execution using Python
- Browser-based JavaScript runtime behavior

The project investigates:
- Runtime abstraction overhead
- Execution efficiency differences
- Browser sandbox restrictions
- Filesystem accessibility
- Security versus performance trade-offs

---

## Experimental Results

### Execution Benchmark
A computational benchmark involving 100 million iterative summation operations was conducted.

| Language | Execution Time |
|---|---|
| C | 0.046 seconds |
| Python | 3.73 seconds |

Results demonstrated that Python execution required approximately 81 times more execution time compared to native compiled C execution for the same workload.

---

## Filesystem Accessibility Analysis

### Native C
- Direct filesystem access
- File creation support
- Operating system interaction
- Minimal sandbox restrictions

### Browser JavaScript
- Permission-based access
- Sandboxed environment
- Restricted hardware interaction
- Security isolation mechanisms

---

## Technologies Used
- C (GCC Compiler)
- Python
- JavaScript
- LaTeX (IEEE Format)
- Overleaf

---

## Repository Contents

| File | Description |
|---|---|
| research-paper.pdf | Final IEEE-style research paper |
| benchmark_graph.png | Benchmark comparison graph |
| c_benchmark.c | Native C benchmark implementation |
| python_benchmark.py | Python benchmark implementation |
| README.md | Project overview |

---

## Research Focus
This project explores architectural trade-offs between:
- Performance
- Portability
- Security
- Runtime abstraction
- System accessibility

---

## Future Work
Future research directions include:
- WebAssembly benchmarking
- Node.js runtime analysis
- Rust performance comparison
- Memory utilization benchmarking
- Browser engine optimization analysis

---

## Author
Prasham Kumbhare  
B.Tech Computer Science Engineering  
DY Patil International University
