int main(void){
    

    int vetor[10], i;
        
    for(i=0; i<10; i++){
        printf("Entre com o número: %d\n", i + 1);
        scanf("%d",&vetor[i]);
    }
			
	printf("\nValores inseridos:\n"); 
             printf("[ ");
			 
    for(i=0; i<10; i++){
	 if ( vetor ==0 )
			vn = vn +1;
	 if( vetor >0)    
			vp = vp +1;
	if (vetor < 0){
		vng = vng + 1;
		
	}
	
				printf("Valores nulos: %d\n", vn,i+1);
				printf("Valores positivos: %d\n",vp,i+1);
				printf("Valores negativos: %d\n", vng,i+1);
	

    return 0;
}

}
