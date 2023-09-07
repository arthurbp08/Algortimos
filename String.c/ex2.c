#include <stdio.h>
#include <string.h>

main() {
    char linha[100],linha2[100],a;
    int i,j=0;
    printf("Insira a frase: ");
    gets(linha);
    
    printf("Insira a letra: ");
    scanf("\n%c",&a);
    
  for(i=0;i<100;i++)
  {
    if(linha[i]!=letra)
    {
        linha2{j}=linha[i];
        j++;
    }
  }
    
    printf("Sua string modificada eh: %c\n",linha2);
    
   
}
