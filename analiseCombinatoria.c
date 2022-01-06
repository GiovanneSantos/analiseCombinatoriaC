#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main (){
//Variavel par ausar o switch, escolher tipo de analise a ser executado.
int opcao;
//Variaveis para calculos
int n,p,i,j,k,fat,fat2,fat3,div,resArranjo,resCombinatoria;
//Instrucoes iniciais de escolha
printf("Escolha um metodo de analise\n1-Permutacao\n\n2-Arranjos\n\n3-Combinacao\n");
scanf("%d",&opcao);
//Casos de escolhas das instrucoes
switch(opcao){
    //Casi de permutacao, e quando o numero de elementos e igual ao numero de agrupamentos

    case 1 :
    printf("Digite um valor n: ");
    scanf("%d",&n);
    fat = 1;
        for (i = 1; i <= n; i++){
            fat*=i;
}
    printf("%d",fat);
    break;

    // caso do arranjo,Chamamos de arranjo simples de n elementos tomados p a p, em que n > p,
    // a todo agrupamento de p elementos escolhidos entre os n elementos dados, que se diferenciam
    // um do outro pela ordem em que aparecem no agrupamento ou por sua natureza.

    case 2 :
    printf("Digite um valor n(arranjo): ");
    scanf("%d",&n);
    fat = 1;
        for (i = 1; i <= n; i++){
            fat*=i;
}
    printf("Digite um valor p(arranjo): ");
    scanf("%d",&p);
    div = n-p;

    fat2 =1;
        for (j = 1; j <= div; j++){
            fat2*=j;
}
        resArranjo = fat/fat2;
        printf("%d",resArranjo);
        break;

        //As combinações são subconjuntos em que a ordem dos elementos não é importante, entretanto,
        //são caracterizadas pela natureza dos mesmos.

    case 3 :
    printf("Digite um valor n(combinatoria): ");
    scanf("%d",&n);
    fat = 1;
        for (i = 1; i <= n; i++){
            fat*=i;
}
    printf("Digite um valor p(combinatoria): ");
    scanf("%d",&p);
        div = n-p;
        fat2 =1;
        for (k = 1; k <= div; k++){
            fat2*=k;}

        fat3 = 1;
        for (j = 1; j <= p; j++){
            fat3*=j;}

    resCombinatoria = (fat/(fat2*fat3));
    printf("%d",resCombinatoria);
            break;
}
}


