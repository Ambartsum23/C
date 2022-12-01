#include <stdio.h>
#include <stdlib.h>
#include "paralelepipedi.h"
#include "cylindri.h"

int main()
{
    double fartobi=0;
    double moculoba=0;
    int figuristipi=0;

    do
    {
       puts("shemoitanet figuris tipi");
       puts("1-- cylindri");
       puts("2-- martkutkha paralelepipedi");
       puts("0 -- programa daamtavrebs mushaobas");
       scanf("%d",&figuristipi);
       switch(figuristipi)
       {
       case 0:
        puts("shemotanil iqna 0");
        puts("programa amtavrebs mushaobas");
        return 0;
       case 1:
        puts("shemotanil iqna 1");
        puts("cylindris kodi araa chasmuli");
        puts("daamatet sakhlshi");
        break;
        case 2:
        puts("shemotanil iqna 2");
        puts("vitvli partkutkha paralelepipeds");
        read_paral(&x_paral,&y_paral,&z_paral,&xl_paral,&yl_paral,&zl_paral);
        fartobi=area_paral(xl_paral,yl_paral,zl_paral);
        moculoba=volume_paral(xl_paral,yl_paral,zl_paral);
        print_paral_data(&fartobi,&moculoba);
        break;
        default:
            break;
       }

    }while(1);

    return 0;
}
