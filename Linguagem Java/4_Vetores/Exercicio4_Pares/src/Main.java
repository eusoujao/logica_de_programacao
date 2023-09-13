/* Professor: Nelio
Descrição: Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na
tela todos os números pares, e também a quantidade de números pares.
Autor(a): João Renato Sant'Ana
Data atual: 18/07/2023 */

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		int n, i, soma;
	    int[] vet = new int[9];

	    System.out.print ("Quantos numeros voce vai digitar? ");
	    n = sc.nextInt();

	    soma = 0;

	    for(i = 0; i < n; i++)
	    {

	    	System.out.print ("Digite um numero: ");
	        vet[i] = sc.nextInt();

	    }

	    System.out.println ("\nNUMEROS PARES:");

	    for(i = 0; i < n; i++)
	    {

	        if(vet[i]%2 == 0)
	        {

	        	System.out.print (vet[i] + " ");
	            soma = soma + 1;

	        }
	    }

	    System.out.println ();
	    System.out.print ("\nQUANTIDADE DE PARES = " + soma);

	    sc.close();
	    
	}

}
