#include <stdio.h>

int main(){

const float picanha = 180;
const float peitodefrango = 120;
const float sobrecoxa = 150;
const float contrafile = 180;
const float asinha = 100;
const float paodealho = 0.5;
const float queijo = 0.5;
const float cocacola = 1000;
const float cerveja = 6 * 350;
const float energetico = 2 * 475;

float picanhaT,peitodefrangoT,sobrecoxaT,contrafileT,asinhaT,
paodealhoT,queijoT,cocacolaT,cervejaT,energeticoT;
 
int h,m,c;
printf("Insira a Quantidade de Homens: \n");
scanf("%i",&h);
printf("Insira a Quantidade de Mulheres: \n");
scanf("%i",&m);
printf("Insira a Quantidade de Criancas: \n");
scanf("%i",&c);

picanhaT = picanha * h;
picanhaT = picanhaT + ((picanha * 0.75)*m);
picanhaT = picanhaT + ((picanha * 0.50)*c);
picanhaT = picanhaT / 1000; 

printf("\n--SUA LISTA PARA ESSE CHURRASCO E DE--");
printf("\nTOTAL A COMPRAR DE E DE PICANHA: %.3f kg", picanhaT);

peitodefrangoT = peitodefrango * h;
peitodefrangoT = peitodefrangoT + ((peitodefrango * 0.75)*m);
peitodefrangoT = peitodefrangoT + ((peitodefrango * 0.50)*c);
peitodefrangoT = peitodefrangoT / 1000;

printf("\nTOTAL A COMPRAR DE PEITO DE FRANGO: %.3f kg", peitodefrangoT);

sobrecoxaT = sobrecoxa * h;
sobrecoxaT = sobrecoxaT + ((sobrecoxa * 0.75)*m);
sobrecoxaT = sobrecoxaT + ((sobrecoxa * 0.50)*c);
sobrecoxaT = sobrecoxaT / 1000;

printf("\nTOTAL A COMPRAR DE SOBRECOXA: %.3f kg",sobrecoxaT);

contrafileT = contrafile * h;
contrafileT = contrafileT + ((contrafile * 0.75)*m);
contrafileT = contrafileT + ((contrafile * 0.50)*c);
contrafileT = contrafileT / 1000;

printf("\nTOTAL A COMPRAR DE CONTRA FILE: %.3f kg",contrafileT);

asinhaT = asinha * h;
asinhaT = asinhaT + ((asinha * 0.75)*m);
asinhaT = asinhaT + ((asinha * 0.50)*c);
asinhaT = asinha / 1000;

printf("\nTOTAL A COMPRAR DE ASINHA: %.3f kg",asinhaT);

paodealhoT = paodealho * h;
paodealhoT = paodealhoT + ((paodealho)*m);
paodealhoT = paodealhoT + ((paodealho)*c);

printf("\nTOTAL A COMPRAR DE PAO DE ALHO: %.0f BANDEJA", paodealhoT);

queijoT = queijo * h;
queijoT = queijoT + ((queijo)*m);
queijoT = queijoT + ((queijo)*c);

printf("\nTOTAL A COMPRAR DE QUEIJO COALHO: %.0f PACOTE", queijoT);

cocacolaT = cocacola * h;
cocacolaT = cocacolaT + ((cocacola * 0.75)*m);
cocacolaT = cocacolaT + ((cocacola * 0.50)*c);
cocacolaT = cocacolaT / 1000;

printf("\nTOTAL A COMPRAR DE COCA-COLA: %.0f LITROS", cocacolaT);

cervejaT = cerveja * h;
cervejaT = cervejaT + ((cerveja * 0.75)*m);
cervejaT = cervejaT / 350;

printf("\nTOTAL A COMPRAR DE CERVEJA: %.0f LATAS", cervejaT);

energeticoT = energetico * h;
energeticoT = energeticoT + ((energetico * 0.75)*m);
energeticoT = energeticoT / 400;

printf("\nTOTAL A COMPRAR DE ENERGETICOS: %.0f LATAS", energeticoT);
return 0;
}
