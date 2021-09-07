#include <stdio.h>
int main()
{
    int anno_calcolo;
    int distanza;
    int anno;
    int indice_crescita;
    long unsigned int popolazione;
    popolazione=7850000000;
    anno=2021;
    indice_crescita=75000000;
    printf("inserire anno fino a quando si vuole calcolare la crescita ondiale:\n");
    printf("(2022+)\n");
    scanf("%d",&anno_calcolo);
    if(anno_calcolo<2022)
    {
        printf("anno non valido\n");
    }
    else;
    if(anno_calcolo>=2022&anno_calcolo<2067)
    {
        printf("anno\tpopolazione\tcrescita\n");
        while(anno_calcolo!=anno)
        {
            popolazione=popolazione+indice_crescita;
            indice_crescita=indice_crescita-1700000;
            printf("%d\t%lu\t%d\n",anno,popolazione,indice_crescita);
            anno++;
        }
    }
    else;
    if(anno_calcolo>=2067)
    {
        popolazione=9542000000;
        anno=2067;
        indice_crescita=-3200000;
        printf("inserire anno fino a quando si vuole calcolare la crescita ondiale:\n");
        printf("anno\tpopolazione\tcrescita\n");
        printf("anno    popolazione     crescita
                2021    7925000000      73300000
                2022    7998300000      71600000
                2023    8069900000      69900000
                2024    8139800000      68200000
                2025    8208000000      66500000
                2026    8274500000      64800000
                2027    8339300000      63100000
                2028    8402400000      61400000
                2029    8463800000      59700000
                2030    8523500000      58000000
                2031    8581500000      56300000
                2032    8637800000      54600000
                2033    8692400000      52900000
                2034    8745300000      51200000
                2035    8796500000      49500000
                2036    8846000000      47800000
                2037    8893800000      46100000
                2038    8939900000      44400000
                2039    8984300000      42700000
                2040    9027000000      41000000
                2041    9068000000      39300000
                2042    9107300000      37600000
                2043    9144900000      35900000
                2044    9180800000      34200000
                2045    9215000000      32500000
                2046    9247500000      30800000
                2047    9278300000      29100000
                2048    9307400000      27400000
                2049    9334800000      25700000
                2050    9360500000      24000000
                2051    9384500000      22300000
                2052    9406800000      20600000
                2053    9427400000      18900000
                2054    9446300000      17200000
                2055    9463500000      15500000
                2056    9479000000      13800000
                2057    9492800000      12100000
                2058    9504900000      10400000
                2059    9515300000      8700000
                2060    9524000000      7000000
                2061    9531000000      5300000
                2062    9536300000      3600000
                2063    9539900000      1900000
                2064    9541800000      200000
                2065    9542000000      -150000
                2066    9542000000      -320000")
    
    }
}