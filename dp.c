// This is a test file for RISC-V ZFINX extension
// you can compile with args "-S -march=rv64imafdzfinx -mabi=lp64d" to verify if the ZFINX extion works
// you can aslo compile without "zfinx" with args "-S -march=rv64imafd -mabi=lp64d" to compare ZFINX effort with FP regs
// compile without -S to generator binary test file on spike or qemu

#include<stdio.h>
#include<math.h>

int main(){

  double a = 1.0;
  double b = 2.0;
  double c;

// fadd.d
  c = a + b;
  printf("fadd %lf is 3.000000\n",c);
// fsub.d
  c = a - b;
  printf("fsub %lf is -1.000000\n",c);
// fmul.d
  c = a * b;
  printf("fmul %lf is 2.000000\n",c);
// fdiv.d
  c = a / b;
  printf("fdiv %lf is 0.500000\n",c);
// fneg.d  
  c = -a;
  printf("fneg %lf is -1.000000\n",c);
// fabs.d
  c = fabs(c);
  printf("fabs %lf is 1.000000\n",c);
//fsqrt.d
  c = sqrt(a);
  printf("fsqrt %lf is 1.000000\n",c);
// fmax.d
  c = fmax(a,b);
  printf("fmax %lf is 2.000000\n",c);
// fmin.d
  c = fmin(a,b);
  printf("fmin %lf is 1.000000\n",c);
// compare instructions
  printf("feq %d is 0\n", a==b);
  printf("flt %d is 1\n", a<b);
  printf("fle %d is 1\n", a<=b);
  printf("fgt %d is 0\n", a>b);
  printf("fge %d is 0\n", a>=b);
// cast instructions
unsigned u = (unsigned)c;
printf("fcvt.wu.d %u is 1\n",u);
unsigned long lu = (unsigned long)c;
printf("fcvt.w.d %lu is 1\n",lu);
int d = (int)c;
printf("fcvt.lu.d %d is 1\n",d);
long l = (long)c;
printf("fcvt.l.d %ld is 1\n",l);
float f = (float)c;
printf("fcvt.s.d %f is 1.000000\n",f);
c = (double)u;
printf("fcvt.d.wu %lf is 1.000000\n",c);
c = (double)lu;
printf("fcvt.d.w %lf is 1.000000\n",c);
c = (double)d;
printf("fcvt.d.lu %lf is 1.000000\n",c);
c = (double)l;
printf("fcvt.d.l %lf is 1.000000\n",c);
c = (double)f;
printf("fcvt.d.s %lf is 1.000000\n",c);

return 0;
}
