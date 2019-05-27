

int main()
{
    int pri,seg,ter,maior=0,meio=0,menor=0;

    printf("\n\tDigite o primeiro numero: ");
    scanf("%d",&pri);
    printf("\n\tDigite o segundo numero: ");
    scanf("%d",&seg);
    printf("\n\tDigite o terceiro numero: ");
    scanf("%d",&ter);

    if(pri>seg&&pri>ter){
        maior=pri;
        if(seg>ter){
        meio=seg;
        menor=ter;}
        else{
        meio=ter;
        menor=seg;}}

        else if(seg>pri&&seg>ter){
                maior=seg;
                if(pri>ter){
                meio=pri;
                menor=ter;}
                else{
                meio=ter;
                menor=pri;}}

        else if(ter>pri&&ter>seg){
                maior=ter;
                if(pri>seg){
                meio=pri;
                menor=seg;}
                else{
                meio=seg;
                menor=pri;}}

    printf("\n\tA ordem crescente destes numeros eh: %d, %d, %d",menor,meio,maior);

    exit(0);
}
