#include<stdio.h>
#include<stdlib.h>

typedef struct Rationnel {
	int num;
	int den;
}Rationnel;


Rationnel saisieRat(){
	
	Rationnel Rat;
	int i;
	

		printf("Entrez le numerateur\n");
		scanf("%d",&Rat.num);
		
		printf("Entrez le denominateur\n");
		scanf("%d",&Rat.den);
	
	
	return Rat;
}
// Addition

Rationnel somme(Rationnel nb1, Rationnel nb2){
	
	Rationnel somme;
	
	if(nb1.den == nb2.den){
		somme.num = nb1.num + nb2.num;
		somme.den = nb1.den;
	}else
	{
		somme.num = (nb1.num*nb2.den)+(nb2.num*nb1.den);
		somme.den = (nb1.den*nb2.den);
	}
	
	
	
	return somme;
	
}

//multiplication

Rationnel multip(Rationnel nb1, Rationnel nb2){
	
	Rationnel multip;
	
	multip.num = nb1.num * nb2.num;
	multip.den = nb1.den * nb2.den;
	
	return multip;
}

//Affichage

void affichage(Rationnel somme,Rationnel multip){
	
	int i;
	
	for(i=2; i<=10; i++){
		while(somme.num%i == 0 && somme.den%i == 0){
			
				somme.num = somme.num/i;
				somme.den = somme.den/i;
				
			}
			
		
		
		while(multip.num%i == 0 && multip.den%i == 0){
			
				multip.num = multip.num/i;
				multip.den = multip.den/i;
			}
			
		}
		
	if(somme.num == 1 && somme.den == 1 || somme.num != 1 && somme.den == 1)
		printf("La somme de ses 2 nombres rationnels est : %d\n\n",somme.num);
	else
		printf("La somme de ses 2 nombres rationnels est : %d/%d\n\n",somme.num,somme.den);
	
	if(multip.num == 1 && multip.den == 1 )
		printf("La multiplication de ces 2 nombres rationnel est : %d\n\n",multip.num);
	else
		printf("La multiplication de ces 2 nombres rationnel est : %d/%d\n\n",multip.num,multip.den);
}


int main(){
	
	Rationnel nb1, nb2, som, mul;
	
	printf("** Saisie du premier nombre rationnel**\n");
	
	nb1 = saisieRat();
	
	printf("** Saisie du deuxieme nombre rationnel**\n");
	
	nb2 = saisieRat();
	
	som = somme(nb1,nb2);
	
	mul = multip(nb1,nb2);
	
	//multipl = multipl(nb1,nb2);
	
	affichage(som,mul);
}

