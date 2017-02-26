
// Sukwhan Youn

#include <stdio.h>

int array1[10];
int *p;			//pointer to array
int i;
int number;     //input
int counter;

int main(){
	p=array1;
	scanf("%d", &number);
    int i=0;
    counter++;
	while (number != 0){
		*(p+i)=number;
        i++;
        counter++;
		scanf("%d", &number);
        if (i>9){
            i=0;
        }
	}

	//printing    
    printf("\n");
    if (counter <10){
        for (int y=0;y<counter;y++){
            if (*(p+y) !=0){
                printf("%d ",*(p+y));
            }
        }
    }
	for (int z=0;z<10;z++){
        if (*(p+i) != 0){
		    printf("%d ",*(p+i));
            i++;
        }
        if (i>9){
            i=0;
        }
	}
    printf("\n");

}
