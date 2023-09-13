/* Professor: Nelio
Descrição: Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida, mostrar na tela
o maior número do vetor (supor não haver empates). Mostrar também a posição do maior elemento,
considerando a primeira posição como 0 (zero).
Autor(a): João Renato Sant'Ana
Data atual: 18/07/2023 */

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		int n, i, posicao;
	    double maior;
	    double[] vet = new double [9];

	    System.out.print ("Quantos numeros voce vai digitar? ");
	    n = sc.nextInt();

	    posicao = 0;

	    for(i = 0; i < n; i++){

	    	System.out.print ("Digite um numero: ");
	        vet[i] = sc.nextDouble();

	    }

	    maior = vet[0];

	    for(i = 1; i < n; i++){

	        if(vet[i] > maior){

	            maior = vet[i];
	            posicao = i;

	        }
	    }

	    System.out.println ();
	    System.out.println ("MAIOR VALOR = " + String.format("%.1f" , maior));
	    System.out.print ("POSICAO DO MAIOR VALOR = " + posicao);
	    
	    sc.close();
		
	}

}
