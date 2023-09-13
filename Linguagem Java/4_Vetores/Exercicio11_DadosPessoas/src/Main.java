/* Professor: Nelio
Descrição: Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas. Fazer um programa
que calcule e escreva a maior e a menor altura do grupo, a média de altura das mulheres, e o número
de homens.
Autor(a): João Renato Sant'Ana
Data atual: 18/07/2023 */

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		int n, i, homem, mulher;
	    double somaM, maior, menor, media;
	    double[] vetA = new double [9];
	    char[] vetG = new char [9];

	    System.out.print ("Quantas pessoas serao digitadas? ");
	    n = sc.nextInt();

	    for(i = 0; i < n; i++){

	    	System.out.print ("Altura da " + (i+1) + "a pessoa: ");
	        vetA[i] = sc.nextDouble();
	        System.out.print ("Genero da " + (i+1) + "a pessoa (M/F): ");
	        vetG[i] = sc.next().charAt(0);

	    }

	    somaM = 0;
	    mulher = 0;
	    homem = 0;

	    for(i = 0; i < n; i++){

	        if(vetG[i] == 'F'){

	            somaM = somaM + vetA[i];
	            mulher = mulher + 1;

	        } else {

	            homem = homem + 1;

	        }
	    }

	    maior = vetA[0];
	    menor = vetA[0];

	    for(i = 1; i < n; i++){

	        if(vetA[i] > maior){

	            maior = vetA[i];

	        }

	        if(vetA[i] < menor){

	            menor = vetA[i];

	        }
	    }

	    media = somaM/mulher;

	    System.out.println ("Menor altura = " + String.format("%.2f" , menor));
	    System.out.println ("Maior altura = " + String.format("%.2f" , maior));
	    System.out.println ("Media das alturas das mulheres = " + String.format("%.2f" , media));
	    System.out.print ("Numero de homens = " + homem);
	    
	    sc.close();

	}

}
