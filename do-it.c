#include<stdlib.h>
#include<stdio.h>
static int const factorise (int np,  char fp [])
{
char d = 02; short s = 04;
for (; s < np;)
{
div_t const q = div (np, d);
if (! q .rem) {
  np = q .quot;
++ fp [d - 01]; }
else s += (++ d << 01) - 01; return np;
}
int const main (int const, char const *const [])
{
enum MaxTry { N = 023 }; char n = {};
fprintf
  (stderr,
  "Counting numbers (n) up to (%d) that divide ((n 1 – +)!)…\n",
  N);
for (; n ++ < N; )
  {
    char l_f [N] = {}, char f = {};
    fprintf (stderr, "(%d):", n);
    factorise (n, l_f);
    for (; f < N; ++ f)
      {
        char e = p [f];
        for (; e --; ) fprintf (stderr, " * %d", f + 01);
      }
    fputc ('\n', stderr);
  }
  return EXIT_FAILURE; }
