/* Professor: Nelio
Descrição: Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
- Imprimir todos os elementos do vetor
- Mostrar na tela a soma e a média dos elementos do vetor
Autor(a): João Renato Sant'Ana
Data atual: 18/07/2023 */

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		int n, i;
	    double soma;
	    double[] vet = new double[9];

	    System.out.print ("Quantos numeros voce vai digitar? ");
	    n = sc.nextInt();

	    soma = 0;

	    for(i = 0; i < n; i++){

	    	System.out.print ("Digite um numero: ");
	        vet[i] = sc.nextDouble();

	    }


	    System.out.print ("\nValores = ");

	    for(i = 0; i < n; i++){

	    	System.out.print (String.format("%.1f" , vet[i]) + " ");
	        soma = soma + vet[i];

	    }

	    System.out.print ("\n");
	    System.out.println ("SOMA = " + String.format("%.2f" , soma));
	    System.out.println ("MEDIA = " + String.format("%.2f" , (soma / n)));
	    
	    sc.close();

	}

}
