

int main()
{
    int planetas;
    float massa,peso;

    printf("\n\t1-Mercurio\n\t2-Venus\n\t3-Marte\n\t4-Jupiter\n\t5-Saturno\n\t6-Urano");
    printf("\n\tDigite um numero de 1 a 6 de acordo com a tabela acima: ");
    scanf("%i",&planetas);
    printf("\n\tDigite sua massa: ");
    scanf("%f",&massa);

    switch(planetas){
    case 1:
        peso=massa*0.37;
        printf("\n\tSeu peso neste planeta eh de: %f",peso);
        break;

    case 2:
        peso=massa*0.88;
        printf("\n\tSeu peso neste planeta eh de: %f",peso);
        break;
    
    case 3:
        peso=massa*0.38;
        printf("\n\tSeu peso neste planeta eh de: %f",peso);
        break;
    
    case 4:
        peso=massa*2.64;
        printf("\n\tSeu peso neste planeta eh de: %f",peso);
        break;

    case 5:
        peso=massa*1.15;
        printf("\n\tSeu peso neste planeta eh de: %f",peso);
        break;

    case 6:
        peso=massa*1.17;
        printf("\n\tSeu peso neste planeta eh de: %f",peso);
        break;

    default:
	printf("\n\tPlaneta invalido");}

    exit(0);

}
