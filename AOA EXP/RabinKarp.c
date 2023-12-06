#include <stdio.h>
#include <string.h>
#include <math.h>

int d = 10;

void Rabin_Karp_Matcher(char* txt, char* patt, int d, int q) {
    int n = strlen(txt);
    int m = strlen(patt);
    int p = 0;
    double t = 0;
    double h = fmod(pow(d, m - 1), q);

    for (int i = 0; i < m; i++) {
        p = fmod((d * p + patt[i]), q);
        t = fmod((d * t + txt[i]), q);
    }

    for (int s = 0; s <= n - m; s++) {
        if (p == t) {
            int j;
            for (j = 0; j < m; j++) {
                if (txt[s + j] != patt[j]) {
                    break;
                }
            }
            if (j == m) {
                printf("Pattern found at shift: %d\n", s);
            }
        }

        if (s < n - m) {
            t = fmod((d * (t - txt[s] * h) + txt[s + m]), q);
            if (t < 0) {
                t += q;
            }
        }
    }
}

int main() {
    int q = 13;
    char txt[100], patt[100];

    printf("Enter the text string: ");
    scanf("%s",txt);
    //fgets(txt, 100, stdin);
    //txt[strcspn(txt, "\n")] = 0;

    printf("Enter the pattern string: ");
    scanf("%s",patt);
    //fgets(patt, 100, stdin);
    //patt[strcspn(patt, "\n")] = 0;

    Rabin_Karp_Matcher(txt, patt, d, q);
  return 0;
}