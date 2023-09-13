/* Professor: Nelio
Descrição: Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um
terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima
o vetor C gerado.
Autor(a): João Renato Sant'Ana
Data atual: 18/07/2023 */

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		int n, i;
	    int[] vetA = new int[9];
	    int[] vetB = new int[9];
	    int[] vetC = new int[9];

	    System.out.print ("Quantos valores vai ter cada vetor? ");
	    n = sc.nextInt();

	    System.out.println ("Digite os valores do vetor A: ");

	    for(i = 0; i < n; i++){

	        vetA[i] = sc.nextInt();

	    }

	    System.out.println ("Digite os valores do vetor B: ");

	    for(i = 0; i < n; i++){

	        vetB[i] = sc.nextInt();

	    }

	    System.out.println ("VETORES RESULTANTE: ");

	    for(i = 0; i < n; i++){

	        vetC[i] = vetA[i] + vetB[i];
	        System.out.println (vetC[i]);

	    }
	    
	    sc.close();

	}

}
