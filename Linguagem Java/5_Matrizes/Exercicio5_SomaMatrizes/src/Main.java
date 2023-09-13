/* Professor: Nelio
Descrição: Fazer um programa para ler duas matrizes de números inteiros A e B, contendo de M linhas e N colunas
cada (M e N máximo = 10). Depois, gerar uma terceira matriz C onde cada elemento desta é a soma
dos elementos correspondentes das matrizes originais. Imprimir na tela a matriz gerada.
Autor(a): João Renato Sant'Ana
Data atual: 19/07/2023 */

import java.util.Locale; 
import java.util.Scanner; 

public class Main {

	public static void main(String[] args) {
		
		 Locale.setDefault(Locale.US); 
		 Scanner sc = new Scanner(System.in);
		
		    int m, n, i, j;
		    int[][] matA = new int [9][9];
		    int[][] matB = new int [9][9];
		    int[][] matC = new int [9][9];

		    System.out.print ("Quantas linhas vai ter a matriz? ");
		    m = sc.nextInt();
		    System.out.print ("Quantas colunas vai ter a matriz? ");
		    n = sc.nextInt();

		    System.out.println ("Digite os valores da matriz A: ");

		    for(i = 0; i < m; i++){

		        for(j = 0; j < n; j++){

		        	System.out.print ("Elemento [" + i + "," + j + "]:");
		            matA[i][j] = sc.nextInt();

		        }
		    }

		    System.out.println ("Digite os valores da matriz B: ");

		    for(i = 0; i < m; i++){

		        for(j = 0; j < n; j++){

		        	System.out.print ("Elemento [" + i + "," + j + "]:");
		            matB[i][j] = sc.nextInt();

		        }
		    }

		    System.out.println ("MATRIZ SOMA:");

		    for(i = 0; i < m; i++){

		        for(j = 0; j < n; j++){

		            matC[i][j] = matA[i][j] + matB[i][j];
		            System.out.print (matC[i][j] + " ");

		        }

		        System.out.println ();

		    }
		    
		    sc.close();

	}

}
