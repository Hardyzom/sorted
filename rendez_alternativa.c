#include <stdio.h>
#include <stdlib.h>

void tomb_kiir(int tomb[], int meret){
    for(int i=0; i<meret; i++){
        printf("%d ",tomb[i]);
    }
    puts("");
}

int* sorted(int meret, int tomb[]){
    int* result = malloc(meret*sizeof(int));
    for(int i = 0; i<meret; i++){
        result[i] = tomb[i];
    }

    for(int i = 0; i<meret; i++){
        for(int j = i+1; j<meret; j++){
            if(result[j] < result[i]){
                int tmp = result[j];
                result[j] = result[i];
                result[i] = tmp;
            }
        }
    }
    return result;
}

int main(){
    int tomb[5]={10, 4, 5, 8, 2};
    tomb_kiir(tomb, 5);
    int* rendezett = sorted(5,tomb);
    tomb_kiir(rendezett, 5);
    tomb_kiir(tomb, 5);

    free(rendezett);
return 0;

}