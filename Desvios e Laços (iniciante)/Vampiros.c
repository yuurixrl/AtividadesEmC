#include <stdio.h>
#include <math.h>

float probabilidade(int, int, int);

int main(int argc, char **argv)
{
    float prob;
    int ev1, ev2, at, d, tmp;

    while (scanf("%d %d %d %d", &ev1, &ev2, &at, &d), ev1 && ev2 && at && d)
    {
        // Calcular o número de eventos após considerar a distância
        tmp = ev1;
        ev1 = 0;
        while (tmp > 0)
        {
            tmp -= d;
            ++ev1;
        }

        tmp = ev2;
        ev2 = 0;
        while (tmp > 0)
        {
            tmp -= d;
            ++ev2;
        }

        // Calcular a probabilidade e imprimir
        prob = probabilidade(ev1, ev2, at);
        printf("%.1f\n", prob * 100);
    }

    return 0;
}

float probabilidade(int n1, int n2, int at)
{
    if (at == 3)
    {
        return (float)n1 / (n1 + n2);
    }
    else
    {
        float p;
        p = 1.0 - (6 - at) / 6.0;
        p = (1 - p) / p;
        return (1.0 - powf(p, n1)) / (1.0 - powf(p, n1+n2));
    }
}