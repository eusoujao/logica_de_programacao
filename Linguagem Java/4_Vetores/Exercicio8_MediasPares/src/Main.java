/* Professor: Nelio
Descrição: Fazer um programa para ler um vetor de N números inteiros. Em seguida, mostrar na tela a média
aritmética somente dos números pares lidos, com uma casa decimal. Se nenhum número par for
digitado, mostrar a mensagem "NENHUM NUMERO PAR".
Autor(a): João Renato Sant'Ana
Data atual: 18/07/2023 */

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in); 
		
		int n, i, somaV;
	    double somaM, media;
	    int[] vet = new int [9];

	    System.out.print ("Quantos elementos vai ter o vetor? ");
	    n = sc.nextInt();

	    somaM = 0;
	    somaV = 0;

	    for(i = 0; i < n; i++){

	    	System.out.print ("Digite um numero: ");
	        vet[i] = sc.nextInt();

	    }

	    for(i = 0; i < n; i++){

	        if(vet[i]%2 == 0){

	            somaV = somaV + vet[i];
	            somaM = somaM + 1;

	        }
	    }

	    media = somaV / somaM;

	    if(somaV == 0){

	    	System.out.print ("NENHUM NUMERO PAR");

	    } else {

	    	System.out.print ("MEDIA DOS PARES = " + String.format("%.1f" , media));

	    }
	    
	    sc.close();


	}

}
