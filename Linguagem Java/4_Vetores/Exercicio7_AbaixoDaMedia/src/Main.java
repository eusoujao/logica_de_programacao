/* Professor: Nelio
Descrição: Fazer um programa para ler um número inteiro N e depois um vetor de N números reais. Em seguida,
mostrar na tela a média aritmética de todos elementos com três casas decimais. Depois mostrar todos
os elementos do vetor que estejam abaixo da média, com uma casa decimal cada.
Autor(a): João Renato Sant'Ana
Data atual: 18/06/2023 */

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		int n, i;
	    double soma, media;
	    double[] vet = new double[9];

	    System.out.print ("Quantos elementos vai ter o vetor? ");
	    n = sc.nextInt();

	    soma = 0;

	    for( i = 0; i < n; i++){

	    	System.out.print ("Digite um numero: ");
	        vet[i] = sc.nextDouble();

	    }

	    for(i = 0; i < n; i++){

	        soma = soma + vet[i];

	    }

	    media = soma / n;

	    System.out.println ("\nMEDIA DO VETOR = " + String.format("%.3f" , media));

	    System.out.println ("ELEMENTOS ABAIXO DA MEDIA: ");

	    for(i = 0; i < n; i++){

	        if(vet[i] < media){

	        	System.out.println (String.format("%.1f" , vet[i]));

	        }
	    }
	    
	    sc.close();

	}

}
