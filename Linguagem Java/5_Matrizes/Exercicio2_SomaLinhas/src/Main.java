/* Professor: Nelio
Descrição: Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz
de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor
seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado.
Autor(a): João Renato Sant'Ana
Data atual: 19/07/2023 */

import java.util.Locale; 
import java.util.Scanner; 

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		int m, n, i, j;
	    double[][] mat = new double [9][9];
	    double[] vet = new double [9];

	    System.out.print ("Qual a quantidades de linha da matriz? ");
	    m = sc.nextInt();
	    System.out.print ("Qual a quantidades de colunas da matriz? ");
	    n = sc.nextInt();

	    for(i = 0; i < m; i++){

	    	System.out.println ("Digite os elementos da " + (i+1) + "a linha: ");

	        for(j = 0; j < n; j++){

	            mat[i][j] = sc.nextDouble();

	        }
	    }

	    for(i = 0; i < m; i++){

	        vet[i] = 0;

	        for(j = 0; j < n; j++){

	            vet[i] = vet[i] + mat[i][j];

	        }
	    }

	    System.out.println ("VETOR GERADO: ");

	    for(i = 0; i < m; i++){

	    	System.out.println (String.format("%.1f" , vet[i]));

	    }
	    
	    sc.close();

	}

}
