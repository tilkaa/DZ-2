
#include <stdio.h>
#include <locale.h>
#include <math.h>    // sqrt-квадратный корень

int main()
{

    setlocale(LC_CTYPE, "RUS");

    int river_to_fire = 25;   // рассто€ние от реки до костра
    int river_to_man = 55;    // рассто€ние от реки до человека
    int along_river = 60;     // рассто€ние от костра до человека по течению реки

    // путь становитс€ гипотенузой пр€моугольного треугольника
    int across = river_to_fire + river_to_man;
    int path_sq = along_river * along_river + across * across;  // квадрат длины пути

    printf("------------ ¬ариант 16.  остер у реки ------------\n\n");

    printf("Ќедалеко от реки на берегу горит костер. Ќа том же берегу\n");
    printf("находитс€ человек с ведром. –ассто€ние от реки до костра %d м,\n", river_to_fire);
    printf("от реки до человека %d м, рассто€ние от костра до человека\n", river_to_man);
    printf("по течению реки %d м. –ека в этом месте течет по пр€мой.\n\n", along_river);

    printf("ћинимальное рассто€ние, которое должен пройти человек до костра,\n");
    printf("зачерпнув по дороге к нему воды в реке, равно %.2f м.\n\n", sqrt(path_sq));

    printf("–асчет: L = корень(%d^2 + %d^2) = корень(%d) = %.2f м\n\n",
        along_river, across, path_sq, sqrt(path_sq));

    printf("¬оду нужно зачерпнуть в %.2f м вдоль реки от точки напротив\n",
        1.0 * along_river * river_to_man / across);
    printf("человека (в сторону костра). ѕуть состоит из двух участков:\n");
    printf("\tот человека до реки %7.2f м\n", sqrt(path_sq) * river_to_man / across);
    printf("\tот реки до костра   %7.2f м\n", sqrt(path_sq) * river_to_fire / across);
    printf("\tвсего               %7.2f м\n", sqrt(path_sq));

    return 0;
}
