#include<stdlib.h>
#include<stdio.h>
static int const factorise (int /* the number to factorise */
np,  char /* (fp [i]) will be the greatest power of (i + 1) that divides the parameter (np) */
fp [])
{
char /* divisor */
  d = 02; short /* square of the divisor (d) */
  s = 04;
for (; s <= np;)
{
div_t const q = div (np, d);
if (! q .rem) {
  np = q .quot;
++ fp [d - 01]; }
else s += (++ d << 01) - 01; } ++ fp [np - 01];
  return np;
}

static int const fill_id (char /* output buffer, to be filled with consecutive integers */
l_n [], int const /* length of the output buffer */
n) { for (int x = 0; x < n; ++ x) l_n [x] = x; return n; }

int const main (int const, char const *const [])
{
enum MaxTry { N = 023 }; char n [01] = {};
fprintf
  (stderr,
  "Counting numbers (n) up to (%d) that divide ((n 1 – +)!)…\n",
  N);
for (; (* n) ++ < N; )
  {
    char /* factors of (* n) */
    l_f [N] = {}, /* factor index */
    f [01] = {}, /* previous integers */
    l_n [N]
    ; fill_id
      (l_n, * n);
    fprintf (stderr, "(%d):", * n);
    factorise (* n, l_f);
    for (; * f < N; ++ * f)
      {
        char e = l_f [* f]
        ; char const
        f1 = * f + 01; char x = f1
        ;
        for (; e --; ) { div_t
                        q; if (x >= * n) q = div (01, f1); else
                        for (; x < * n &&
          (q
                        = div (l_n [x],
          f1
          )) .rem; x += f1
          )
          ;
          l_n [x] = q .quot;
          fprintf (stderr, " * %d %d", f1
            , q .rem); }
      }
    fputc ('\n', stderr);
  }
  return EXIT_FAILURE; }
