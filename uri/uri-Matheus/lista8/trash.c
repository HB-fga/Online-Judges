#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k=0,n,sl=0,sc=0,x=0,cont=1,sq=0,l=0,v[10];
    int m[9][9];
    scanf("%d",&n);
    
    while(cont<=n)
    {
        for(i=0; i<=9; i++)
        {
            v[i]=0;
        }
        
        for(i=0; i<9; i++) //ler o sudoku
        {
            for(j=0; j<9; j++)
            {
                scanf("%d",&m[i][j]);
            }
        }
        //verificar linhas e colunas
        for(i=0; i<9; i++)
        {
            sl=0;
            sc=0;
            for(j=0; j<9; j++)
            {
                sl+=m[i][j];
                sc+=m[j][i];
                v[m[i][j]]++;
            }
            if(sl!=45 || sc!=45)
            {
                i=9;
                x=1;
            }
        }
        //verificar quadrante
        while(l<=6)
        {
            k=0;
            while(k<=6)
            {
                sq=0;
                for(i=l; i<3+l; i++)
                {

                    for(j=k; j<3+k; j++)
                    {
                        sq+=m[i][j];
                    }
                }
                if(sq!=45)
                {
                    l=6;
                    x=1;
                }
                k=k+3;
            }
            l=l+3;
        }

        //verifica repetiçao
        for(i=1; i<=9; i++)
        {
            if(v[i]!=9)
            {
                x=1;
                i=9;
            }
        }
        if(x==0)
        {
            printf("Instancia %d\n",cont);
            printf("SIM\n\n");
        }
        else
        {
            printf("Instancia %d\n",cont);
            printf("NAO\n\n");
        }
        l=0;
        k=0;
        x=0;
        cont++;
    }
    return 0;
}
