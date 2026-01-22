#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    
    double x = 0;
    int max = 0;
    int min = 0;

    if (argc==1){
        printf("normalize a b c...");
        return 1;
    }

    for (int i=1; i< argc; i++){
        if (atof(argv[i]) < min){
            min = atof(argv[i]);
        }
        else if (atof(argv[i]) > max){
            max = atof(argv[i]);
        }
    }

    for (int i=1; i< argc; i++){
        x = (atof(argv[i])-min)/(max-min);
        printf("%f \n", x);
    }
    
    return 0;
}
