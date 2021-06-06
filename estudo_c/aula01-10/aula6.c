#include    <stdio.h>

int main(void) //função principal
{
    int minhaIdade; //seta variável
    minhaIdade = 39;    //usa variável
    
    int maeIdade = 66; //variável também pode ser assim
    int paiIdade = 65;
    int irmaoIdade = 37;

    int idadeTotal = minhaIdade;// + maeIdade - paiIdade + irmaoIdade / 3;

    printf("Idade total é %i\n", idadeTotal);//variável é na ordem dos %

    return 0;
}