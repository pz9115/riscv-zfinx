// This is a test file for RISC-V ZFINX extension
// you can compile with args "-S -march=rv64imafdzfinx -mabi=lp64d" to verify if the ZFINX extion works
// you can aslo compile without "zfinx" with args "-S -march=rv64imafd -mabi=lp64d" to compare ZFINX effort with FP regs
// compile without -S to generator binary test file on spike or qemu

#include<stdio.h>
#include<math.h>
int main(){
  
  float a = 1.0;
  float b = 2.0;
  float c;

// fadd.s
  c = a + b;

// fsub.s
  c = a - b;
 
// fmul.s
  c = a * b;
  
// fdiv.s
  c = a / b;
  
// fneg.s  
  c = -a;
  
// fabs.s unsupport yet with fsqrt fmin fmax fmadd fmsub due to opcodes problem
//  c = fabs(a);
//  printf("%f",c);
// fsqrt.s
//c = sqrt(a);
// fmin.s
//c = min(a,b);
// fmax.s
//c = max(a,b);
// compare operation
  if(a==b && a>b && a>=b && a<b && a<=b) c = 1.0;
// float cast
  unsigned u = (unsigned)c;

  unsigned long lu = (unsigned long)c;

  int d = (int)c;

  long l = (long)c;

  double e = (double)c;

// cast into float
  c = (float)u;

  c = (float)lu;

  c = (float)d;
  
  c = (float)l;

  c = (float)e;

  return 0;
}
